#pragma once

namespace StudentsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private:
		void SetupDataGridView() {
			this->dataGridView1->EditMode = DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Columns["STT"]->ReadOnly = true; // Ví dụ: không cho phép chỉnh sửa cột STT
			this->dataGridView1->Columns["Name"]->ReadOnly = false; // Cho phép chỉnh sửa cột Name
			this->dataGridView1->Columns["Age"]->ReadOnly = false; // Cho phép chỉnh sửa cột Age
			this->dataGridView1->Columns["Major"]->ReadOnly = false; // Cho phép chỉnh sửa cột Major
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ txtName;
	protected:

	private: System::Windows::Forms::Label^ lbAge;
	private: System::Windows::Forms::Label^ lbMajor;
	private: System::Windows::Forms::TextBox^ txtAge;

	private: System::Windows::Forms::TextBox^ txtMajor;
	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ lbDataTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ STT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Major;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Delete;

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lbAge = (gcnew System::Windows::Forms::Label());
			this->lbMajor = (gcnew System::Windows::Forms::Label());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->txtMajor = (gcnew System::Windows::Forms::TextBox());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lbDataTable = (gcnew System::Windows::Forms::Label());
			this->STT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Major = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Delete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(12, 9);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(54, 13);
			this->lbName->TabIndex = 0;
			this->lbName->Text = L"Họ và tên";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(15, 25);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(444, 20);
			this->txtName->TabIndex = 1;
			// 
			// lbAge
			// 
			this->lbAge->AutoSize = true;
			this->lbAge->Location = System::Drawing::Point(12, 57);
			this->lbAge->Name = L"lbAge";
			this->lbAge->Size = System::Drawing::Size(28, 13);
			this->lbAge->TabIndex = 2;
			this->lbAge->Text = L"Tuổi";
			// 
			// lbMajor
			// 
			this->lbMajor->AutoSize = true;
			this->lbMajor->Location = System::Drawing::Point(12, 104);
			this->lbMajor->Name = L"lbMajor";
			this->lbMajor->Size = System::Drawing::Size(60, 13);
			this->lbMajor->TabIndex = 3;
			this->lbMajor->Text = L"Ngành học";
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(15, 73);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(444, 20);
			this->txtAge->TabIndex = 4;
			// 
			// txtMajor
			// 
			this->txtMajor->Location = System::Drawing::Point(12, 120);
			this->txtMajor->Name = L"txtMajor";
			this->txtMajor->Size = System::Drawing::Size(444, 20);
			this->txtMajor->TabIndex = 5;
			// 
			// btnEnter
			// 
			this->btnEnter->Location = System::Drawing::Point(12, 146);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(75, 23);
			this->btnEnter->TabIndex = 6;
			this->btnEnter->Text = L"Nhập";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &MainForm::btnEnter_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(93, 146);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 7;
			this->btnReset->Text = L"Làm lại";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MainForm::btnReset_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->STT, this->Name,
					this->Age, this->Major, this->Delete
			});
			this->dataGridView1->Location = System::Drawing::Point(18, 204);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(441, 276);
			this->dataGridView1->TabIndex = 8;
			// 
			// lbDataTable
			// 
			this->lbDataTable->AutoSize = true;
			this->lbDataTable->Location = System::Drawing::Point(12, 188);
			this->lbDataTable->Name = L"lbDataTable";
			this->lbDataTable->Size = System::Drawing::Size(104, 13);
			this->lbDataTable->TabIndex = 9;
			this->lbDataTable->Text = L"Danh sách sinh viên";
			// 
			// STT
			// 
			this->STT->HeaderText = L"STT";
			this->STT->Name = L"STT";
			this->STT->Width = 50;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Họ và tên";
			this->Name->Name = L"Name";
			// 
			// Age
			// 
			this->Age->HeaderText = L"Tuổi";
			this->Age->Name = L"Age";
			// 
			// Major
			// 
			this->Major->HeaderText = L"Ngành học";
			this->Major->Name = L"Major";
			// 
			// Delete
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->NullValue = L"Xoá";
			this->Delete->DefaultCellStyle = dataGridViewCellStyle3;
			this->Delete->HeaderText = L"Xoá";
			this->Delete->Name = L"Delete";
			this->Delete->Text = L"Xoá";
			this->Delete->ToolTipText = L"Xoá";
			this->Delete->Width = 50;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 492);
			this->Controls->Add(this->lbDataTable);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->txtMajor);
			this->Controls->Add(this->txtAge);
			this->Controls->Add(this->lbMajor);
			this->Controls->Add(this->lbAge);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lbName);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	int rowIndex = this->dataGridView1->Rows->Add();
	this->dataGridView1->Rows[rowIndex]->Cells["STT"]->Value = rowIndex + 1;
	this->dataGridView1->Rows[rowIndex]->Cells["Name"]->Value = this->txtName->Text;
	this->dataGridView1->Rows[rowIndex]->Cells["Age"]->Value = this->txtAge->Text;
	this->dataGridView1->Rows[rowIndex]->Cells["Major"]->Value = this->txtMajor->Text;

	// Clear the text boxes
	this->txtName->Text = "";
	this->txtAge->Text = "";
	this->txtMajor->Text = "";
	MessageBox::Show("Thêm sinh viên thành công!", "Thành công", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtName->Text = "";
	this->txtAge->Text = "";
	this->txtMajor->Text = "";
}
};
}
