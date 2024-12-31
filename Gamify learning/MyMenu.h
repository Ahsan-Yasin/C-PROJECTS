#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Record.h"
#include "OtherGame.h"
#include "puzzle.h"
#include "Play.h"
#include "Quiz.h"   
#include "AddStudent.h"
#include "GameSelect.h"
 
 
namespace GameofCards 
{  
 

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{ 
		teacher^ TeacherObj;
	public:
		MyMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// 
			TeacherObj = gcnew teacher(100); //ASSINGIN 100 STUDENTS TO TEACHER   
			 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMenu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(443, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO GAMIFY";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(134, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"STUDENT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyMenu::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(552, 681);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(134, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(255, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"GAMES";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(134, 309);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(255, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"PROGRESS";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(134, 381);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(255, 55);
			this->button4->TabIndex = 5;
			this->button4->Text = L"RECORD";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyMenu::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(134, 524);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(255, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L"EXIT";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyMenu::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(134, 454);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(255, 55);
			this->button5->TabIndex = 8;
			this->button5->Text = L"INSTRUCTIONS";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyMenu::button5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(542, 681);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 672);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyMenu";
			this->Text = L"MyMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { 
		this->Close(); 
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	AddStudent^ obj=gcnew AddStudent(TeacherObj);
	this->Hide(); 
	obj->FormClosed += gcnew FormClosedEventHandler(this, &MyMenu::OnFormClosed);
	obj->Show(); 
 
}
private: System::Void OnFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
	// Handle the form closed event (if needed)
	// For example, you can refresh or do some cleanup here 
	this->Show(); 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Record^ obj = gcnew Record(); 
	String^ str = TeacherObj->Display(); 
	obj->setDisplay(str, "THIS IS CURRENT PROGRESS "); 
	this->Hide();  
	obj->FormClosed += gcnew FormClosedEventHandler(this, &MyMenu::OnFormClosed); 
	obj->Show(); 
} 
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	student^ Student  = gcnew student(); 
	Record^ obj = gcnew Record();
	String^ str =Student->getHistory();
	obj->setDisplay(str, "THIS IS STUDENTS HISTORY  "); 
	this->Hide();
	obj->FormClosed += gcnew FormClosedEventHandler(this, &MyMenu::OnFormClosed);
	obj->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Record^ obj = gcnew Record();
	String^ str =
		"Welcome to the Gamified Learning Platform!\r\nProject by: Ahsan Yasin .\r\nChoose a problem set (Math or Programming).\r\nThe board has 20 cards (10 questions, 10 answers).\r\nCards are shuffled and placed face down (1-20).\r\nSelect two cards by entering their numbers.\r\nIf they match, both disappear.\r\nContinue until all cards are matched!\r\nPoints: 10 for under 10 mins, 5 for 10-20 mins, 2 for over 20 mins.\r\nEnjoy learning and improving your skills through games!";
	obj->setDisplay(str, "INSTRUCTIONS !  ");
	this->Hide();
	obj->FormClosed += gcnew FormClosedEventHandler(this, &MyMenu::OnFormClosed);
	obj->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	GameSelect^ obj = gcnew GameSelect(TeacherObj);
	this->Hide(); 
	obj->FormClosed += gcnew FormClosedEventHandler(this, &MyMenu::OnFormClosed);
	obj->Show();

}
};
}
