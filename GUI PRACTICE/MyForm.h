#pragma once
#include "src.h"
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace GUIPRACTICE {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	using namespace System::Collections::Generic; 
	//
	
	//
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ btn1;
	protected:
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7; 
	private: System::Windows::Forms::Button^ clr;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ result;
	private: System::Windows::Forms::Button^ mul;
	private: System::Windows::Forms::Button^ div;
	private: System::Windows::Forms::Button^ diff; 

	private: System::Windows::Forms::Button^ sum;
	private: System::Windows::Forms::TextBox^ textBox1;


		     
  
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
		   String^ expression;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->clr = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Button());
			this->mul = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->diff = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(18, 356);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(104, 87);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(138, 356);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(104, 87);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(258, 356);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(104, 87);
			this->btn3->TabIndex = 3;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(258, 461);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(104, 87);
			this->btn6->TabIndex = 5;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(138, 461);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(104, 87);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(18, 461);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(104, 87);
			this->btn4->TabIndex = 3;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(258, 566);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(104, 87);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9  ";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(138, 566);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(104, 87);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(18, 566);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(104, 87);
			this->btn7->TabIndex = 6;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// clr
			// 
			this->clr->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clr->Location = System::Drawing::Point(395, 356);
			this->clr->Name = L"clr";
			this->clr->Size = System::Drawing::Size(104, 87);
			this->clr->TabIndex = 9;
			this->clr->Text = L"C";
			this->clr->UseVisualStyleBackColor = true;
			this->clr->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(395, 461);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 87);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->Location = System::Drawing::Point(395, 566);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(104, 87);
			this->result->TabIndex = 11;
			this->result->Text = L"=";
			this->result->UseVisualStyleBackColor = true;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// mul
			// 
			this->mul->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mul->Location = System::Drawing::Point(18, 248);
			this->mul->Name = L"mul";
			this->mul->Size = System::Drawing::Size(104, 87);
			this->mul->TabIndex = 12;
			this->mul->Text = L"*";
			this->mul->UseVisualStyleBackColor = true;
			this->mul->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// div
			// 
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->div->Location = System::Drawing::Point(138, 248);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(104, 87);
			this->div->TabIndex = 13;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &MyForm::div_Click);
			// 
			// diff
			// 
			this->diff->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diff->Location = System::Drawing::Point(258, 248);
			this->diff->Name = L"diff";
			this->diff->Size = System::Drawing::Size(104, 87);
			this->diff->TabIndex = 14;
			this->diff->Text = L"-";
			this->diff->UseVisualStyleBackColor = true;
			this->diff->Click += gcnew System::EventHandler(this, &MyForm::diff_Click);
			// 
			// sum
			// 
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sum->Location = System::Drawing::Point(395, 248);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(104, 87);
			this->sum->TabIndex = 15;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = true;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm::sum_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(18, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(481, 61);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(537, 680);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(18, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(481, 102);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(258, 248);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(104, 87);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 682);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->diff);
			this->Controls->Add(this->div);
			this->Controls->Add(this->mul);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->clr);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
		expression = ""; 
		textBox1->Text = expression; 
	}
		     
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) { 
	expression += btn1->Text; 
	textBox1->Text = expression;  
} 
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn2->Text;
	textBox1->Text = expression;    
}
	
	   
private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) { 
    
	msclr::interop::marshal_context context;
 	 expression = Convert::ToString(EvaluatePos(infixToPostFix(context.marshal_as<std::string>(expression))));
    //  expression = infixToPostFix(expression); 
	 textBox1->Text = expression;	     
	   
} 
	  
	    

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn3->Text; 
	textBox1->Text = expression;
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn4->Text;  
	textBox1->Text = expression;
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {   
	expression += btn5->Text; 
	textBox1->Text = expression;
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn6->Text; 
	textBox1->Text = expression;
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn7->Text; 
	textBox1->Text = expression;
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn8->Text; 
	textBox1->Text = expression;
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += btn9->Text; 
	textBox1->Text = expression;
}
private: System::Void div_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += div->Text; 
	textBox1->Text = expression;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	expression += mul->Text; 
	textBox1->Text = expression; 
}
private: System::Void diff_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += diff->Text;    
	textBox1->Text = expression;
}
private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {
	expression += sum->Text;  
	textBox1->Text = expression;
}  
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); 
}
};
 

  
}
  