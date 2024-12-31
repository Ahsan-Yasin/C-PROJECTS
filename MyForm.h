#pragma once 
#include "Burger.hpp"
#include "NayanCat.h"
#include  "PowerUp.hpp"
#include "GameObject.h" 

#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h> 
  // For managed code (String^)

namespace CheeseBurgerAndNumCat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data; 
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary> 
	
	public ref class MyForm : public System::Windows::Forms::Form
	{ 
		//--------Variables I created are below ---------------//
		GameObject^ burger;  //making a burger object  
		GameObject^ catObj;  //making a cat object here 
		GameObject^ power; //making powerups object here
		bool moveLeft = false; 
		bool moveRight = false;// these are  flags to check if keys are pressed 
		int score;  
		int health; 
		int level; 
		int num; 
		int n;
		int limit;
		bool flag; 
		String^ Name; 
		//-------------------------------------------------------//

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ ScoreBox;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ LevelBox;  
	private: System::Windows::Forms::PictureBox^ sheild;
	private: System::Windows::Forms::PictureBox^ ScoreBooster;
	private: System::Windows::Forms::PictureBox^ speedB;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Button^ quit;
	private: System::Windows::Forms::Button^ resume;
	private: System::Windows::Forms::PictureBox^ speedBooster;


	private: System::Windows::Forms::TextBox^ HealthBox; 




 	public:  
		MyForm(void)
		{
			n = 1; 
			flag = false; 
			score = 0; 
			health = 3;  
			level = 1;     
			limit = 100;
			this->KeyPreview = true;  // Ensure the form listens to key events
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			  
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			InitializeComponent(); 
			//
			//TODO: Add the constructor code here
			// 
			timer1->Start();   
			burger = gcnew Burger(477, pictureBox1->Height, pictureBox1->Width,pictureBox1->Top);
			catObj = gcnew NayanCat(0, cat->Height, cat->Width) ;
			power = gcnew PowerUp(8, cat->Height, cat->Width);   
			TurnOff(); 
		}
		void setName(String^ n)
		{
			this-> Name = n; 
		} 
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{ 
				delete components;  
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	private: System::Windows::Forms::PictureBox^ cat;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary> 


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) 
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cat = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ScoreBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->LevelBox = (gcnew System::Windows::Forms::TextBox());
			this->HealthBox = (gcnew System::Windows::Forms::TextBox());
			this->sheild = (gcnew System::Windows::Forms::PictureBox());
			this->ScoreBooster = (gcnew System::Windows::Forms::PictureBox());
			this->speedB = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->quit = (gcnew System::Windows::Forms::Button());
			this->resume = (gcnew System::Windows::Forms::Button());
			this->speedBooster = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sheild))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScoreBooster))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedBooster))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(583, 660);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
			// 
			// cat
			// 
			this->cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cat.Image")));
			this->cat->Location = System::Drawing::Point(232, 0);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(110, 136);
			this->cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->cat->TabIndex = 2;
			this->cat->TabStop = false;
			this->cat->Click += gcnew System::EventHandler(this, &MyForm::cat_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(12, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 54);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"SCORE :  ";
			// 
			// ScoreBox
			// 
			this->ScoreBox->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ScoreBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ScoreBox->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ScoreBox->Location = System::Drawing::Point(105, 31);
			this->ScoreBox->Multiline = true;
			this->ScoreBox->Name = L"ScoreBox";
			this->ScoreBox->Size = System::Drawing::Size(69, 51);
			this->ScoreBox->TabIndex = 4;
			this->ScoreBox->Text = L"0";
			this->ScoreBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 88);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 48);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"HEARTS:  ";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(12, 142);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(162, 48);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"LEVEL : ";
			// 
			// LevelBox
			// 
			this->LevelBox->BackColor = System::Drawing::SystemColors::MenuBar;
			this->LevelBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LevelBox->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LevelBox->Location = System::Drawing::Point(105, 142);
			this->LevelBox->Multiline = true;
			this->LevelBox->Name = L"LevelBox";
			this->LevelBox->Size = System::Drawing::Size(67, 48);
			this->LevelBox->TabIndex = 7;
			this->LevelBox->Text = L"0 ";
			this->LevelBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->LevelBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// HealthBox
			// 
			this->HealthBox->BackColor = System::Drawing::SystemColors::MenuBar;
			this->HealthBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->HealthBox->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HealthBox->Location = System::Drawing::Point(117, 88);
			this->HealthBox->Multiline = true;
			this->HealthBox->Name = L"HealthBox";
			this->HealthBox->Size = System::Drawing::Size(57, 48);
			this->HealthBox->TabIndex = 8;
			this->HealthBox->Text = L"0 ";
			this->HealthBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->HealthBox->TextChanged += gcnew System::EventHandler(this, &MyForm::HealthBox_TextChanged);
			// 
			// sheild
			// 
			this->sheild->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sheild.Image")));
			this->sheild->Location = System::Drawing::Point(813, 12);
			this->sheild->Name = L"sheild";
			this->sheild->Size = System::Drawing::Size(72, 69);
			this->sheild->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->sheild->TabIndex = 9;
			this->sheild->TabStop = false;
			this->sheild->Visible = false;
			// 
			// ScoreBooster
			// 
			this->ScoreBooster->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ScoreBooster.Image")));
			this->ScoreBooster->Location = System::Drawing::Point(891, 12);
			this->ScoreBooster->Name = L"ScoreBooster";
			this->ScoreBooster->Size = System::Drawing::Size(73, 70);
			this->ScoreBooster->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ScoreBooster->TabIndex = 10;
			this->ScoreBooster->TabStop = false;
			this->ScoreBooster->Visible = false;
			// 
			// speedB
			// 
			this->speedB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speedB.Image")));
			this->speedB->Location = System::Drawing::Point(970, 12);
			this->speedB->Name = L"speedB";
			this->speedB->Size = System::Drawing::Size(68, 70);
			this->speedB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->speedB->TabIndex = 11;
			this->speedB->TabStop = false;
			this->speedB->Visible = false;
			this->speedB->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1243, 31);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(62, 60);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click_1);
			// 
			// quit
			// 
			this->quit->Font = (gcnew System::Drawing::Font(L"Agency FB", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quit->Location = System::Drawing::Point(574, 244);
			this->quit->Name = L"quit";
			this->quit->Size = System::Drawing::Size(204, 58);
			this->quit->TabIndex = 14;
			this->quit->Text = L"QUIT";
			this->quit->UseVisualStyleBackColor = true;
			this->quit->Click += gcnew System::EventHandler(this, &MyForm::quit_Click);
			// 
			// resume
			// 
			this->resume->Font = (gcnew System::Drawing::Font(L"Agency FB", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resume->Location = System::Drawing::Point(574, 329);
			this->resume->Name = L"resume";
			this->resume->Size = System::Drawing::Size(204, 57);
			this->resume->TabIndex = 15;
			this->resume->Text = L"RESUME";
			this->resume->UseVisualStyleBackColor = true;
			this->resume->Click += gcnew System::EventHandler(this, &MyForm::resume_Click);
			// 
			// speedBooster
			// 
			this->speedBooster->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speedBooster.Image")));
			this->speedBooster->Location = System::Drawing::Point(-5, 0);
			this->speedBooster->Name = L"speedBooster";
			this->speedBooster->Size = System::Drawing::Size(1351, 764);
			this->speedBooster->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->speedBooster->TabIndex = 1;
			this->speedBooster->TabStop = false;
			this->speedBooster->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1343, 755);
			this->Controls->Add(this->resume);
			this->Controls->Add(this->quit);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->speedB);
			this->Controls->Add(this->ScoreBooster);
			this->Controls->Add(this->sheild);
			this->Controls->Add(this->HealthBox);
			this->Controls->Add(this->LevelBox);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->ScoreBox);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->cat);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->speedBooster);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sheild))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScoreBooster))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedBooster))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private:  System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		   {
		if (e->KeyCode == System::Windows::Forms::Keys::Left)
		{
			moveLeft = true;  // Set flag to move left
		}
		else if (e->KeyCode == System::Windows::Forms::Keys::Right)
		{
			moveRight = true;  // Set flag to move right
		}
		   } 
	private:  System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode == System::Windows::Forms::Keys::Left)
		{
			moveLeft = false;  // Reset flag when key is released
		}
		else if (e->KeyCode == System::Windows::Forms::Keys::Right)
		{
			moveRight = false;  // Reset flag when key is released
		}
	}

	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{ 
		
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
 {
	
	DisplayUpdate(); //this will change the vlaues in text box 
	catObj->move("fall");
	cat->Top = catObj->getTop()  ;   
	cat->Visible = true;  
	  
	 
	if (cat->Bottom >= this->ClientSize.Height) // this will check if the cat  has hit the bottm the clientsize .height checks the height of our form 
	{ 
		score += 5*n; //the socre increases when 1 cat is doged 
		catObj->move("start");// resting the cat to 0  
		catObj->ChangePosition(ClientSize.Width); //this clinetsize will give me the width of the form which i will pass to genrate random value
		cat->Left = catObj->getLeft();//assinging the new left position to cat which was generated at randoms 
		cat->Visible = false;  
		 
	}    
	//this block of code below deals that when an objects is falling or will hit bottom 
	if (flag)
	{ 
		PowerUpFall(); 		
		collidePowerUp(); 
	 }
	  
	HealthCheck();  
	
	if (moveLeft)
	{
		burger->move("left");
	}
	else if (moveRight)
	{
		burger->move("right");
	} 

	// Update the PictureBox position based on the burger's x position
	pictureBox1->Left = burger->getLeft();  

     //this here is for managin levels 
	   if ((level==3||level==4) && (score>limit||score>=300)) 
	{  
		   Store();  
		timer1->Stop();
		MessageBox::Show("CONGRATS YOU WON ");
		this->Close(); 
		
	}
	else if (score >= limit)
	{
		   level++;
		limit += 100; 
		burger->IncreaseSpeed();  
		catObj->IncreaseSpeed();   
		power->IncreaseSpeed();  
	}
	
	

	//below is code for managing powerups  
	if (!flag) //when  we done have any object here 
	{
		generatePowerUp();

	}
} 
 void generatePowerUp()
	   {
			
		   num = rand() % 300;
		   if (num == 1 || num == 2 || num == 3)
			   flag = true;
		   switch (num)
		   {
		   case 1:
			   setPowerUp(sheild);
			   break;
		   case 2:
			   setPowerUp(ScoreBooster);
			   break;
		   case 3:
			   setPowerUp(speedB);

			   break;
		   }
	   }
void  PowerUpFall()
{
	power->move("fall");
	switch (num)
	{
	case 1:
		sheild->Top = power->getTop();
		break;
	case 2:
		ScoreBooster->Top = power->getTop();
		break;
	case 3:
		speedB->Top = power->getTop();

	}
	 
	if (sheild->Top >= this->ClientSize.Height)
	{
		Reset(sheild);
	}
	else if (ScoreBooster->Top >= this->ClientSize.Height)
	{
		Reset(ScoreBooster);
	}
	else if (speedB->Top >= this->ClientSize.Height)
	{
		Reset(speedB);
	}
}
void HealthCheck()
{
	if (health > 0)
	{
		
		if (burger->collide(catObj))
		{

			catObj->move("start");
			catObj->ChangePosition(ClientSize.Width - 30);
			cat->Top = catObj->getTop();
			cat->Left = catObj->getLeft();
			health--;

		}
	}   
	else //when hearts drop to 0  
	{
		Store(); 

		cat->Visible = false;
		timer1->Stop();
		MessageBox::Show("You Died \r\n ", "Game Over "); 
		this->Close();
	}

}
void setPowerUp(PictureBox^ powerUp)
{
	power->move("start");
	power->ChangePosition(ClientSize.Width);
	powerUp->Top = power->getTop();
	powerUp->Left = power->getLeft(); 
	powerUp->Visible = true; 
}                             
void Reset(PictureBox^ powerUp)
{
	n = 1; 
	power->move("start");  
	power->ChangePosition(ClientSize.Width);  
	powerUp->Top = power->getTop(); 
	powerUp->Left = power->getLeft();  
	powerUp->Visible = false; 
	flag = false; 
}  
void DisplayUpdate()
{
	//displaying these vairbles on screen  
	HealthBox->Text = health.ToString();
	LevelBox->Text = level.ToString();
	ScoreBox->Text = score.ToString();

}
void collidePowerUp()
{
	 
	if (burger->collide(power))
	{
		score += 20 * n;
		if (num == 1)
		{

			health++;
			Reset(sheild);

		}
		else if (num == 2)
		{
			Reset(ScoreBooster);
			n = n * 2;

		} 
		else if (num == 3)
		{ 

			Reset(speedB);
			burger->speed += 2 ;

		} 
	}
}  
void Store()
{
	String^ managedString = Name ; 
	std::string stdString = msclr::interop::marshal_as<std::string>(managedString);
	std::fstream handler; 
	handler.open("data.txt", std::ios::app); 
	if (handler.is_open())
	{
		handler << "NAME : " << stdString << "\tSCORE : " << score << std::endl; 
	}
	handler.close();  
}
void TurnOff()
{
	//this->pictureBox3->Visible = false;
	//this->pictureBox3->Enabled = false;
	this->quit->Visible = false;
	this->quit->Enabled = false;
	this->resume->Visible = false;
	this->resume->Enabled = false;

}
void TurnOn()
{
	//this->pictureBox3->Visible = true;
	//this->pictureBox3->Enabled = true ;
	this->quit->Visible = true; 
	this->quit->Enabled = true ;
	this->resume->Visible = true;
	this->resume->Enabled = true;

}
private: System::Void cat_Click(System::Object^ sender, System::EventArgs^ e) {
} 
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void HealthBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	TurnOn(); 
	timer1->Stop();  

}
private: System::Void resume_Click(System::Object^ sender, System::EventArgs^ e) {
	TurnOff(); 
	timer1->Start(); 
}
private: System::Void quit_Click(System::Object^ sender, System::EventArgs^ e) {
	Store(); //to save game data  
	this->Close();
}
};
}
 