#pragma once
#include "Listas.h"
#include "Cartas.h"

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
		array<String^>^ mazo = gcnew array<String^>(52);

		Listas* monton = new Listas();
		Listas* grupo1 = new Listas();
		Listas* grupo2 = new Listas();
		Listas* grupo3 = new Listas();
		Listas* grupo4 = new Listas();
		Listas* grupo5 = new Listas();
		Listas* grupo6 = new Listas();
		Listas* grupo7 = new Listas();
		int movimientos = 0; 
		int tiempo = 0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;

		   int posicionmonton = 0;


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
	private: System::Windows::Forms::Label^ lbltiempo;
	public:
	private: System::Windows::Forms::Label^ lblmovimiento;
	private: System::Windows::Forms::Timer^ timer1;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtpos;
	private: System::Windows::Forms::TextBox^ txtorigen;
	private: System::Windows::Forms::TextBox^ txtdestino;
	private: System::Windows::Forms::Button^ btnaccion;
	private: System::ComponentModel::IContainer^ components;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnsiguiente = (gcnew System::Windows::Forms::Button());
			this->lblmoton = (gcnew System::Windows::Forms::Label());
			this->dataTablero = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtpos = (gcnew System::Windows::Forms::TextBox());
			this->txtorigen = (gcnew System::Windows::Forms::TextBox());
			this->txtdestino = (gcnew System::Windows::Forms::TextBox());
			this->btnaccion = (gcnew System::Windows::Forms::Button());
			this->lbltiempo = (gcnew System::Windows::Forms::Label());
			this->lblmovimiento = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTablero))->BeginInit();
			this->SuspendLayout();
			// 
			// btnsiguiente
			// 
			this->btnsiguiente->Location = System::Drawing::Point(25, 416);
			this->btnsiguiente->Name = L"btnsiguiente";
			this->btnsiguiente->Size = System::Drawing::Size(132, 54);
			this->btnsiguiente->TabIndex = 0;
			this->btnsiguiente->Text = L"Cambiar Montón!";
			this->btnsiguiente->UseVisualStyleBackColor = true;
			this->btnsiguiente->Click += gcnew System::EventHandler(this, &MyForm::btnsiguiente_Click);
			// 
			// lblmoton
			// 
			this->lblmoton->AutoSize = true;
			this->lblmoton->Location = System::Drawing::Point(177, 437);
			this->lblmoton->Name = L"lblmoton";
			this->lblmoton->Size = System::Drawing::Size(0, 13);
			this->lblmoton->TabIndex = 1;
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
			this->btnaccion->Click += gcnew System::EventHandler(this, &MyForm::btnaccion_Click);
			// 
			// lbltiempo
			// 
			this->lbltiempo->AutoSize = true;
			this->lbltiempo->Location = System::Drawing::Point(40, 390);
			this->lbltiempo->Name = L"lbltiempo";
			this->lbltiempo->Size = System::Drawing::Size(0, 13);
			this->lbltiempo->TabIndex = 10;
			// 
			// lblmovimiento
			// 
			this->lblmovimiento->AutoSize = true;
			this->lblmovimiento->Location = System::Drawing::Point(136, 390);
			this->lblmovimiento->Name = L"lblmovimiento";
			this->lblmovimiento->Size = System::Drawing::Size(0, 13);
			this->lblmovimiento->TabIndex = 11;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(845, 554);
			this->Controls->Add(this->lblmovimiento);
			this->Controls->Add(this->lbltiempo);
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


		llenar();
		mezclar(grupo1, 1);
		mezclar(grupo2, 2);
		mezclar(grupo3, 3);
		mezclar(grupo4, 4);
		mezclar(grupo5, 5);
		mezclar(grupo6, 6);
		mezclar(grupo7, 7);
		mezclar(monton, 24);
		llenardatagrid();
		

	}
		   void mezclarmonton(int cantidad) {

			   Random^ random = gcnew Random();
			   int numero;
			   char color;

			   while (cantidad > 0)
			   {
			   num:

				   int pos = random->Next(0, 52);
				   if (mazo[pos] != "") {

					   numero = Convert::ToInt32(mazo[pos]->Remove(0, 1));
					   color = Convert::ToChar(mazo[pos]->Substring(0, 1));

					   Cartas* nuevacarta = new Cartas(numero, color);
					   monton->agregarCarta(*nuevacarta);
					   cantidad--;
					   mazo[pos] = "";
					   nuevacarta->Mostrar();

				   }
				   else {
					   goto num;
				   }

			   }

		  }
		   void mezclar(Listas* L, int cant) {
			   Random^ random = gcnew Random();
			   int numero;
			   char color;

			   while (cant > 0)
			   {
			   num:

				   int pos = random->Next(0, 52);
				   if (mazo[pos] != "") {

					   numero = Convert::ToInt32(mazo[pos]->Remove(0, 1));
					   color = Convert::ToChar(mazo[pos]->Substring(0, 1));

					   Cartas* nuevacarta = new Cartas(numero, color);
					   L->agregarCarta(*nuevacarta);
					   cant--;
					   mazo[pos] = "";

				   }
				   else {
					   goto num;
				   }

			   }

		   }


		   void llenar() {

			   for (int i = 0; i < 13; i++)
			   {
				   mazo[i] = "R" + (i + 1);
			   }

			   for (int i = 13; i < 26; i++)
			   {
				   mazo[i] = "R" + ((i % 13) + 1);
			   }
			   for (int i = 26; i < 39; i++)
			   {
				   mazo[i] = "N" + ((i % 13) + 1);

			   }
			   for (int i = 39; i < 52; i++)
			   {
				   mazo[i] = "N" + ((i % 13) + 1);
			   }
		   }

		   void llenardatagrid() {
			   
			   for (int i = 0; i < dataTablero->RowCount; i++)//vaciar el data grid 
			   {
				   for (int j = 0; j < dataTablero->ColumnCount; j++)
				   {
					   dataTablero->Rows[i]->Cells[j]->Value = "";
				   }
			   }
			   for (int i = 0; i < grupo1->cant ; i++)
			   {

				   Cartas* temp = grupo1->obtenerCarta(i);
				   if (temp == grupo1->ultimacarta || temp->show == true) {

					   temp->Mostrar();

					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[0]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[0]->Value = "/";

				   }
				  
			   }
			   for (int i = 0; i < grupo2->cant; i++)
			   {

				   Cartas* temp = grupo2->obtenerCarta(i);
				   if (temp == grupo2->ultimacarta || temp->show == true) {

					   temp->Mostrar();
					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[1]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[1]->Value = "/";

				   }
				  

			   }
			   for (int i = 0; i < grupo3->cant; i++)
			   {

				   Cartas* temp = grupo3->obtenerCarta(i);

				   
				   if (temp == grupo3->ultimacarta || temp->show == true) {

					   temp->Mostrar();

					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[2]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[2]->Value = "/";

				   }

			   }
			   for (int i = 0; i < grupo4->cant; i++)
			   {

				   

				   Cartas* temp = grupo4->obtenerCarta(i);

				   if (temp == grupo4->ultimacarta || temp->show == true) {

					   temp->Mostrar();

					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[3]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[3]->Value = "/";

				   }
				  

			   }
			   for (int i = 0; i < grupo5->cant; i++)
			   {

				   Cartas* temp = grupo5->obtenerCarta(i);

				   if (temp == grupo5->ultimacarta || temp->show == true) {

					   temp->Mostrar();

					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[4]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[4]->Value = "/";

				   }

			   }
			   for (int i = 0; i < grupo6->cant; i++)
			   {

				   Cartas* temp = grupo6->obtenerCarta(i);

				   if (temp == grupo6->ultimacarta || temp->show == true) {

					   temp->Mostrar();

					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[5]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[5]->Value = "/";

				   }

			   }

			   for (int i = 0; i < grupo7->cant; i++)
			   {

				   Cartas* temp = grupo7->obtenerCarta(i);

				   if (temp == grupo7->ultimacarta || temp->show == true) {

					   temp->Mostrar();

					   String^ string = temp->numeracion.ToString();
					   String^ string2 = String(temp->color, 1).ToString();

					   dataTablero->Rows[i]->Cells[6]->Value = string2 + string;

				   }
				   else {

					   dataTablero->Rows[i]->Cells[6]->Value = "/";

				   }

			   }

		
			   

		   }

		   void mover(int posicion, String^ origen, String^ destino) {
			   int grupodestino;
			   bool verificardestino = int::TryParse(destino, grupodestino);

			   Cartas* tarjeta = nullptr; 

			   int grupoorigen;
			   bool verificarorigen = int::TryParse(origen, grupoorigen);
			   if (grupoorigen && grupodestino) {
				   switch (grupoorigen)
				   {
				   case 1: 
					   tarjeta = grupo1->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo1->eliminarCarta(posicion); 
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   case 2:
					   tarjeta = grupo2->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo2->eliminarCarta(posicion);
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   case 3:
					   tarjeta = grupo3->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo3->eliminarCarta(posicion);
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   case 4:
					   tarjeta = grupo4->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo4->eliminarCarta(posicion);
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   case 5:
					   tarjeta = grupo5->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo5->eliminarCarta(posicion);
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   case 6:
					   tarjeta = grupo6->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo6->eliminarCarta(posicion);
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   case 7:
					   tarjeta = grupo7->obtenerCarta(posicion);
					   if (tarjeta != nullptr && tarjeta->show == true && cambiar(tarjeta, grupodestino)) {
						   grupo7->eliminarCarta(posicion);
						   llenardatagrid();

					   }
					   else {
						   MessageBox::Show("La carta seleccionada no se puede mover...");
					   }
					   break;
				   default:
					   MessageBox::Show("El grupo origen y/o destino no es válido :/");
					   break;
				   }

			   }

			   
		   }

		   bool cambiar(Cartas* pedircarta, int grupodestino) {
			   switch (grupodestino)
			   {
			   case 1:
				   if (grupo1->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo1->ultimacarta->color != pedircarta->color) {
					   grupo1->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true; 
					   
				   }
				   else {
					   return false;

				   }
				   break;
			   case 2:
				   if (grupo2->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo2->ultimacarta->color != pedircarta->color) {
					   grupo2->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true;

				   }
				   else {
					   return false;

				   }
				   break;
			   case 3:
				   if (grupo3->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo3->ultimacarta->color != pedircarta->color) {
					   grupo3->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true;

				   }
				   else {
					   return false;

				   }
				   break;
			   case 4:
				   if (grupo4->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo4->ultimacarta->color != pedircarta->color) {
					   grupo4->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true;

				   }
				   else {
					   return false;

				   }
				   break;
			   case 5:
				   if (grupo5->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo5->ultimacarta->color != pedircarta->color) {
					   grupo5->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true;

				   }
				   else {
					   return false;

				   }
				   break;
			   case 6:
				   if (grupo6->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo6->ultimacarta->color != pedircarta->color) {
					   grupo6->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true;

				   }
				   else {
					   return false;

				   }
				   break;
			   case 7:
				   if (grupo7->ultimacarta->numeracion == pedircarta->numeracion + 1 && grupo7->ultimacarta->color != pedircarta->color) {
					   grupo7->agregarCarta(*pedircarta);
					   movimientos++;
					   lblmovimiento->Text = "Movimientos: " + movimientos;
					   return true;

				   }
				   else {
					   return false;

				   }
				   break;
			   default:
				   MessageBox::Show("El grupo destino no es válido");
				   return false; 
				   break;
			   }

			   
		   }
		   bool ganar() {

			   bool num1 = true;
			   bool num2 = true;
			   bool num3 = true;
			   bool num4 = true;
			   bool num5 = true;
			   bool num6 = true;
			   bool num7 = true; 

			   if (grupo1->cant == 5) {

				   Cartas* ganarcarta = grupo1->joker;
				   while (num1 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num1 = false;
					   }
				   }
			   }
			   else { num1 = false; }

			   if (grupo2->cant == 5) {

				   Cartas* ganarcarta = grupo2->joker;
				   while (num2 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num2 = false;
					   }
				   }
			   }
			   else { num2 = false; }

			   if (grupo3->cant == 5) {

				   Cartas* ganarcarta = grupo3->joker;
				   while (num3 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num3 = false;
					   }
				   }
			   }
			   else { num3 = false; }

			   if (grupo4->cant == 5) {

				   Cartas* ganarcarta = grupo4->joker;
				   while (num4 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num4 = false;
					   }
				   }
			   }
			   else { num4 = false; }

			   if (grupo5->cant == 5) {

				   Cartas* ganarcarta = grupo5->joker;
				   while (num5 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num5 = false;
					   }
				   }
			   }
			   else { num5 = false; }

			   if (grupo6->cant == 5) {

				   Cartas* ganarcarta = grupo6->joker;
				   while (num6 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num6 = false;
					   }
				   }
			   }
			   else { num7 = false; }

			   if (grupo7->cant == 5) {

				   Cartas* ganarcarta = grupo7->joker;
				   while (num7 == true && ganarcarta->siguiente != nullptr) {
					   if (ganarcarta->show == false) {
						   num7 = false;
					   }
				   }
			   }
			   else { num7 = false; }

			   if (num1 || num2 || num3 || num4 || num5 || num6 || num7) {
				   return true;
			   }
			   else {
				   false; 
			   }
		   }
		   
	
	private: System::Void btnaccion_Click(System::Object^ sender, System::EventArgs^ e) {
		int pos;
		bool verificar = int::TryParse(txtpos->Text, pos);
		if (verificar && pos < dataTablero->RowCount) {
			mover(pos, txtorigen->Text, txtdestino->Text);

			if (ganar() == true) {
				MessageBox::Show("Victoria Magistral");
			}
		
		}
		else {
			String^ od1 = "MONTON"; 
			if(txtorigen->Text->ToUpper() == od1) {
				int destino;
				bool verificarDestino = int::TryParse(txtdestino->Text, destino);

				if (verificarDestino) {

					Cartas* nuevacarta = monton->obtenerCarta(posicionmonton - 1);

					if (nuevacarta != nullptr && nuevacarta->show == true && cambiar(nuevacarta, destino)) {

						monton->eliminarposicion(posicionmonton); 
						llenardatagrid(); 
						
					}
					else {
						MessageBox::Show("No se puede realizar movimiento..."); 
					}

				}
			}
		}
		
	}
private: System::Void btnsiguiente_Click(System::Object^ sender, System::EventArgs^ e) {
	posicionmonton++;
	if ((posicionmonton - 1) < monton->cant) {

		Cartas* nuevacarta = monton->obtenerCarta(posicionmonton - 1);
		lblmoton->Text = String(nuevacarta->color, 1).ToString() + nuevacarta->numeracion.ToString();
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	tiempo++;
	lbltiempo->Text = "Tiempo: " + tiempo + "s";
}
};

}
