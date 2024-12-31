#pragma once
#include "MainGame.h" 
#include "Student.h"
namespace GameofCards {

	using namespace System;
	using namespace System::ComponentModel; 
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>   
	/// Summary for Play
	/// </summary>
	public ref class Play : public System::Windows::Forms::Form
	{ 
		student^ Sobj; 
	public:
		Play(student^obj2 )
		{
			Sobj = obj2; 
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Play()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(494, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PF ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Play::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(694, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 79);
			this->button2->TabIndex = 1;
			this->button2->Text = L"MATHS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Play::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(494, 18);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(358, 67);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"CHOOSE ONE ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Play
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1286, 634);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Play";
			this->Text = L"Play";
			this->Load += gcnew System::EventHandler(this, &Play::Play_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Play_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MainGame^ obj = gcnew MainGame("PF",Sobj); 
		obj->FormClosed += gcnew FormClosedEventHandler(this, &Play::OnMainGameClosed);//this closese this form when game ends 
		this->Hide(); 
		obj->Show();  
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MainGame^ obj = gcnew MainGame("MATH",Sobj ); 
	obj->FormClosed += gcnew FormClosedEventHandler(this, &Play::OnMainGameClosed);
	this->Hide();
	obj->Show(); 
	
} 
	   private: System::Void OnMainGameClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		   this->Close(); // Close the Play form
	   }
};
}
 