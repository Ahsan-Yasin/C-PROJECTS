#pragma once
#include "Game.h" 
#include "student.h"
namespace GameofCards {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainGame
	/// </summary>
	public ref class MainGame : public System::Windows::Forms::Form
	{ 
	private: 
		Game^ game; 
		int CardFlipped; 
		array<int>^ index;  
		int  i;
		int counter;
		int TotalScore; 
		String^ gameType; 

		student^ obj; 
		array<System::Drawing::Point>^ textBoxLocations = gcnew array<System::Drawing::Point>(20);
	private: System::Windows::Forms::Label^ resume;

		    
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ quit;

		   array<System::Drawing::Size>^ textBoxSizes = gcnew array<System::Drawing::Size>(20);
	public:
		MainGame(String^problems,student ^obj2)
		{
		obj = obj2; 
			InitializeComponent(); 
			gameType = problems; 
			//
			//TODO: Add the constructor code here
			// 
			game = gcnew Game(problems);  
			CardFlipped = 0;
			index = gcnew array<int>(3); 
			i = 0; 
			counter = 0;   
			TotalScore;
			setValues(); 
			
		}
		void setValues()
		{
			setText(); 
			int y = 268;
			textBoxLocations[0] = System::Drawing::Point(35, y);//1
			textBoxSizes[0] = System::Drawing::Size(74, 67);

			textBoxLocations[1] = System::Drawing::Point(132, y);//2
			textBoxSizes[1] = System::Drawing::Size(73, 67);

			textBoxLocations[2] = System::Drawing::Point(230, y);//3
			textBoxSizes[2] = System::Drawing::Size(72, 67);

			textBoxLocations[3] = System::Drawing::Point(325, y);//4
			textBoxSizes[3] = System::Drawing::Size(73, 67);

			textBoxLocations[4] = System::Drawing::Point(425, y);//5
			textBoxSizes[4] = System::Drawing::Size(73, 67);

			textBoxLocations[5] = System::Drawing::Point(525, y);//6
			textBoxSizes[5] = System::Drawing::Size(73, 67);

			textBoxLocations[6] = System::Drawing::Point(620, y);//7
			textBoxSizes[6] = System::Drawing::Size(73, 67);

			textBoxLocations[7] = System::Drawing::Point(715, y);//8
			textBoxSizes[7] = System::Drawing::Size(73, 67);

			textBoxLocations[8] = System::Drawing::Point(815, y);//9
			textBoxSizes[8] = System::Drawing::Size(73, 67);
			
			textBoxLocations[9] = System::Drawing::Point(912, y);//10 
			textBoxSizes[9] = System::Drawing::Size(73, 67);
			y = 440; //resetting the y axisi vlaues for the cards at bottom 
			textBoxLocations[10] = System::Drawing::Point(35, y);
			textBoxSizes[10] = System::Drawing::Size(73, 67);

			textBoxLocations[11] = System::Drawing::Point(132, y);
			textBoxSizes[11] = System::Drawing::Size(73, 67);

			textBoxLocations[12] = System::Drawing::Point(230, y);
			textBoxSizes[12] = System::Drawing::Size(73, 67);

			textBoxLocations[13] = System::Drawing::Point(325, y);
			textBoxSizes[13] = System::Drawing::Size(73, 67);

			textBoxLocations[14] = System::Drawing::Point(425, y);
			textBoxSizes[14] = System::Drawing::Size(73, 67);

			textBoxLocations[15] = System::Drawing::Point(525, y);
			textBoxSizes[15] = System::Drawing::Size(73, 67);

			textBoxLocations[16] = System::Drawing::Point(620, y);
			textBoxSizes[16] = System::Drawing::Size(73, 67);

			textBoxLocations[17] = System::Drawing::Point(715, y);
			textBoxSizes[17] = System::Drawing::Size(73, 67);

			textBoxLocations[18] = System::Drawing::Point(815, y);
			textBoxSizes[18] = System::Drawing::Size(73, 67);

			textBoxLocations[19] = System::Drawing::Point(913, y);
			textBoxSizes[19] = System::Drawing::Size(73, 67);



		}
		void setText()
		{
			textBox1->Text = game->CardsArray[0]->Number.ToString(); //i am getting the number of each card and converting it to string then passing it to the text box 
			textBox2->Text = game->CardsArray[1]->Number.ToString();
			textBox3->Text = game->CardsArray[2]->Number.ToString();
			textBox4->Text = game->CardsArray[3]->Number.ToString();
			textBox5->Text = game->CardsArray[4]->Number.ToString();
			textBox6->Text = game->CardsArray[5]->Number.ToString();
			textBox7->Text = game->CardsArray[6]->Number.ToString();
			textBox8->Text = game->CardsArray[7]->Number.ToString();
			textBox9->Text = game->CardsArray[8]->Number.ToString();
			textBox10->Text = game->CardsArray[9]->Number.ToString();
			textBox11->Text = game->CardsArray[10]->Number.ToString();
			textBox12->Text = game->CardsArray[11]->Number.ToString();
			textBox13->Text = game->CardsArray[12]->Number.ToString();
			textBox14->Text = game->CardsArray[13]->Number.ToString();
			textBox15->Text = game->CardsArray[14]->Number.ToString();
			textBox16->Text = game->CardsArray[15]->Number.ToString();
			textBox17->Text = game->CardsArray[16]->Number.ToString();
			textBox18->Text = game->CardsArray[17]->Number.ToString();
			textBox19->Text = game->CardsArray[18]->Number.ToString();
			textBox20->Text = game->CardsArray[19]->Number.ToString();

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ Card1;
	private: System::Windows::Forms::PictureBox^ Card2;
	private: System::Windows::Forms::PictureBox^ Card3;
	private: System::Windows::Forms::PictureBox^ Card4;
	private: System::Windows::Forms::PictureBox^ Card5;
	private: System::Windows::Forms::PictureBox^ Card6;
	private: System::Windows::Forms::PictureBox^ Card7;
	private: System::Windows::Forms::PictureBox^ Card8;
	private: System::Windows::Forms::PictureBox^ Card9;
	private: System::Windows::Forms::PictureBox^ Card10;
	private: System::Windows::Forms::PictureBox^ Card11;
	private: System::Windows::Forms::PictureBox^ Card16;
	private: System::Windows::Forms::PictureBox^ Card15;
	private: System::Windows::Forms::PictureBox^ Card14;
	private: System::Windows::Forms::PictureBox^ Card13;
	private: System::Windows::Forms::PictureBox^ Card12;
	private: System::Windows::Forms::PictureBox^ Card17;
	private: System::Windows::Forms::PictureBox^ Card18;
	private: System::Windows::Forms::PictureBox^ Card19;
	private: System::Windows::Forms::PictureBox^ Card20;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainGame::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Card1 = (gcnew System::Windows::Forms::PictureBox());
			this->Card2 = (gcnew System::Windows::Forms::PictureBox());
			this->Card3 = (gcnew System::Windows::Forms::PictureBox());
			this->Card4 = (gcnew System::Windows::Forms::PictureBox());
			this->Card5 = (gcnew System::Windows::Forms::PictureBox());
			this->Card6 = (gcnew System::Windows::Forms::PictureBox());
			this->Card7 = (gcnew System::Windows::Forms::PictureBox());
			this->Card8 = (gcnew System::Windows::Forms::PictureBox());
			this->Card9 = (gcnew System::Windows::Forms::PictureBox());
			this->Card10 = (gcnew System::Windows::Forms::PictureBox());
			this->Card11 = (gcnew System::Windows::Forms::PictureBox());
			this->Card16 = (gcnew System::Windows::Forms::PictureBox());
			this->Card15 = (gcnew System::Windows::Forms::PictureBox());
			this->Card14 = (gcnew System::Windows::Forms::PictureBox());
			this->Card13 = (gcnew System::Windows::Forms::PictureBox());
			this->Card12 = (gcnew System::Windows::Forms::PictureBox());
			this->Card17 = (gcnew System::Windows::Forms::PictureBox());
			this->Card18 = (gcnew System::Windows::Forms::PictureBox());
			this->Card19 = (gcnew System::Windows::Forms::PictureBox());
			this->Card20 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->resume = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->quit = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1444, 754);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainGame::pictureBox1_Click);
			// 
			// Card1
			// 
			this->Card1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card1.Image")));
			this->Card1->Location = System::Drawing::Point(42, 302);
			this->Card1->Name = L"Card1";
			this->Card1->Size = System::Drawing::Size(111, 149);
			this->Card1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card1->TabIndex = 1;
			this->Card1->TabStop = false;
			this->Card1->Click += gcnew System::EventHandler(this, &MainGame::Card1_Click);
			// 
			// Card2
			// 
			this->Card2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card2.Image")));
			this->Card2->Location = System::Drawing::Point(168, 302);
			this->Card2->Name = L"Card2";
			this->Card2->Size = System::Drawing::Size(111, 149);
			this->Card2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card2->TabIndex = 2;
			this->Card2->TabStop = false;
			this->Card2->Click += gcnew System::EventHandler(this, &MainGame::Card2_Click);
			// 
			// Card3
			// 
			this->Card3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card3.Image")));
			this->Card3->Location = System::Drawing::Point(294, 302);
			this->Card3->Name = L"Card3";
			this->Card3->Size = System::Drawing::Size(111, 149);
			this->Card3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card3->TabIndex = 3;
			this->Card3->TabStop = false;
			this->Card3->Click += gcnew System::EventHandler(this, &MainGame::Card3_Click);
			// 
			// Card4
			// 
			this->Card4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card4.Image")));
			this->Card4->Location = System::Drawing::Point(424, 302);
			this->Card4->Name = L"Card4";
			this->Card4->Size = System::Drawing::Size(111, 149);
			this->Card4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card4->TabIndex = 4;
			this->Card4->TabStop = false;
			this->Card4->Click += gcnew System::EventHandler(this, &MainGame::Card4_Click);
			// 
			// Card5
			// 
			this->Card5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card5.Image")));
			this->Card5->Location = System::Drawing::Point(555, 302);
			this->Card5->Name = L"Card5";
			this->Card5->Size = System::Drawing::Size(111, 149);
			this->Card5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card5->TabIndex = 5;
			this->Card5->TabStop = false;
			this->Card5->Click += gcnew System::EventHandler(this, &MainGame::Card5_Click);
			// 
			// Card6
			// 
			this->Card6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card6.Image")));
			this->Card6->Location = System::Drawing::Point(688, 302);
			this->Card6->Name = L"Card6";
			this->Card6->Size = System::Drawing::Size(111, 149);
			this->Card6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card6->TabIndex = 6;
			this->Card6->TabStop = false;
			this->Card6->Click += gcnew System::EventHandler(this, &MainGame::Card6_Click);
			// 
			// Card7
			// 
			this->Card7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card7.Image")));
			this->Card7->Location = System::Drawing::Point(814, 302);
			this->Card7->Name = L"Card7";
			this->Card7->Size = System::Drawing::Size(111, 149);
			this->Card7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card7->TabIndex = 7;
			this->Card7->TabStop = false;
			this->Card7->Click += gcnew System::EventHandler(this, &MainGame::Card7_Click);
			// 
			// Card8
			// 
			this->Card8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card8.Image")));
			this->Card8->Location = System::Drawing::Point(947, 302);
			this->Card8->Name = L"Card8";
			this->Card8->Size = System::Drawing::Size(111, 149);
			this->Card8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card8->TabIndex = 8;
			this->Card8->TabStop = false;
			this->Card8->Click += gcnew System::EventHandler(this, &MainGame::Card8_Click);
			// 
			// Card9
			// 
			this->Card9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card9.Image")));
			this->Card9->Location = System::Drawing::Point(1080, 302);
			this->Card9->Name = L"Card9";
			this->Card9->Size = System::Drawing::Size(111, 149);
			this->Card9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card9->TabIndex = 9;
			this->Card9->TabStop = false;
			this->Card9->Click += gcnew System::EventHandler(this, &MainGame::Card9_Click);
			// 
			// Card10
			// 
			this->Card10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card10.Image")));
			this->Card10->Location = System::Drawing::Point(1210, 302);
			this->Card10->Name = L"Card10";
			this->Card10->Size = System::Drawing::Size(111, 149);
			this->Card10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card10->TabIndex = 10;
			this->Card10->TabStop = false;
			this->Card10->Click += gcnew System::EventHandler(this, &MainGame::Card10_Click);
			// 
			// Card11
			// 
			this->Card11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card11.Image")));
			this->Card11->Location = System::Drawing::Point(42, 517);
			this->Card11->Name = L"Card11";
			this->Card11->Size = System::Drawing::Size(111, 149);
			this->Card11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card11->TabIndex = 11;
			this->Card11->TabStop = false;
			this->Card11->Click += gcnew System::EventHandler(this, &MainGame::Card11_Click);
			// 
			// Card16
			// 
			this->Card16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card16.Image")));
			this->Card16->Location = System::Drawing::Point(688, 517);
			this->Card16->Name = L"Card16";
			this->Card16->Size = System::Drawing::Size(111, 149);
			this->Card16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card16->TabIndex = 12;
			this->Card16->TabStop = false;
			this->Card16->Click += gcnew System::EventHandler(this, &MainGame::Card16_Click);
			// 
			// Card15
			// 
			this->Card15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card15.Image")));
			this->Card15->Location = System::Drawing::Point(555, 517);
			this->Card15->Name = L"Card15";
			this->Card15->Size = System::Drawing::Size(111, 149);
			this->Card15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card15->TabIndex = 13;
			this->Card15->TabStop = false;
			this->Card15->Click += gcnew System::EventHandler(this, &MainGame::Card15_Click);
			// 
			// Card14
			// 
			this->Card14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card14.Image")));
			this->Card14->Location = System::Drawing::Point(424, 517);
			this->Card14->Name = L"Card14";
			this->Card14->Size = System::Drawing::Size(111, 149);
			this->Card14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card14->TabIndex = 14;
			this->Card14->TabStop = false;
			this->Card14->Click += gcnew System::EventHandler(this, &MainGame::Card14_Click);
			// 
			// Card13
			// 
			this->Card13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card13.Image")));
			this->Card13->Location = System::Drawing::Point(294, 517);
			this->Card13->Name = L"Card13";
			this->Card13->Size = System::Drawing::Size(111, 149);
			this->Card13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card13->TabIndex = 15;
			this->Card13->TabStop = false;
			this->Card13->Click += gcnew System::EventHandler(this, &MainGame::Card13_Click);
			// 
			// Card12
			// 
			this->Card12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card12.Image")));
			this->Card12->Location = System::Drawing::Point(168, 517);
			this->Card12->Name = L"Card12";
			this->Card12->Size = System::Drawing::Size(111, 149);
			this->Card12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card12->TabIndex = 16;
			this->Card12->TabStop = false;
			this->Card12->Click += gcnew System::EventHandler(this, &MainGame::Card12_Click);
			// 
			// Card17
			// 
			this->Card17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card17.Image")));
			this->Card17->Location = System::Drawing::Point(814, 517);
			this->Card17->Name = L"Card17";
			this->Card17->Size = System::Drawing::Size(111, 149);
			this->Card17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card17->TabIndex = 17;
			this->Card17->TabStop = false;
			this->Card17->Click += gcnew System::EventHandler(this, &MainGame::Card17_Click);
			// 
			// Card18
			// 
			this->Card18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card18.Image")));
			this->Card18->Location = System::Drawing::Point(947, 517);
			this->Card18->Name = L"Card18";
			this->Card18->Size = System::Drawing::Size(111, 149);
			this->Card18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card18->TabIndex = 18;
			this->Card18->TabStop = false;
			this->Card18->Click += gcnew System::EventHandler(this, &MainGame::Card18_Click);
			// 
			// Card19
			// 
			this->Card19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card19.Image")));
			this->Card19->Location = System::Drawing::Point(1080, 517);
			this->Card19->Name = L"Card19";
			this->Card19->Size = System::Drawing::Size(111, 149);
			this->Card19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card19->TabIndex = 19;
			this->Card19->TabStop = false;
			this->Card19->Click += gcnew System::EventHandler(this, &MainGame::Card19_Click);
			// 
			// Card20
			// 
			this->Card20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Card20.Image")));
			this->Card20->Location = System::Drawing::Point(1210, 517);
			this->Card20->Name = L"Card20";
			this->Card20->Size = System::Drawing::Size(111, 149);
			this->Card20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Card20->TabIndex = 20;
			this->Card20->TabStop = false;
			this->Card20->Click += gcnew System::EventHandler(this, &MainGame::Card20_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(383, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(609, 81);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Choose Any 2 Cards ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(566, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(252, 90);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Reveal";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainGame::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 54);
			this->label2->TabIndex = 23;
			this->label2->Text = L"CARDS DONE :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(77, 354);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 47);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(205, 354);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 47);
			this->textBox2->TabIndex = 26;
			this->textBox2->Text = L"2";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(332, 354);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 47);
			this->textBox3->TabIndex = 27;
			this->textBox3->Text = L"3";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(463, 354);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 47);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"4";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(590, 354);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 47);
			this->textBox5->TabIndex = 29;
			this->textBox5->Text = L"5";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(726, 354);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(39, 47);
			this->textBox6->TabIndex = 30;
			this->textBox6->Text = L"6";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(849, 354);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(39, 47);
			this->textBox7->TabIndex = 31;
			this->textBox7->Text = L"7";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(984, 354);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(39, 47);
			this->textBox8->TabIndex = 32;
			this->textBox8->Text = L"1";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(1115, 354);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(39, 47);
			this->textBox9->TabIndex = 33;
			this->textBox9->Text = L"1";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(1246, 354);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(39, 47);
			this->textBox10->TabIndex = 34;
			this->textBox10->Text = L"1";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(77, 563);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(39, 47);
			this->textBox11->TabIndex = 35;
			this->textBox11->Text = L"1";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(205, 563);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(39, 47);
			this->textBox12->TabIndex = 36;
			this->textBox12->Text = L"1";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(332, 563);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(39, 47);
			this->textBox13->TabIndex = 37;
			this->textBox13->Text = L"1";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(463, 563);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(39, 47);
			this->textBox14->TabIndex = 38;
			this->textBox14->Text = L"1";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(590, 563);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(39, 47);
			this->textBox15->TabIndex = 39;
			this->textBox15->Text = L"1";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(726, 563);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(39, 47);
			this->textBox16->TabIndex = 40;
			this->textBox16->Text = L"1";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(849, 563);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(39, 47);
			this->textBox17->TabIndex = 41;
			this->textBox17->Text = L"1";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(984, 563);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(39, 47);
			this->textBox18->TabIndex = 42;
			this->textBox18->Text = L"1";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(1115, 563);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(39, 47);
			this->textBox19->TabIndex = 43;
			this->textBox19->Text = L"1";
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(1246, 563);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(39, 47);
			this->textBox20->TabIndex = 44;
			this->textBox20->Text = L"1";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// resume
			// 
			this->resume->AutoSize = true;
			this->resume->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->resume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resume->Location = System::Drawing::Point(1162, 109);
			this->resume->Name = L"resume";
			this->resume->Size = System::Drawing::Size(179, 50);
			this->resume->TabIndex = 46;
			this->resume->Text = L"RESUME ";
			this->resume->Visible = false;
			this->resume->Click += gcnew System::EventHandler(this, &MainGame::label3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1254, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(87, 80);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 48;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainGame::pictureBox2_Click);
			// 
			// quit
			// 
			this->quit->AutoSize = true;
			this->quit->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->quit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quit->Location = System::Drawing::Point(1200, 187);
			this->quit->Name = L"quit";
			this->quit->Size = System::Drawing::Size(121, 50);
			this->quit->TabIndex = 49;
			this->quit->Text = L"QUIT ";
			this->quit->Visible = false;
			this->quit->Click += gcnew System::EventHandler(this, &MainGame::quit_Click);
			// 
			// MainGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1367, 747);
			this->Controls->Add(this->quit);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->resume);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Card20);
			this->Controls->Add(this->Card19);
			this->Controls->Add(this->Card18);
			this->Controls->Add(this->Card17);
			this->Controls->Add(this->Card12);
			this->Controls->Add(this->Card13);
			this->Controls->Add(this->Card14);
			this->Controls->Add(this->Card15);
			this->Controls->Add(this->Card16);
			this->Controls->Add(this->Card11);
			this->Controls->Add(this->Card10);
			this->Controls->Add(this->Card9);
			this->Controls->Add(this->Card8);
			this->Controls->Add(this->Card7);
			this->Controls->Add(this->Card6);
			this->Controls->Add(this->Card5);
			this->Controls->Add(this->Card4);
			this->Controls->Add(this->Card3);
			this->Controls->Add(this->Card2);
			this->Controls->Add(this->Card1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainGame";
			this->Text = L"MainGame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Card4_Click(System::Object^ sender, System::EventArgs^ e) {
		SetValue(4);
		Flip(Card4, textBox4, 3);

		check();
	}
		   bool EqualContend(int index1, int index2)
		   {
			   if (game->CardsArray[index1]->Id == game->CardsArray[index2]->Id) 
				   return true;
			   else
				   return false;
		   }
		 
		   void Delete(PictureBox^ card1, PictureBox^ card2, TextBox^ text1, TextBox^ text2)
		   {
			   card1->Visible = false;
			   card2->Visible = false;
			   text1->Visible = false;
			   text2->Visible = false;

		   }
		   PictureBox^ getPic(int index)
		   {
			   if (index == 1)
				   return  Card1;
			   else if (index == 2)
				   return Card2;
			   else if (index == 3)
				   return Card3;
			   else if (index == 4)
				   return Card4;
			   else if (index == 5)
				   return Card5;
			   else if (index == 6)
				   return Card6;
			   else if (index == 7)
				   return Card7;
			   else if (index == 8)
				   return Card8;
			   else if (index == 9)
				   return Card9;
			   else if (index == 10)
				   return Card10;
			   else if (index == 11)
				   return Card11;
			   else if (index == 12)
				   return Card12;
			   else if (index == 13)
				   return Card13;
			   else if (index == 14)
				   return Card14;
			   else if (index == 15)
				   return Card15;
			   else if (index == 16)
				   return Card16;
			   else if (index == 17)
				   return Card17;
			   else if (index == 18)
				   return Card18;
			   else if (index == 19)
				   return Card19;
			   else if (index == 20)
				   return Card20;
			   else
				   MessageBox::Show("Error at Set picture");
		   }
		   TextBox^ getTxt(int index)
		   {
			   if (index == 1)
				   return textBox1;
			   else if (index == 2)
				   return textBox2;
			   else if (index == 3)
				   return textBox3;
			   else if (index == 4)
				   return textBox4;
			   else if (index == 5)
				   return textBox5;
			   else if (index == 6)
				   return textBox6;
			   else if (index == 7)
				   return textBox7;
			   else if (index == 8)
				   return textBox8;
			   else if (index == 9)
				   return textBox9;
			   else if (index == 10)
				   return textBox10;
			   else if (index == 11)
				   return textBox11;
			   else if (index == 12)
				   return textBox12;
			   else if (index == 13)
				   return textBox13;
			   else if (index == 14)
				   return textBox14;
			   else if (index == 15)
				   return textBox15;
			   else if (index == 16)
				   return textBox16;
			   else if (index == 17)
				   return textBox17;
			   else if (index == 18)
				   return textBox18;
			   else if (index == 19)
				   return textBox19;
			   else if (index == 20)
				   return textBox20;
			   else
				   MessageBox::Show("Error at Set Text ");
		   }
		   void  Flip(PictureBox^ card1, TextBox^ textBox, int index)
		   {
			   textBox->Size = card1->Size;
			   textBox->Location = card1->Location;
			   textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			   textBox->Font = gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Bold);//built in funtion to set font 
			   textBox->Text = game->CardsArray[index]->Text;
			   textBox->BringToFront();

		   }
		   void FlipBack(PictureBox^ card, TextBox^ textBox, int index)
		   {
			   textBox->Location = textBoxLocations[index];
			   textBox->Size = textBoxSizes[index];
			   textBox->Font = gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold);
			   textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;

			   textBox->Text = game->CardsArray[index]->Number.ToString();
		   }
		   void check()
		   {
			   label2->Text ="CARDS DONE : "+ CardFlipped.ToString();   
			   label1->Text = "Choose Any 2 Cards";
			   if (counter  < 2)
			   {
				   counter++; 
				   i++;
			   }
			   else if (counter == 2)
			   {
				   reveal();
			   }
			   else {
				   MessageBox::Show("Error ");
			   }

		   }
		   void reveal()
		   {
			   FlipBack(getPic(index[0]), getTxt(index[0]), index [0] - 1);
			   FlipBack(getPic(index[1]), getTxt(index[1]), index[1] - 1);
			   if (EqualContend(index[0] - 1, index[1] - 1))   
			   { 
				   Match(); 
				  
			   }
			   Reset(); 
		   } 
		   void Match()
		   {
			   label1->Text = "    MATCHED !!!    ";
			   Delete(getPic(index[0]), getPic(index[1]), getTxt(index[0]), getTxt(index[1]));
			   CardFlipped += 2;
			   if (CardFlipped == 20)
			   { 
				   TotalScore = game->CalculateScore(); //this will calcailte the score;  
				   obj->setScore(TotalScore);  
					obj->store("MEMORY " + gameType);
				   MessageBox::Show("YOU WON THE GAME !!!");
				   MessageBox::Show("SCORE : " + TotalScore.ToString()); 

				   this->Close();

			   }
		   }
		   void Reset()
		   {
			   i = 0;
			   index[0] = -1;
			   index[1] = -1;
			   counter = 0;

		   } 
		   void SetValue(int value)
		   {
			   if (i < 2)
				   index[i] = value;
			   else
			   {
				   check();
				   index[i] = value;
			   }
		   } 
		   
private: System::Void Card1_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(1);
	Flip(Card1, textBox1, 0);
	check();
}
private: System::Void Card2_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(2);
	Flip(Card2, textBox2, 1);

	check();
}
private: System::Void Card3_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue(3);
	Flip(Card3, textBox3, 2);

	check(); 
}
private: System::Void Card5_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue( 5 );
	Flip(Card5, textBox5, 4);

	check();
}
private: System::Void Card6_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue(6);
	Flip(Card6, textBox6, 5);

	check();
}
private: System::Void Card7_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue(7);
	Flip(Card7, textBox7 ,6);

	check();

}
private: System::Void Card8_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(8);
	Flip(Card8, textBox8 , 7);

	check();
}
private: System::Void Card9_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(9);
	Flip(Card9, textBox9, 8);

	check();
}
private: System::Void Card10_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue(10 );
	Flip(Card10, textBox10, 9);

	check();
}
private: System::Void Card11_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue(11);
	Flip(Card11, textBox11, 10);
	check();
}
private: System::Void Card12_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(12);
	Flip(Card12, textBox12, 11);

	check();
} 
private: System::Void Card13_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(13);
	Flip(Card13, textBox13, 12);

	check();
}
private: System::Void Card14_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(14);
	Flip(Card14, textBox14, 13);

	check();
}
private: System::Void Card15_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(15);
	Flip(Card15, textBox15, 14); 

	check();
}
private: System::Void Card16_Click(System::Object^ sender, System::EventArgs^ e) { 
	SetValue(16);
	Flip(Card16, textBox16, 15);

	check();
} 
private: System::Void Card17_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(17);
	Flip(Card17, textBox17, 16);

	check();
}
private: System::Void Card18_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(18);
	Flip(Card18, textBox18, 17);

	check();
}
private: System::Void Card19_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(19);
	Flip(Card19, textBox19, 18);

	check();
}
private: System::Void Card20_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValue(20);
	Flip(Card20, textBox20, 19);

	check();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (counter == 2)
		reveal(); 
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) { 
	resume->Visible = false;
	quit->Visible = false;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) { 
	resume->Visible = true; 
	quit->Visible = true; 

}
private: System::Void quit_Click(System::Object^ sender, System::EventArgs^ e) { 
	MessageBox::Show("GAME QUITED  !");
	this->Close(); 
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
