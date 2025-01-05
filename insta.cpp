#include <iostream> 
#include <chrono>
#include <unordered_map>
#include <list> 
#include <string> 
//#include <vector>
//these are used for basic operations like string the queue for user is custom made in code
using namespace std;  
void inputString(string& str) 
{ 

    if (cin.rdbuf()->in_avail() > 0) //this  will check if  there is input buffer or not 
    {
        cin.ignore();
        getline(cin, str);
    }
    else
    {    
        getline(cin, str );
    } 
}
void input(int& inpt ,int min=0,int max=INT_MAX)
{
    cin >> inpt; 
    if (cin.fail() || inpt < min || inpt > max)
    {
        cin.clear();
        cin.ignore(1000, '\n');
       
        cout << "ENTER AN INTEGER FROM " << min << " - " << max << endl;
        return input(inpt, min, max);
    }
    else
        return; 
}

struct Post
{
public:  
	string date; 
	string time; 
	string caption; 
    void post()
    {
        string st;
        cout << "ENTER CAPTION FOR POST : ";
        inputString(st); 
        AddPost(st); 
    }
    void AddPost(string str)
    {
        caption = str;  
        // Get the current time
        auto now = chrono::system_clock::now();
        time_t now_time = chrono::system_clock::to_time_t(now);
        tm local_time;  // Declare a tm object

        // Use localtime_s for thread-safety
        localtime_s(&local_time, &now_time);

        // Format the date and time
        date = to_string(1900 + local_time.tm_year) + "-" +
            to_string(1 + local_time.tm_mon) + "-" +
            to_string(local_time.tm_mday);
        time = to_string(local_time.tm_hour) + ":" +
            to_string(local_time.tm_min) + ":" +
            to_string(local_time.tm_sec);
    } 
    void Display()
    {
        cout << "\nPOST : "; 
        cout<<"DATE : " << date<<endl; 
        cout << "TIME : " << time << endl; 
        cout << "CAPTION : " << caption << endl;
    }
};
class  Data
{
public:
	string name; 
	string password; 
	string login;   
	string city;   
	vector<Post> post;   
    
	void Input() 
	{ 
		cin.ignore(); 
		cout << "ENTER NAME  : "; 
		inputString(name);  
		cout << "ENTER PASSWORD  : "; 
		inputString(password); 
		cout << "ENTER CITY  : "; 
		inputString(city); 
	}
	void display()
	{
		cout <<"NAME : "<<name << "\n" << "CITY : " << city << endl;
	} 
    void UserPost(Post pt)
    {
        post.push_back(pt); //adding post to vector 
       
    }
    void DisplayAllPosts()
    {
        for (auto i : post) 
        { 
            i.Display();  
        }
    }
	// Hash function for Data to use it in unordered_map
	bool operator==(const Data& other) const
	{ 
		return name == other.name;
	}

	struct Hash
	{
		size_t operator()(const Data& d) const
		{
			return hash<string>()(d.name);  // Hash based on 'name'
		}
	};
};
class relation
{
public:
	string relation; 
	string status;  


	void input()
	{
          
		cout << "ENTER REALTION : "; 
		inputString(relation); 
		cout << "ENTER STATUS : "; 
		inputString(status); 
	} 
	void display()
	{
		cout << relation << "  " << status << endl;
	}
}; 
class Graph
{
public: 
	unordered_map<Data,list< pair<Data, relation>>,Data::Hash> adj ;
	void AddUser(Data node1 , Data node2 , relation edge)
	{ 
		adj[node1].push_back(make_pair(node2,edge) ); 
		adj[node2].push_back(make_pair(node1, edge));  
	}  
    void DisplayUser(Data user )
    { 
        cout << user.name << " FOLLOWERS : \n";
        for (auto i : adj[user])
        {   
            Data& connectedUser = i.first; // Connected user
            relation& rel = i.second; // Relation data
             
            cout << "  -> Followed by : " << connectedUser.name << " ";
            cout << "(Relation: " << rel.relation << ", Status: " << rel.status << ")\n";
        }
    }
	 
};
struct Node
{
    Data data;
    Node* left;
    Node* right;
    int height;

    Node(Data data) : data(data), left(nullptr), right(nullptr), height(1) {}
};
class AVLTree
{
public:
   

    Node* root;
AVLTree ()
{
    root = NULL;
}
    int height(Node* node)
    {
        if (node == nullptr) return 0;
        return node->height;
    } 
    Data getRootData() {
        return root->data;
    }

    void updateHeight(Node* node)
    {
        node->height = max(height(node->left), height(node->right)) + 1;
    }

    int balanceFactor(Node* node)
    {
        if (node == nullptr) return 0;
        return height(node->left) - height(node->right);
    }
     
    Node* rightRotate(Node* y)
    {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        updateHeight(y);
        updateHeight(x);

        return x;
    }
    Data searchByName(const string& name)
    {
        Node* current = root;

        while (current != nullptr) 
        {
             
            if (name == current->data.name) 
            {
                return current->data; 
            }
            if (name < current->data.name) 
            {
                current = current->left; 
            }
            else {
                current = current->right;
            }
        }
        
        throw runtime_error("NAME NOT FOUND !"); // Throw an error if not found
    } 

    Node* leftRotate(Node* x)
    {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x; 
        x->right = T2;

        updateHeight(x);
        updateHeight(y);

        return y;
    }

    Node* balance(Node* node)
    {
        int balance = balanceFactor(node);

        if (balance > 1)
        {
            if (balanceFactor(node->left) < 0)
                node->left = leftRotate(node->left);
            return rightRotate(node);
        }
         
        if (balance < -1)
        {
            if (balanceFactor(node->right) > 0)
                node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    Node* insert(Node* node, const Data& data)
    {
        if (node == nullptr)
        {
            return new Node(data);
        }

        if (data.name < node->data.name)
        {
            node->left = insert(node->left, data);
        }
        else if (data.name > node->data.name)
        {
            node->right = insert(node->right, data);
        }
        else
        {
            return node;
        }

        updateHeight(node);

        return balance(node);
    }

    void inorder(Node* node)
    {
        if (node == nullptr)
            return;
        
        inorder(node->left);
        node->data.display();
        inorder(node->right);
    }

    

    void insert(const Data& data)
    {
        root = insert(root, data);
    }

    void display()
    {
        inorder(root);
    }
}; 
 
template <typename T>
class stack
{
private:
    // Node structure for the linked list
    struct Node//i made it inside so i dont have to redecalre the template 
    {
        T data;
        Node* next;

        Node(const T& data, Node* next = nullptr)
            : data(data), next(next) {}
    };

    Node* topNode; // Pointer to the top element
    int stackSize; // Keep track of the number of elements

public:
    // Constructor
    stack() : topNode(nullptr), stackSize(0) {}

    // Destructor to free memory
    ~stack()
    {    
        while (!empty())
        {
            pop();
        }
    }

    // Check if the stack is empty
    bool empty() const
    {
        return topNode == nullptr;
    }

    // Get the size of the stack
    int size() const
    {
        return stackSize;
    }

    // Access the top element
    T& top()
    {
        if (empty())
        {
            throw runtime_error("Stack is empty!");
        }
        return topNode->data;
    }

    const T& top() const
    {
        if (empty())
        {
            throw runtime_error("Stack is empty!");
        }
        return topNode->data;
    }

    // Push an element onto the stack
    void push(const T& value)
    {
        topNode = new Node(value, topNode); // Create a new node and link it
        stackSize++;
    }

    void push(T&& value)
    {
        topNode = new Node(move(value), topNode); // Handle rvalue references
        stackSize++;
    }

    // Pop the top element from the stack
    void pop()
    {
        if (empty())
        {
            throw runtime_error("Stack is empty!");
        }

        Node* temp = topNode; // Save the current top node
        topNode = topNode->next; // Move the top pointer to the next node
        delete temp; // Delete the old top node
        stackSize--;
    }
};
template <typename T>  
struct NodeQ
{
    T data;
    NodeQ* next;

    NodeQ(T data)  
     { 
        this->data = data; 
        next = NULL;  
    }
};
template <typename T> 
class Queue  
{
private:
  
    NodeQ<T>* front;
    NodeQ<T>* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(const T& data)
    {
        NodeQ<T>* newNode = new NodeQ<T>(data);
        if (rear == nullptr)
        {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }


    void dequeue()
    {
        if (front == nullptr) 
            return;

        NodeQ<T>* temp = front;
        front = front->next;
        delete temp; 

        if (front == nullptr)
            rear = nullptr;
    }

    void displayQueue()
    {
        NodeQ<T>* temp = front;
        while (temp != nullptr)
        {
            cout << temp->data.name << " ";
            temp = temp->next; 
        }
        cout << endl;  
    }
    T peek()
    {             

        if (front == nullptr)    
        {
            throw std::runtime_error("NO REQUESTS FOR NOW  !!!"); 
        }
        return front->data; 
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
}; 
class Instagram
{ 
    Graph graph;
    AVLTree BST;  
    Data user,CurrentUser;  
    relation rel; 
   unordered_map<Data, Queue<Data> , Data::Hash>PendingList; //this will holding pending requests for each user   
   unordered_map<Data, Queue<string>, Data::Hash>notifications;//this will hold all the  notifications for each iser 
   unordered_map<Data ,stack<string>, Data::Hash>msg;   //it is a map which has key as stack which will store messages  
   vector<Post> Post_Vector; //This vector holds all posts  
public: 
    void menu() 
    {
        int choice;
        string name;   
        Data temp;
        Post pt;
        system("pause");
        system("cls");
        cout << "\n1.ADD USER\n2.SIGN IN\n3.LOGOUT \n4.SEND FOLLOW REQUEST \n5.ACCEPT REQUEST\n6.VEIW POSTS  \n7.NOTIFICATIONS\n8.MESSAGE\n9.SEARCH USER\n10.FOLLOWERS LIST \n11.POST \n12.NEWS FEED\n13.EXIT\n  ";
      
        input( choice,1,13);
        switch (choice)  
        {  
        case 1:    
            system("cls");
            user.Input(); 
            BST.insert(user); //adding the user to binary search tree   
            
            return menu();  
        case 2:   
            system("cls");
            try
            {
                signin();
            }
            catch (const exception& e)
            {
                cout << "Error : " << e.what() << endl;
            }

            return menu();
        case 3: 
            
            CurrentUser = temp; 
            cout << "\nYOU ARE NOW LOGGED OUT\n ";
            return menu(); 
        case 4:    
            system("cls");
            try
            {
                cout << "ENTER NAME OF PERSON U WANT TO FOLLOW : ";
                cin.ignore();
                inputString(name);
                Data user = BST.searchByName(name);  
                cout << "\nREQUEST SENT ! ";   
                notifications[user].enqueue(CurrentUser.name + " SENT U A FOLLOW REQUEST "); 
                notifications[CurrentUser].enqueue("REQUEST SENT TO " + name);
                PendingList[user].enqueue(CurrentUser);//storing the current user  in queue   ///bcd 
            }
            catch (const exception& e)
            { 
                cout << e.what() << endl;
            }
            return menu(); 
        case 5:
            system("cls");
            try
            {
                cout << "THESE ARE REQUESTS : ";
                PendingList[CurrentUser].displayQueue();
                cout << "1.ACCEPT REQUEST 2.DENY REQUEST 3.ACCEPT ALL 4.REJECT ALL 5.EXIT\n";
                input(choice, 1, 5);

                switch (choice)
                {
                case 1:
                    addRealtion();
                    break;
                case 2: 
                    PendingList[CurrentUser].dequeue();
                    break;
                case 3:
                    while (!PendingList[CurrentUser].isEmpty())
                    {
                        addRealtion();
                    } 
                    break;
                case 4:
                    while (!PendingList[CurrentUser].isEmpty())
                    {
                        PendingList[CurrentUser].dequeue();

                    }
                    break;
                case 5:
                    break;
                }
            }
            catch (const exception& e)
            {
                cout  << e.what() << endl;
            }
            return menu();   
        case 6: 
            system("cls"); 
            VeiwPosts(); 
            return menu(); 
        case 7:  
            system("cls"); 
            cout << "------------- NOTIFICATIONS -------------\n"; 
            try
            { 
                
                while (!notifications[CurrentUser].isEmpty())
                {
                    cout << "-> " << notifications[CurrentUser].peek() << endl; //displaying notification 
                    notifications[CurrentUser].dequeue(); //removing notifiaction from queue 
                }
            }
            catch (const runtime_error& e) 
            {
                cout<< "NO NOTIFICATIONS FOR NOW ! " << endl;
            }
            return menu();  
            cout << "1.SEE MESSAGES \n2.SEND MESSAGE \n"; 
            input(choice);  
        case 8:   
            system("cls");   
            switch (choice)
            {
            case 1:  
                try  
                {
                    while (!msg[CurrentUser].empty())
                    {
                        cout << msg[CurrentUser].top()<<endl ;
                        msg[CurrentUser].pop();
                    }
                }  
                catch (const exception& e)
                {
                    cout << e.what() << endl;
                } 
                break; 
            case 2: 
                cout << "ENTER NAME OF PERSON U WANT TO TALK TO : ";
                cin.ignore();
                inputString(name);
                try
                {

                    Data user = BST.searchByName(name);
                    cout << "ENTER YOUR MESSAGE TO " << user.name << " : ";
                    inputString(name); //reusing the name variable 
                    msg[user].push(CurrentUser.name+" : "+name); /// stroing  the text in stack    
                    notifications[user].enqueue(CurrentUser.name + " SENT U A MESSAGE ! ");  //adding to notifications   
                }  
                catch (const exception& e)
                {
                    cout << e.what() << endl;
                }
            }
            return menu();  
        case 9:  
            system("cls");
            cout << "ENTER NAME OF PERSON U WANT TO SEARCH : ";
            cin.ignore();
            inputString(name);
            try
            {
                BST.searchByName(name).display(); //displaying the users data here 
            } 
            catch (const exception& e)
            {
                cout  << e.what() << endl;
            }
            return menu(); 
             
        case 10:   
            system("cls");
            graph.DisplayUser(CurrentUser); 
            return menu(); 

        case 11: 
            system("cls");
            
            pt.post();
            CurrentUser.UserPost(pt);
            Post_Vector.push_back(pt); 
            
            return menu(); 
        case 12 : 
            system("cls");
            CurrentUser.DisplayAllPosts();  
            return menu(); 
        case 0 : 
            return; 
        }  

    }  
    void signin()
    {
        string name; 
        cout << "ENTER USER  NAME : ";   
        inputString(name);  
        Data user = BST.searchByName(name); 
        cout << "ENTER YOUR PASSWORD : ";
        inputString(name); //reusing the name varible 
        if (name == user.password)//checking if password is corred 
        {
            cout << "YOU ARE NOW LOGGED IN !";
            CurrentUser = user; //now this is the current user 
        }
        else
        {
            cout << "INVALID PASSWORD SIGIN FAILED  ! "; 

        }
        

    } 
    void addRealtion()
    {   
        Data user2 = PendingList[CurrentUser].peek();
        PendingList[CurrentUser].dequeue(); //removiiig user  
        cout << "ENTER YOUR RELATION WITH   "<<user2.name<<"\n";
        rel.input();  //taking input of relation ship 
        string notfy;    
        notfy = "YOU ARE NOW FRIENDS WITH  " + user2.name; 
        notifications[CurrentUser].enqueue(notfy);//givign notifications to stack 
        notfy ="YOU ARE NOW FRIENDS WITH  " + CurrentUser.name;
        notifications[user2].enqueue(notfy);//sending notofication to both users
        graph.AddUser(CurrentUser, user2, rel);//adding to graph 
    } 
    void VeiwPosts() //pre order traversal 
    {
        for (auto i : Post_Vector)
        { 
            i.Display();
        } 
    }  
    void instructions()
    { 
        cout << "---------------  INSTRUCTIONS ----------------------\n";
        cout << "1.KNDLY ADD USER TO START ISNTAGRAM THEN LOGIN \n"; 
        cout << "2.UNTIL U LOGIN U WILL BE USING A GUEST ACCOUNT \n"; 
        cout << "3.ALL OTHER OPTIONS ARE THERE ON THE MENU\n"; 
        cout << "------------- THANK YOU FOR READING ! --------------\n"; 
        cout << "             PRESS ENTER TO CONTINUE        \n   ";
    }
};    

int main()
{ 
    Instagram inst;   
    inst.instructions(); 
   inst.menu();  
   
}    