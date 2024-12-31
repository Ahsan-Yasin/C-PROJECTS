#pragma once
#include  "student.h" 
#include "object.h"
#include "Quiz.h"
#include "puzzle.h"

namespace GameofCards {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OtherGame
	/// </summary>
	public ref class OtherGame : public System::Windows::Forms::Form
	{
		GameMain^ game;
		int counter;
		student^ studentObj;  
		int score; 
		String^ recd;
	public:
		OtherGame(String^str,student ^OBJ)
		{ 
			studentObj = OBJ; 
			recd = str; 
			if (str == "QUIZ") 
			{
				game = gcnew Quiz();
			}
			else if (str == "PUZZLE")
			{
				game = gcnew puzzle();  
			} 
			counter = 0;
			int score = 0; 
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// 
			setQuestion(); 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OtherGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ answerBox;

	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OtherGame::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->answerBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-7, -12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(911, 515);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &OtherGame::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(108, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 54);
			this->label1->TabIndex = 2;
			this->label1->Text = L"QUESTION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(108, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(709, 54);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ANSWER THE QUESTIONS TO SCORE";
			// 
			// answerBox
			// 
			this->answerBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->answerBox->Location = System::Drawing::Point(104, 225);
			this->answerBox->Multiline = true;
			this->answerBox->Name = L"answerBox";
			this->answerBox->Size = System::Drawing::Size(530, 59);
			this->answerBox->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(104, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 55);
			this->button2->TabIndex = 6;
			this->button2->Text = L"CHECK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OtherGame::button2_Click);
			// 
			// OtherGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(902, 507);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->answerBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"OtherGame";
			this->Text = L"OtherGame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
		
		if (answerBox->Text == game->Answers[counter])
		{
			score++; 
			label2->Text = "CORRECT ! "; 
		}
		else
		{
			label2->Text = "ANSWER WAS: " + game->Answers[counter]; 
		}  
		counter++;  
		setQuestion();
		answerBox->Text = "";
		if (counter == 9)
		{
			studentObj->setScore(score); 
			studentObj->store(recd);
			MessageBox::Show("GAME OVER !"); 
			MessageBox::Show("SCORE : ", score.ToString());
			this->Close();  
			
		}
	}
		   void setQuestion()
		   {
			   label1->Text = game->Questions[counter]; 
			   
		   }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
