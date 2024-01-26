#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	protected:

	private: System::Windows::Forms::PictureBox^ PB_imagePDF;
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
			this->PB_imagePDF = (gcnew System::Windows::Forms::PictureBox());
			this->BT_pagarBILL = (gcnew System::Windows::Forms::Button());
			this->TB_NUMcopias = (gcnew System::Windows::Forms::TextBox());
			this->LB_local = (gcnew System::Windows::Forms::ListBox());
			this->LB_tamañoHOJA = (gcnew System::Windows::Forms::ListBox());
			this->LB_tinta = (gcnew System::Windows::Forms::ListBox());
			this->LB_tipoHOJA = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TPage_historial = (gcnew System::Windows::Forms::TabPage());
			this->BT_pagarTARJ = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->TPage_impre->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imagePDF))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->TPage_impre);
			this->tabControl1->Controls->Add(this->TPage_historial);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(873, 495);
			this->tabControl1->TabIndex = 0;
			// 
			// TPage_impre
			// 
			this->TPage_impre->Controls->Add(this->PB_imagePDF);
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
			// PB_imagePDF
			// 
			this->PB_imagePDF->Location = System::Drawing::Point(33, 66);
			this->PB_imagePDF->Name = L"PB_imagePDF";
			this->PB_imagePDF->Size = System::Drawing::Size(284, 356);
			this->PB_imagePDF->TabIndex = 28;
			this->PB_imagePDF->TabStop = false;
			this->PB_imagePDF->Click += gcnew System::EventHandler(this, &PrintForm::PB_imagePDF_Click);
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
			this->TPage_historial->Text = L"Historial";
			this->TPage_historial->UseVisualStyleBackColor = true;
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
			// PrintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 499);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PrintForm";
			this->Text = L"PrintForm";
			this->tabControl1->ResumeLayout(false);
			this->TPage_impre->ResumeLayout(false);
			this->TPage_impre->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imagePDF))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PB_imagePDF_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
