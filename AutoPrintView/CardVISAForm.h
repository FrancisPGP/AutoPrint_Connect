#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace AutoPrintModel;
	using namespace AutoPrintController;

	/// <summary>
	/// Resumen de CardVISAForm
	/// </summary>
	public ref class CardVISAForm : public System::Windows::Forms::Form
	{
	public:
		CardVISAForm(void)
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
		~CardVISAForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCardNumber;
	private: System::Windows::Forms::Label^ lblCardExpiration;
	private: System::Windows::Forms::Label^ lblCardCVV;
	private: System::Windows::Forms::Button^ btnPrintCardVisa;

	private: System::Windows::Forms::TextBox^ txtCardNumberVisa;
	private: System::Windows::Forms::TextBox^ txtCardExpirationVisa;


	protected:



	protected:

	protected:





	private: System::Windows::Forms::TextBox^ txtCardCVVVisa;

	private: System::Windows::Forms::Label^ lblCardName;
	private: System::Windows::Forms::Label^ lblCardLastName;
	private: System::Windows::Forms::TextBox^ txtCardNameVisa;
	private: System::Windows::Forms::TextBox^ txtCardLastNameVisa;







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
			this->lblCardNumber = (gcnew System::Windows::Forms::Label());
			this->lblCardExpiration = (gcnew System::Windows::Forms::Label());
			this->lblCardCVV = (gcnew System::Windows::Forms::Label());
			this->btnPrintCardVisa = (gcnew System::Windows::Forms::Button());
			this->txtCardNumberVisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardExpirationVisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardCVVVisa = (gcnew System::Windows::Forms::TextBox());
			this->lblCardName = (gcnew System::Windows::Forms::Label());
			this->lblCardLastName = (gcnew System::Windows::Forms::Label());
			this->txtCardNameVisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardLastNameVisa = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblCardNumber
			// 
			this->lblCardNumber->AutoSize = true;
			this->lblCardNumber->Location = System::Drawing::Point(58, 51);
			this->lblCardNumber->Name = L"lblCardNumber";
			this->lblCardNumber->Size = System::Drawing::Size(114, 16);
			this->lblCardNumber->TabIndex = 0;
			this->lblCardNumber->Text = L"Número de tarjeta";
			// 
			// lblCardExpiration
			// 
			this->lblCardExpiration->AutoSize = true;
			this->lblCardExpiration->Location = System::Drawing::Point(365, 51);
			this->lblCardExpiration->Name = L"lblCardExpiration";
			this->lblCardExpiration->Size = System::Drawing::Size(51, 16);
			this->lblCardExpiration->TabIndex = 1;
			this->lblCardExpiration->Text = L"MM/AA";
			// 
			// lblCardCVV
			// 
			this->lblCardCVV->AutoSize = true;
			this->lblCardCVV->Location = System::Drawing::Point(58, 144);
			this->lblCardCVV->Name = L"lblCardCVV";
			this->lblCardCVV->Size = System::Drawing::Size(34, 16);
			this->lblCardCVV->TabIndex = 2;
			this->lblCardCVV->Text = L"CVV";
			// 
			// btnPrintCardVisa
			// 
			this->btnPrintCardVisa->Location = System::Drawing::Point(368, 292);
			this->btnPrintCardVisa->Name = L"btnPrintCardVisa";
			this->btnPrintCardVisa->Size = System::Drawing::Size(138, 40);
			this->btnPrintCardVisa->TabIndex = 5;
			this->btnPrintCardVisa->Text = L"Imprimir";
			this->btnPrintCardVisa->UseVisualStyleBackColor = true;
			this->btnPrintCardVisa->Click += gcnew System::EventHandler(this, &CardVISAForm::btnPrintCardVisa_Click);
			// 
			// txtCardNumberVisa
			// 
			this->txtCardNumberVisa->Location = System::Drawing::Point(61, 88);
			this->txtCardNumberVisa->Name = L"txtCardNumberVisa";
			this->txtCardNumberVisa->Size = System::Drawing::Size(190, 22);
			this->txtCardNumberVisa->TabIndex = 6;
			// 
			// txtCardExpirationVisa
			// 
			this->txtCardExpirationVisa->Location = System::Drawing::Point(368, 88);
			this->txtCardExpirationVisa->Name = L"txtCardExpirationVisa";
			this->txtCardExpirationVisa->Size = System::Drawing::Size(100, 22);
			this->txtCardExpirationVisa->TabIndex = 7;
			// 
			// txtCardCVVVisa
			// 
			this->txtCardCVVVisa->Location = System::Drawing::Point(61, 181);
			this->txtCardCVVVisa->Name = L"txtCardCVVVisa";
			this->txtCardCVVVisa->Size = System::Drawing::Size(92, 22);
			this->txtCardCVVVisa->TabIndex = 8;
			// 
			// lblCardName
			// 
			this->lblCardName->AutoSize = true;
			this->lblCardName->Location = System::Drawing::Point(365, 144);
			this->lblCardName->Name = L"lblCardName";
			this->lblCardName->Size = System::Drawing::Size(56, 16);
			this->lblCardName->TabIndex = 9;
			this->lblCardName->Text = L"Nombre";
			// 
			// lblCardLastName
			// 
			this->lblCardLastName->AutoSize = true;
			this->lblCardLastName->Location = System::Drawing::Point(58, 262);
			this->lblCardLastName->Name = L"lblCardLastName";
			this->lblCardLastName->Size = System::Drawing::Size(64, 16);
			this->lblCardLastName->TabIndex = 10;
			this->lblCardLastName->Text = L"Apellidos";
			// 
			// txtCardNameVisa
			// 
			this->txtCardNameVisa->Location = System::Drawing::Point(368, 181);
			this->txtCardNameVisa->Name = L"txtCardNameVisa";
			this->txtCardNameVisa->Size = System::Drawing::Size(190, 22);
			this->txtCardNameVisa->TabIndex = 11;
			// 
			// txtCardLastNameVisa
			// 
			this->txtCardLastNameVisa->Location = System::Drawing::Point(61, 292);
			this->txtCardLastNameVisa->Name = L"txtCardLastNameVisa";
			this->txtCardLastNameVisa->Size = System::Drawing::Size(190, 22);
			this->txtCardLastNameVisa->TabIndex = 12;
			// 
			// CardVISAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(620, 425);
			this->Controls->Add(this->txtCardLastNameVisa);
			this->Controls->Add(this->txtCardNameVisa);
			this->Controls->Add(this->lblCardLastName);
			this->Controls->Add(this->lblCardName);
			this->Controls->Add(this->txtCardCVVVisa);
			this->Controls->Add(this->txtCardExpirationVisa);
			this->Controls->Add(this->txtCardNumberVisa);
			this->Controls->Add(this->btnPrintCardVisa);
			this->Controls->Add(this->lblCardCVV);
			this->Controls->Add(this->lblCardExpiration);
			this->Controls->Add(this->lblCardNumber);
			this->Name = L"CardVISAForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"CardVISAForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPrintCardVisa_Click(System::Object^ sender, System::EventArgs^ e) {
		Card^ newCardVisa = gcnew Card(); //instanciamos la nueva tarjeta a emplear

		newCardVisa->account_number = txtCardNumberVisa->Text;
		newCardVisa->cvv = txtCardCVVVisa->Text;
		newCardVisa->dueDate = txtCardExpirationVisa->Text;

		Close();
	}
};
}
