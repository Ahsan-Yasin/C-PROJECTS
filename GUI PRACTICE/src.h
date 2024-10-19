#ifndef SRC_H
#define  SRC_H

#include <iostream>
using namespace std;
struct node
{
	char data;
	node* next;
	node(char value)
	{
		this->data = value;
		next = nullptr;
	}
};
struct node_int
{
	int data;
	node_int* next;
	node_int(int value)
	{
		data = value;
		next = nullptr;
	}
};
ref class stack_int
{
	node_int* Top;
public:
	stack_int()
	{
		Top = nullptr;
	}
	~stack_int()
	{
		delete Top;
		Top = nullptr;
	}
	int  top()
	{
		if (isEmpty())
			return 0;
		node_int* temp = Top;
		while (temp->next)
		{
			temp = temp->next;
		}
		return temp->data;

	}
	void  push(int  value)
	{
		if (!Top)
		{
			Top = new node_int(value);
		}
		else
		{
			node_int* temp = Top;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new node_int(value);
		}
	}
	int  pop()
	{

		if (isEmpty())
			return 0;
		node_int* temp = Top;

		while (temp->next && temp->next->next)
		{
			temp = temp->next;

		}
		int  returner;
		if (temp->next)
		{
			returner = temp->next->data;
			delete temp->next;
			temp->next = nullptr;
		}
		else
		{
			returner = Top->data;
			delete Top;
			Top = nullptr;
		}
		return returner;
	}

	bool isEmpty()
	{
		return !Top;
	}

};
ref class stack
{
	node* Top;
public:
	stack()
	{
		Top = nullptr;
	}
	~stack()
	{
		delete Top;
		Top = nullptr;
	}
	char top()
	{
		node* temp = Top;
		while (temp->next)
		{
			temp = temp->next;
		}
		return temp->data;

	}
	void  push(char value)
	{
		if (!Top)
		{
			Top = new node(value);
		}
		else
		{
			node* temp = Top;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new node(value);
		}
	}
	char pop()
	{
		node* temp = Top;
		while (temp->next && temp->next->next)
		{
			temp = temp->next;
		}
		char returner;
		if (temp->next)
		{
			returner = temp->next->data;
			delete temp->next;
			temp->next = nullptr;
		}
		else
		{
			returner = Top->data;
			delete Top;
			Top = nullptr;
		}
		return returner;
	}

	bool isEmpty()
	{
		return !Top;
	}

};
int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '*' || c == '/')
		return 2;
	else if (c == '-' || c == '+')
		return 1;
	else
		return -1;
}
int EvaluatePos(string str) {
	stack_int st;
	if (str[0] == '\0')
		return 0;
	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			st.push(str[i] - '0'); // Convert char to int
		}
		else if (str[i] == ' ')
		{
			continue;
		}
		else
		{
			int y = st.pop();
			int x = st.pop();
			switch (str[i]) {
			case '+':
				st.push(x + y);
				break;
			case '-':
				st.push(x - y);
				break;
			case '*':
				st.push(x * y);
				break;
			case '/':

				st.push(x / y);
				break;


			}
		}
	}
	return st.pop();
}
string infixToPostFix(string str)
{
	stack st;
	string  res = "";

	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			res += str[i];
		} 
		else if (str[i] == '(')
		{
			st.push('(');
		}
		else if (str[i] == ')')
		{
			while (!st.isEmpty() && st.top() != '(')
			{

				res += st.pop();

			}
			if (!st.isEmpty())
			{

				st.pop();//popping the opening bracket  
			}
		}
		else
		{
			while (!st.isEmpty() && prec(st.top()) > prec(str[i]))
			{
				res += st.pop();
			}
			st.push(str[i]);
		}
	}
	while (!st.isEmpty())
	{
		res += st.pop();
	}
	return res;
}
#endif // !1
