#pragma once

namespace Random_functions_input {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Bank_System için özet
	/// </summary>
	public ref class Student_System : public System::Windows::Forms::Form
	{
	public:
		Student_System(void)
		{
			InitializeComponent();
			initdataGridView();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~Student_System()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel2;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel3;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox4;


	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel4;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;



	protected:


	protected:










	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_System::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox4 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->toolStripLabel1,
					this->toolStripTextBox1, this->toolStripButton1, this->toolStripSeparator1, this->toolStripLabel2, this->toolStripTextBox2, this->toolStripButton2,
					this->toolStripSeparator2, this->toolStripLabel3, this->toolStripTextBox4, this->toolStripLabel4, this->toolStripTextBox3, this->toolStripButton4
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1860, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(73, 22);
			this->toolStripLabel1->Text = L"Add Student";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 25);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Student_System::toolStripButton1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(94, 22);
			this->toolStripLabel2->Text = L"Remove Student";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 25);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Student_System::toolStripButton2_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(62, 22);
			this->toolStripLabel3->Text = L"Student ID";
			// 
			// toolStripTextBox4
			// 
			this->toolStripTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox4->Name = L"toolStripTextBox4";
			this->toolStripTextBox4->Size = System::Drawing::Size(100, 25);
			// 
			// toolStripLabel4
			// 
			this->toolStripLabel4->Name = L"toolStripLabel4";
			this->toolStripLabel4->Size = System::Drawing::Size(33, 22);
			this->toolStripLabel4->Text = L"Note";
			// 
			// toolStripTextBox3
			// 
			this->toolStripTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox3->Name = L"toolStripTextBox3";
			this->toolStripTextBox3->Size = System::Drawing::Size(100, 25);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Student_System::toolStripButton4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1860, 787);
			this->dataGridView1->TabIndex = 3;
			// 
			// Student_System
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1860, 814);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Student_System";
			this->Text = L"Student_System";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			void initdataGridView() {
				this->dataGridView1->Columns->Add("Students ID", "Students ID");
				this->dataGridView1->Columns->Add("Note", "Note");
			}
			
			System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {//add student
				String^ text = toolStripTextBox1->Text;
				if (String::IsNullOrEmpty(text)) {
					MessageBox::Show("Please enter student ID.");
				}
				int studentID = System::Convert::ToInt32(text);
				if (studentID != 0) {
					int newRow = dataGridView1->Rows->Add();
					dataGridView1->Rows[newRow]->Cells["Students ID"]->Value = text;
					toolStripTextBox1->Clear();
				}
				else {
					MessageBox::Show("Please enter student ID.");
				}
			}
			System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {//remove student
				 String^ text = toolStripTextBox2->Text;
				 if (String::IsNullOrEmpty(text)) {
					 MessageBox::Show("Please enter student ID.");
				 }
				 int studentID = System::Convert::ToInt32(text);
				 if (studentID != 0) {
					 for (int i = 0; i < dataGridView1->Rows->Count-1; i++) {
						 if (dataGridView1->Rows[i]->Cells["Students ID"]->Value != nullptr &&
							 dataGridView1->Rows[i]->Cells["Students ID"]->Value->ToString() == studentID.ToString()) {
							 dataGridView1->Rows->RemoveAt(i);
							 MessageBox::Show("Student deleted successfully.");
							 return;
						 }
					 }
				 }
				 else {
					 MessageBox::Show("Please enter student ID.");
				 }
				 toolStripTextBox2->Clear();
			}
			System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {//add notes
				String^ text = toolStripTextBox3->Text;
				if (String::IsNullOrEmpty(text)) {
					MessageBox::Show("Please enter note.");
					return;
				}
				int note = System::Convert::ToInt32(text);

				String^ text1 = toolStripTextBox4->Text;
				if (String::IsNullOrEmpty(text)) {
					MessageBox::Show("Please enter Student ID.");
					return;
				}
				int studentID = System::Convert::ToInt32(text1);
				for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
					if (dataGridView1->Rows[i]->Cells["Students ID"]->Value != nullptr &&
						dataGridView1->Rows[i]->Cells["Students ID"]->Value->ToString() == studentID.ToString()) {
						dataGridView1->Rows[i]->Cells["Note"]->Value = note;
						MessageBox::Show("Note added successfully.");
						break;
					}
				}
				toolStripTextBox3->Clear();
				toolStripTextBox4->Clear();
			}
	};
}