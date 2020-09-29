#pragma once
#include "Listas.h"

namespace Lab3 {

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
		Listas^ monton = gcnew Listas();
		Listas^ grupo1 = gcnew Listas();
		Listas^ grupo2 = gcnew Listas();
		Listas^ grupo3 = gcnew Listas();
		Listas^ grupo4 = gcnew Listas();
		Listas^ grupo5 = gcnew Listas();
		Listas^ grupo6 = gcnew Listas();
		Listas^ grupo7 = gcnew Listas();
	

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
	private: System::Windows::Forms::Button^ btnsiguiente;
	protected:
	private: System::Windows::Forms::Label^ lblmoton;
	private: System::Windows::Forms::DataGridView^ dataTablero;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtpos;
	private: System::Windows::Forms::TextBox^ txtorigen;
	private: System::Windows::Forms::TextBox^ txtdestino;
	private: System::Windows::Forms::Button^ btnaccion;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnsiguiente = (gcnew System::Windows::Forms::Button());
			this->lblmoton = (gcnew System::Windows::Forms::Label());
			this->dataTablero = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtpos = (gcnew System::Windows::Forms::TextBox());
			this->txtorigen = (gcnew System::Windows::Forms::TextBox());
			this->txtdestino = (gcnew System::Windows::Forms::TextBox());
			this->btnaccion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTablero))->BeginInit();
			this->SuspendLayout();
			// 
			// btnsiguiente
			// 
			this->btnsiguiente->Location = System::Drawing::Point(25, 416);
			this->btnsiguiente->Name = L"btnsiguiente";
			this->btnsiguiente->Size = System::Drawing::Size(132, 54);
			this->btnsiguiente->TabIndex = 0;
			this->btnsiguiente->Text = L"button1";
			this->btnsiguiente->UseVisualStyleBackColor = true;
			// 
			// lblmoton
			// 
			this->lblmoton->AutoSize = true;
			this->lblmoton->Location = System::Drawing::Point(177, 437);
			this->lblmoton->Name = L"lblmoton";
			this->lblmoton->Size = System::Drawing::Size(35, 13);
			this->lblmoton->TabIndex = 1;
			this->lblmoton->Text = L"label1";
			// 
			// dataTablero
			// 
			this->dataTablero->AllowUserToAddRows = false;
			this->dataTablero->AllowUserToDeleteRows = false;
			this->dataTablero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTablero->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataTablero->Location = System::Drawing::Point(25, 22);
			this->dataTablero->Name = L"dataTablero";
			this->dataTablero->ReadOnly = true;
			this->dataTablero->Size = System::Drawing::Size(795, 362);
			this->dataTablero->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 407);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"posición";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(406, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"grupo origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(523, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"grupo destino";
			// 
			// txtpos
			// 
			this->txtpos->Location = System::Drawing::Point(252, 434);
			this->txtpos->Name = L"txtpos";
			this->txtpos->Size = System::Drawing::Size(100, 20);
			this->txtpos->TabIndex = 6;
			// 
			// txtorigen
			// 
			this->txtorigen->Location = System::Drawing::Point(388, 437);
			this->txtorigen->Name = L"txtorigen";
			this->txtorigen->Size = System::Drawing::Size(100, 20);
			this->txtorigen->TabIndex = 7;
			// 
			// txtdestino
			// 
			this->txtdestino->Location = System::Drawing::Point(526, 436);
			this->txtdestino->Name = L"txtdestino";
			this->txtdestino->Size = System::Drawing::Size(100, 20);
			this->txtdestino->TabIndex = 8;
			// 
			// btnaccion
			// 
			this->btnaccion->Location = System::Drawing::Point(654, 416);
			this->btnaccion->Name = L"btnaccion";
			this->btnaccion->Size = System::Drawing::Size(152, 54);
			this->btnaccion->TabIndex = 9;
			this->btnaccion->Text = L"Mover!";
			this->btnaccion->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(845, 500);
			this->Controls->Add(this->btnaccion);
			this->Controls->Add(this->txtdestino);
			this->Controls->Add(this->txtorigen);
			this->Controls->Add(this->txtpos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataTablero);
			this->Controls->Add(this->lblmoton);
			this->Controls->Add(this->btnsiguiente);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Solitario";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTablero))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataTablero->RowCount = 18;

	}
};
	
}
