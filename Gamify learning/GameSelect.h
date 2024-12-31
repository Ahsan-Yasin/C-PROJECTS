#pragma once
#include "Teacher.h"
#include "Student.h"
#include "OtherGame.h"
#include "Play.h"
namespace GameofCards {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameSelect
	/// </summary>
	public ref class GameSelect : public System::Windows::Forms::Form
	{ 
		teacher^ Tobj;
	public:
		GameSelect(teacher ^ obj2 )
		{
			Tobj = obj2; 
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ nameBox;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary> 
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameSelect::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(798, 507);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GameSelect::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(529, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ENTER NAME OF STUDENT";
			this->label1->Click += gcnew System::EventHandler(this, &GameSelect::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(261, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 54);
			this->label2->TabIndex = 2;
			this->label2->Text = L"SELECT GAME ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 327);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"MEMORY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameSelect::button1_Click);
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nameBox->Location = System::Drawing::Point(139, 136);
			this->nameBox->Multiline = true;
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(530, 59);
			this->nameBox->TabIndex = 4;
			this->nameBox->TextChanged += gcnew System::EventHandler(this, &GameSelect::nameBox_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(526, 327);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 55);
			this->button3->TabIndex = 6;
			this->button3->Text = L"PUZZLE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GameSelect::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(299, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 55);
			this->button2->TabIndex = 5;
			this->button2->Text = L"QUIZ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GameSelect::button2_Click);
			// 
			// GameSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 504);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GameSelect";
			this->Text = L"GameSelect";
			this->Load += gcnew System::EventHandler(this, &GameSelect::GameSelect_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GameSelect_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
	String^ str = "QUIZ"; 
	student^ std = Tobj->searchStudent(nameBox->Text);
	OtherGame^ obj = gcnew OtherGame(str,std );
	this->Hide();
	obj->FormClosed += gcnew FormClosedEventHandler(this, &GameSelect::OnStudentFormClosed);
	obj->Show();
}
	  
private: System::Void nameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {  
	String^ str = "PUZZLE";
	student^ std = Tobj->searchStudent(nameBox->Text);
	OtherGame^ obj = gcnew OtherGame(str, std);
	this->Hide();
	obj->FormClosed += gcnew FormClosedEventHandler(this, &GameSelect::OnStudentFormClosed);
	obj->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {   
	student^ std = Tobj->searchStudent(nameBox->Text);
	Play^ obj = gcnew Play(std); 
	this->Hide();
	obj->FormClosed += gcnew FormClosedEventHandler(this, &GameSelect::OnStudentFormClosed);
	obj->Show();

}
		private: System::Void OnStudentFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
			this->Close();
		}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
