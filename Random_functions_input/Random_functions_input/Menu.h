#pragma once
#include"Bank_System.h"
#include"Calculator.h"
#include"Student_System.h"

namespace Random_functions_input {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(-3, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1096, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Welcome";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(-3, 77);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1096, 753);
			this->panel1->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button4->Location = System::Drawing::Point(0, 142);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(1093, 75);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Bank Account Information System";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button3->Location = System::Drawing::Point(0, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(1093, 75);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Student Information System";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(1093, 75);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Calculator";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::White;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(1001, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(92, 20);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button5->Location = System::Drawing::Point(988, 681);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 69);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 822);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			Random_functions_input::Calculator^ calculator = gcnew Random_functions_input::Calculator();
			calculator->Show();
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			Random_functions_input::Student_System^ StudentSystem = gcnew Random_functions_input::Student_System();
			StudentSystem->Show();
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Random_functions_input::Bank_System^ bankSystem = gcnew Random_functions_input::Bank_System();
			bankSystem->Show();
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
};
}
