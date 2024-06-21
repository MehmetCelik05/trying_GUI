#pragma once
#include<msclr/marshal_cppstd.h>
#include"Menu.h"

//1381 line

namespace $safeprojectname$ {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Collections::Generic::Dictionary<String^, String^>^ userMap = gcnew System::Collections::Generic::Dictionary<String^, String^>();
		System::Collections::Generic::Dictionary<String^, String^>::Enumerator itr;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(613, 815);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(605, 789);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Sign In";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(138, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(25, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Location = System::Drawing::Point(25, 269);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(265, 21);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"KVKK metnini okudum ve onaylýyorum";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.25F));
			this->textBox2->Location = System::Drawing::Point(25, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(360, 30);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.25F));
			this->textBox1->Location = System::Drawing::Point(25, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(360, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(21, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(21, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(605, 789);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Sign Up";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(149, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 32);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(23, 275);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Sign Up";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.25F));
			this->textBox5->Location = System::Drawing::Point(23, 230);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(395, 30);
			this->textBox5->TabIndex = 5;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.25F));
			this->textBox4->Location = System::Drawing::Point(23, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(395, 30);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.25F));
			this->textBox3->Location = System::Drawing::Point(23, 84);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(395, 30);
			this->textBox3->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F));
			this->label5->Location = System::Drawing::Point(19, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(212, 22);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Password(Only numbers)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F));
			this->label4->Location = System::Drawing::Point(19, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 22);
			this->label4->TabIndex = 1;
			this->label4->Text = L"User Name(Only letters)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(19, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"E mail";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 805);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"Menu";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//kayýt ol
		bool checkName = false;
		bool checkPassword = false;

		private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {//User Name
			checkName = true;
			String^ user = textBox4->Text;
			for (int i = 0; i < user->Length; i++) {
				if (!Char::IsLetter(user[i])) {
					checkName = false;
					break;
				}
			}
		}
		private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {//Password
			checkPassword = true;
			String^ password = textBox5->Text;
			for (int i = 0; i < password->Length; i++) {
				if (!Char::IsDigit(password[i])) {
					checkPassword = false;
					break;
				}
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//Sign Up
			if (checkName && checkPassword) {
				userMap->Add(textBox4->Text, textBox5->Text);
				MessageBox::Show("Welcome " + textBox4->Text, "OK", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("User name or password is incorrect", "!!!", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			}
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
		
		//giriþ yap
		bool checkN = false;
		bool checkP = false;
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {//giriþ isim
			checkN = false;
			itr = userMap->GetEnumerator();
			while (itr.MoveNext()) {
				System::Collections::Generic::KeyValuePair<String^, String^> keyValue = itr.Current;
				if (keyValue.Key == textBox1->Text) {
					checkN = true;
					break;
				}
			}
		}
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {//giriþ parola
			checkP = false;
			itr = userMap->GetEnumerator();
			while (itr.MoveNext()) {
				System::Collections::Generic::KeyValuePair<String^, String^> keyValue = itr.Current;
				if (keyValue.Value == textBox2->Text) {
					checkP = true;
					break;
				}
			}
		}		
		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked) {
				button1->Enabled = true;
			}
			else {
				button1->Enabled = false;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (checkN && checkP) {
				this->Hide();

				Random_functions_input::MyForm^ menuForm = gcnew Random_functions_input::MyForm();
				menuForm->Show();
			}
			else {
				MessageBox::Show("User name or password is wrong!");
			}
		}
	};
}