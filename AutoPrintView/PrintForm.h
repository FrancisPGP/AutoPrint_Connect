#pragma once
#include "CardVISAForm.h"

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace AutoPrintModel;
	using namespace AutoPrintController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de PrintForm
	/// </summary>
	public ref class PrintForm : public System::Windows::Forms::Form
	{
	public:
		PrintForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PrintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ TPage_impre;
	private: System::Windows::Forms::PictureBox^ PB_PDF_imprimir;
	protected:


	private: System::Windows::Forms::Button^ BT_pagarBILL;




	private: System::Windows::Forms::TextBox^ TB_NUMcopias;
	private: System::Windows::Forms::ListBox^ LB_local;
	private: System::Windows::Forms::ListBox^ LB_tamañoHOJA;
	private: System::Windows::Forms::ListBox^ LB_tinta;
	private: System::Windows::Forms::ListBox^ LB_tipoHOJA;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ TPage_historial;
	private: System::Windows::Forms::Button^ BT_pagarTARJ;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ PB_PDF_historial;


	private: System::Windows::Forms::DataGridView^ dgvTransport;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Empresa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Matricula;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Asientos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_SpeedMax;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_StartTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_FinishTime;





























	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->TPage_impre = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PB_PDF_imprimir = (gcnew System::Windows::Forms::PictureBox());
			this->BT_pagarTARJ = (gcnew System::Windows::Forms::Button());
			this->BT_pagarBILL = (gcnew System::Windows::Forms::Button());
			this->TB_NUMcopias = (gcnew System::Windows::Forms::TextBox());
			this->LB_local = (gcnew System::Windows::Forms::ListBox());
			this->LB_tamañoHOJA = (gcnew System::Windows::Forms::ListBox());
			this->LB_tinta = (gcnew System::Windows::Forms::ListBox());
			this->LB_tipoHOJA = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TPage_historial = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dgvTransport = (gcnew System::Windows::Forms::DataGridView());
			this->Transp_Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Empresa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Matricula = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Asientos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_SpeedMax = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_StartTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_FinishTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PB_PDF_historial = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->TPage_impre->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_PDF_imprimir))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTransport))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_PDF_historial))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->TPage_impre);
			this->tabControl1->Controls->Add(this->TPage_historial);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(873, 495);
			this->tabControl1->TabIndex = 0;
			// 
			// TPage_impre
			// 
			this->TPage_impre->Controls->Add(this->label10);
			this->TPage_impre->Controls->Add(this->label9);
			this->TPage_impre->Controls->Add(this->label8);
			this->TPage_impre->Controls->Add(this->label7);
			this->TPage_impre->Controls->Add(this->PB_PDF_imprimir);
			this->TPage_impre->Controls->Add(this->BT_pagarTARJ);
			this->TPage_impre->Controls->Add(this->BT_pagarBILL);
			this->TPage_impre->Controls->Add(this->TB_NUMcopias);
			this->TPage_impre->Controls->Add(this->LB_local);
			this->TPage_impre->Controls->Add(this->LB_tamañoHOJA);
			this->TPage_impre->Controls->Add(this->LB_tinta);
			this->TPage_impre->Controls->Add(this->LB_tipoHOJA);
			this->TPage_impre->Controls->Add(this->label6);
			this->TPage_impre->Controls->Add(this->label5);
			this->TPage_impre->Controls->Add(this->label4);
			this->TPage_impre->Controls->Add(this->label3);
			this->TPage_impre->Controls->Add(this->label2);
			this->TPage_impre->Controls->Add(this->label1);
			this->TPage_impre->Location = System::Drawing::Point(4, 25);
			this->TPage_impre->Name = L"TPage_impre";
			this->TPage_impre->Padding = System::Windows::Forms::Padding(3);
			this->TPage_impre->Size = System::Drawing::Size(865, 466);
			this->TPage_impre->TabIndex = 0;
			this->TPage_impre->Text = L"Imprimir";
			this->TPage_impre->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(624, 296);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 25);
			this->label10->TabIndex = 32;
			this->label10->Text = L"S/";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(664, 296);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 27);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Monto";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(86, 425);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(168, 36);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Color:   S/0.50\r\nBlanco y Negro:   S/0.30";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(619, 250);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 29);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Monto a Pagar:";
			// 
			// PB_PDF_imprimir
			// 
			this->PB_PDF_imprimir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PB_PDF_imprimir->Location = System::Drawing::Point(33, 66);
			this->PB_PDF_imprimir->Name = L"PB_PDF_imprimir";
			this->PB_PDF_imprimir->Size = System::Drawing::Size(284, 356);
			this->PB_PDF_imprimir->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB_PDF_imprimir->TabIndex = 28;
			this->PB_PDF_imprimir->TabStop = false;
			this->PB_PDF_imprimir->Click += gcnew System::EventHandler(this, &PrintForm::PB_imagePDF_Click);
			// 
			// BT_pagarTARJ
			// 
			this->BT_pagarTARJ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_pagarTARJ->Location = System::Drawing::Point(404, 367);
			this->BT_pagarTARJ->Name = L"BT_pagarTARJ";
			this->BT_pagarTARJ->Size = System::Drawing::Size(154, 74);
			this->BT_pagarTARJ->TabIndex = 27;
			this->BT_pagarTARJ->Text = L"Pagar con Tarjeta";
			this->BT_pagarTARJ->UseVisualStyleBackColor = true;
			this->BT_pagarTARJ->Click += gcnew System::EventHandler(this, &PrintForm::BT_pagarTARJ_Click);
			// 
			// BT_pagarBILL
			// 
			this->BT_pagarBILL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_pagarBILL->Location = System::Drawing::Point(624, 367);
			this->BT_pagarBILL->Name = L"BT_pagarBILL";
			this->BT_pagarBILL->Size = System::Drawing::Size(154, 74);
			this->BT_pagarBILL->TabIndex = 26;
			this->BT_pagarBILL->Text = L"Pagar con Billetera";
			this->BT_pagarBILL->UseVisualStyleBackColor = true;
			this->BT_pagarBILL->Click += gcnew System::EventHandler(this, &PrintForm::BT_pagarBILL_Click);
			// 
			// TB_NUMcopias
			// 
			this->TB_NUMcopias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NUMcopias->Location = System::Drawing::Point(624, 192);
			this->TB_NUMcopias->Name = L"TB_NUMcopias";
			this->TB_NUMcopias->Size = System::Drawing::Size(163, 30);
			this->TB_NUMcopias->TabIndex = 25;
			// 
			// LB_local
			// 
			this->LB_local->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_local->FormattingEnabled = true;
			this->LB_local->ItemHeight = 25;
			this->LB_local->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ciencias Sociales", L"E.E.G.G.L.L." });
			this->LB_local->Location = System::Drawing::Point(395, 296);
			this->LB_local->Name = L"LB_local";
			this->LB_local->Size = System::Drawing::Size(163, 29);
			this->LB_local->TabIndex = 24;
			// 
			// LB_tamañoHOJA
			// 
			this->LB_tamañoHOJA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_tamañoHOJA->FormattingEnabled = true;
			this->LB_tamañoHOJA->ItemHeight = 25;
			this->LB_tamañoHOJA->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A4", L"A3", L"A2", L"Carta" });
			this->LB_tamañoHOJA->Location = System::Drawing::Point(624, 82);
			this->LB_tamañoHOJA->Name = L"LB_tamañoHOJA";
			this->LB_tamañoHOJA->Size = System::Drawing::Size(163, 29);
			this->LB_tamañoHOJA->TabIndex = 23;
			// 
			// LB_tinta
			// 
			this->LB_tinta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_tinta->FormattingEnabled = true;
			this->LB_tinta->ItemHeight = 25;
			this->LB_tinta->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Color", L"Blanco y negra" });
			this->LB_tinta->Location = System::Drawing::Point(395, 193);
			this->LB_tinta->Name = L"LB_tinta";
			this->LB_tinta->Size = System::Drawing::Size(163, 29);
			this->LB_tinta->TabIndex = 22;
			// 
			// LB_tipoHOJA
			// 
			this->LB_tipoHOJA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_tipoHOJA->FormattingEnabled = true;
			this->LB_tipoHOJA->ItemHeight = 25;
			this->LB_tipoHOJA->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Hoja Bond", L"Papel Fotográfico" });
			this->LB_tipoHOJA->Location = System::Drawing::Point(395, 82);
			this->LB_tipoHOJA->Name = L"LB_tipoHOJA";
			this->LB_tipoHOJA->Size = System::Drawing::Size(163, 29);
			this->LB_tipoHOJA->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(229, 29);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Suba aquí su PDF:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(390, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(201, 29);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Local de recojo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(619, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 29);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Número de copias:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(619, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Tamaño de hoja:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(390, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 29);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Tinta:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(390, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 29);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Tipo de hoja:";
			// 
			// TPage_historial
			// 
			this->TPage_historial->Location = System::Drawing::Point(4, 25);
			this->TPage_historial->Name = L"TPage_historial";
			this->TPage_historial->Padding = System::Windows::Forms::Padding(3);
			this->TPage_historial->Size = System::Drawing::Size(865, 466);
			this->TPage_historial->TabIndex = 1;
			this->TPage_historial->Text = L"Cola";
			this->TPage_historial->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->PB_PDF_historial);
			this->tabPage1->Controls->Add(this->dgvTransport);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(865, 466);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Historial";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dgvTransport
			// 
			this->dgvTransport->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTransport->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Transp_Id,
					this->Transp_Tipo, this->Transp_Empresa, this->Transp_Matricula, this->Transp_Asientos, this->Transp_SpeedMax, this->Transp_StartTime,
					this->Transp_FinishTime
			});
			this->dgvTransport->Location = System::Drawing::Point(6, 66);
			this->dgvTransport->Name = L"dgvTransport";
			this->dgvTransport->RowHeadersWidth = 51;
			this->dgvTransport->RowTemplate->Height = 24;
			this->dgvTransport->Size = System::Drawing::Size(562, 330);
			this->dgvTransport->TabIndex = 2;
			// 
			// Transp_Id
			// 
			this->Transp_Id->FillWeight = 59.57447F;
			this->Transp_Id->HeaderText = L"ID";
			this->Transp_Id->MinimumWidth = 6;
			this->Transp_Id->Name = L"Transp_Id";
			this->Transp_Id->Width = 35;
			// 
			// Transp_Tipo
			// 
			this->Transp_Tipo->FillWeight = 87.38197F;
			this->Transp_Tipo->HeaderText = L"Tipo";
			this->Transp_Tipo->MinimumWidth = 6;
			this->Transp_Tipo->Name = L"Transp_Tipo";
			this->Transp_Tipo->Width = 60;
			// 
			// Transp_Empresa
			// 
			this->Transp_Empresa->FillWeight = 130.1627F;
			this->Transp_Empresa->HeaderText = L"Empresa";
			this->Transp_Empresa->MinimumWidth = 6;
			this->Transp_Empresa->Name = L"Transp_Empresa";
			this->Transp_Empresa->Width = 125;
			// 
			// Transp_Matricula
			// 
			this->Transp_Matricula->FillWeight = 122.8809F;
			this->Transp_Matricula->HeaderText = L"Matrícula";
			this->Transp_Matricula->MinimumWidth = 6;
			this->Transp_Matricula->Name = L"Transp_Matricula";
			this->Transp_Matricula->Width = 65;
			// 
			// Transp_Asientos
			// 
			this->Transp_Asientos->HeaderText = L"Número de Asientos";
			this->Transp_Asientos->MinimumWidth = 6;
			this->Transp_Asientos->Name = L"Transp_Asientos";
			this->Transp_Asientos->Width = 125;
			// 
			// Transp_SpeedMax
			// 
			this->Transp_SpeedMax->HeaderText = L"Velocidad Máxima";
			this->Transp_SpeedMax->MinimumWidth = 6;
			this->Transp_SpeedMax->Name = L"Transp_SpeedMax";
			this->Transp_SpeedMax->Width = 125;
			// 
			// Transp_StartTime
			// 
			this->Transp_StartTime->HeaderText = L"Inicio Laboral";
			this->Transp_StartTime->MinimumWidth = 6;
			this->Transp_StartTime->Name = L"Transp_StartTime";
			this->Transp_StartTime->Width = 125;
			// 
			// Transp_FinishTime
			// 
			this->Transp_FinishTime->HeaderText = L"Fin Laboral";
			this->Transp_FinishTime->MinimumWidth = 6;
			this->Transp_FinishTime->Name = L"Transp_FinishTime";
			this->Transp_FinishTime->Width = 125;
			// 
			// PB_PDF_historial
			// 
			this->PB_PDF_historial->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PB_PDF_historial->Location = System::Drawing::Point(574, 54);
			this->PB_PDF_historial->Name = L"PB_PDF_historial";
			this->PB_PDF_historial->Size = System::Drawing::Size(284, 356);
			this->PB_PDF_historial->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB_PDF_historial->TabIndex = 29;
			this->PB_PDF_historial->TabStop = false;
			// 
			// PrintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 499);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PrintForm";
			this->Text = L"Documentos";
			this->tabControl1->ResumeLayout(false);
			this->TPage_impre->ResumeLayout(false);
			this->TPage_impre->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_PDF_imprimir))->EndInit();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTransport))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_PDF_historial))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PB_imagePDF_Click(System::Object^ sender, System::EventArgs^ e) {
		//Precargado
		OpenFileDialog^ opfd = gcnew OpenFileDialog();
		opfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			/*PB_PDF_imprimir == PictureBox1*/
			PB_PDF_imprimir->Image = gcnew Bitmap(opfd->FileName);
		}
	}
	private: System::Void BT_pagarTARJ_Click(System::Object^ sender, System::EventArgs^ e) {
		CardVISAForm^ cardVISAForm = gcnew CardVISAForm();
		cardVISAForm->MdiParent = this;
		cardVISAForm->Show();
	}
	private: System::Void BT_pagarBILL_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ File_Tipo = LB_tipoHOJA->Text;
		String^ File_tamaño = LB_tamañoHOJA->Text;
		String^ File_tinta = LB_tinta->Text;
		//int File_copia = TB_NUMcopias->Text; No hacemos eso porque lo queremos convertir en texto (caracteres)
		int File_copia = Int32::Parse(TB_NUMcopias->Text);
		String^ File_local = LB_local->Text;


		//Contenidos de dgvs (No entendí lo que dijo el profe)
		//AGREGUÉ using namespace AutoPrintModel; para poder usar la clase Order
		Order^ File = gcnew Order();
		//Atributos de Vehicule: Id,Type,Company,License_Plate
		File->sheet_type = File_Tipo;
		File->sheet_size = File_tamaño;
		File->color_page = File_tinta;
		File->num_copies = File_copia;
		File->Location = File_local;

		if (PB_PDF_imprimir != nullptr && PB_PDF_imprimir->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			PB_PDF_imprimir->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			File->File = ms->ToArray();
		}

		//if(el usuario paga)
		/*File=robot*/
		Controller::AddFile(File);
		ShowFiles();
	}
		   void ShowFiles() {
			   List<Order^>^ transports = Controller::QueryAllFiles();
			   dgvTransport->Rows->Clear();
			   for (int i = 0; i < transports->Count; i++) {
				   Vehicule^ Transporte = transports[i];
				   //dgvTransport es el nombre de nuestra tabla
				   dgvTransport->Rows->Add(gcnew array<String^>{
					   "" + Transporte->Id,
						   Transporte->Type,
						   Transporte->Company,
						   Transporte->License_Plate
				   });
				   //"" + Transporte->Id, porque no es de tipo String
			   }
		   }
};
}
