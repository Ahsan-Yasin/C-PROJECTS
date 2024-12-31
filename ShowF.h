#pragma once 
#include "MyForm.h" 
namespace CheeseBurgerAndNumCat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	 
	/// <summary>
	/// Summary for Show
	/// </summary>
	public ref class ShowF : public System::Windows::Forms::Form
	{ 
		String ^data; 
	public:
		ShowF(String^str)
		{  
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			data = str;  
			textBox1->Text = data; 
			if (str == "\r\nENTER YOUR NAME : ")
			{
				Enter->Visible = true; 
				textBox2->Visible = true; 
			}
		}
		 

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowF()
		{ 
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ Enter;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShowF::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->back = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Enter = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1109, 680);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Agency FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(38, 31);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(1029, 531);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ShowF::textBox1_TextChanged);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->back->Font = (gcnew System::Drawing::Font(L"Agency FB", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Location = System::Drawing::Point(910, 587);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(157, 78);
			this->back->TabIndex = 2;
			this->back->Text = L"BACK";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &ShowF::back_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(338, 53);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(507, 63);
			this->textBox2->TabIndex = 3;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ShowF::textBox2_TextChanged);
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Agency FB", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->Location = System::Drawing::Point(38, 587);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(157, 78);
			this->Enter->TabIndex = 4;
			this->Enter->Text = L"ENTER ";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Visible = false;
			this->Enter->Click += gcnew System::EventHandler(this, &ShowF::Enter_Click);
			// 
			// ShowF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1111, 677);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->back);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ShowF";
			this->Text = L"Show";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); 
		
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm^ form = gcnew MyForm(); 
	form->setName(textBox2->Text);   //passing the name input to other MyForm    
	form->FormClosed += gcnew FormClosedEventHandler(this, &CheeseBurgerAndNumCat::ShowF::ShowMainFormAgain);
	this->Hide();  
	form->Show(); 
} 
private: System::Void ShowMainFormAgain(System::Object^ sender, FormClosedEventArgs^ e) {
		   this->Close();
	   }
};
}
