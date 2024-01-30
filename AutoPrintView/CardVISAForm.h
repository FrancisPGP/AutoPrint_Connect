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
	private: System::Windows::Forms::TextBox^ txtOwnerWallet;
	private: System::Windows::Forms::TextBox^ txtCVVWallet;
	private: System::Windows::Forms::TextBox^ txtMMAAWallet;
	private: System::Windows::Forms::TextBox^ txtCardNumberWallet;
	private: System::Windows::Forms::Label^ lblPropietor;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAmountToRechange;
	private: System::Windows::Forms::Button^ btnRecharge;
	private: System::Windows::Forms::Label^ lblOpctionBalance;







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
			this->txtOwnerWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCVVWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtMMAAWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCardNumberWallet = (gcnew System::Windows::Forms::TextBox());
			this->lblPropietor = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAmountToRechange = (gcnew System::Windows::Forms::TextBox());
			this->btnRecharge = (gcnew System::Windows::Forms::Button());
			this->lblOpctionBalance = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblCardNumber
			// 
			this->lblCardNumber->AutoSize = true;
			this->lblCardNumber->Location = System::Drawing::Point(498, 249);
			this->lblCardNumber->Name = L"lblCardNumber";
			this->lblCardNumber->Size = System::Drawing::Size(114, 16);
			this->lblCardNumber->TabIndex = 0;
			this->lblCardNumber->Text = L"Número de tarjeta";
			// 
			// lblCardExpiration
			// 
			this->lblCardExpiration->AutoSize = true;
			this->lblCardExpiration->Location = System::Drawing::Point(805, 249);
			this->lblCardExpiration->Name = L"lblCardExpiration";
			this->lblCardExpiration->Size = System::Drawing::Size(51, 16);
			this->lblCardExpiration->TabIndex = 1;
			this->lblCardExpiration->Text = L"MM/AA";
			// 
			// lblCardCVV
			// 
			this->lblCardCVV->AutoSize = true;
			this->lblCardCVV->Location = System::Drawing::Point(498, 342);
			this->lblCardCVV->Name = L"lblCardCVV";
			this->lblCardCVV->Size = System::Drawing::Size(34, 16);
			this->lblCardCVV->TabIndex = 2;
			this->lblCardCVV->Text = L"CVV";
			// 
			// btnPrintCardVisa
			// 
			this->btnPrintCardVisa->Location = System::Drawing::Point(808, 490);
			this->btnPrintCardVisa->Name = L"btnPrintCardVisa";
			this->btnPrintCardVisa->Size = System::Drawing::Size(138, 40);
			this->btnPrintCardVisa->TabIndex = 5;
			this->btnPrintCardVisa->Text = L"Imprimir";
			this->btnPrintCardVisa->UseVisualStyleBackColor = true;
			this->btnPrintCardVisa->Click += gcnew System::EventHandler(this, &CardVISAForm::btnPrintCardVisa_Click);
			// 
			// txtCardNumberVisa
			// 
			this->txtCardNumberVisa->Location = System::Drawing::Point(501, 286);
			this->txtCardNumberVisa->Name = L"txtCardNumberVisa";
			this->txtCardNumberVisa->Size = System::Drawing::Size(190, 22);
			this->txtCardNumberVisa->TabIndex = 6;
			// 
			// txtCardExpirationVisa
			// 
			this->txtCardExpirationVisa->Location = System::Drawing::Point(808, 286);
			this->txtCardExpirationVisa->Name = L"txtCardExpirationVisa";
			this->txtCardExpirationVisa->Size = System::Drawing::Size(100, 22);
			this->txtCardExpirationVisa->TabIndex = 7;
			// 
			// txtCardCVVVisa
			// 
			this->txtCardCVVVisa->Location = System::Drawing::Point(501, 379);
			this->txtCardCVVVisa->Name = L"txtCardCVVVisa";
			this->txtCardCVVVisa->Size = System::Drawing::Size(92, 22);
			this->txtCardCVVVisa->TabIndex = 8;
			// 
			// lblCardName
			// 
			this->lblCardName->AutoSize = true;
			this->lblCardName->Location = System::Drawing::Point(805, 342);
			this->lblCardName->Name = L"lblCardName";
			this->lblCardName->Size = System::Drawing::Size(56, 16);
			this->lblCardName->TabIndex = 9;
			this->lblCardName->Text = L"Nombre";
			// 
			// lblCardLastName
			// 
			this->lblCardLastName->AutoSize = true;
			this->lblCardLastName->Location = System::Drawing::Point(498, 460);
			this->lblCardLastName->Name = L"lblCardLastName";
			this->lblCardLastName->Size = System::Drawing::Size(64, 16);
			this->lblCardLastName->TabIndex = 10;
			this->lblCardLastName->Text = L"Apellidos";
			// 
			// txtCardNameVisa
			// 
			this->txtCardNameVisa->Location = System::Drawing::Point(808, 379);
			this->txtCardNameVisa->Name = L"txtCardNameVisa";
			this->txtCardNameVisa->Size = System::Drawing::Size(190, 22);
			this->txtCardNameVisa->TabIndex = 11;
			// 
			// txtCardLastNameVisa
			// 
			this->txtCardLastNameVisa->Location = System::Drawing::Point(501, 490);
			this->txtCardLastNameVisa->Name = L"txtCardLastNameVisa";
			this->txtCardLastNameVisa->Size = System::Drawing::Size(190, 22);
			this->txtCardLastNameVisa->TabIndex = 12;
			// 
			// txtOwnerWallet
			// 
			this->txtOwnerWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOwnerWallet->Location = System::Drawing::Point(41, 326);
			this->txtOwnerWallet->MaxLength = 40;
			this->txtOwnerWallet->Name = L"txtOwnerWallet";
			this->txtOwnerWallet->Size = System::Drawing::Size(178, 28);
			this->txtOwnerWallet->TabIndex = 53;
			this->txtOwnerWallet->Text = L"NOMBRE APELLIDO";
			this->txtOwnerWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtCVVWallet
			// 
			this->txtCVVWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCVVWallet->Location = System::Drawing::Point(53, 409);
			this->txtCVVWallet->MaxLength = 3;
			this->txtCVVWallet->Name = L"txtCVVWallet";
			this->txtCVVWallet->Size = System::Drawing::Size(54, 28);
			this->txtCVVWallet->TabIndex = 52;
			this->txtCVVWallet->Text = L"XXX";
			this->txtCVVWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMMAAWallet
			// 
			this->txtMMAAWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMMAAWallet->Location = System::Drawing::Point(44, 227);
			this->txtMMAAWallet->MaxLength = 5;
			this->txtMMAAWallet->Name = L"txtMMAAWallet";
			this->txtMMAAWallet->Size = System::Drawing::Size(69, 28);
			this->txtMMAAWallet->TabIndex = 51;
			this->txtMMAAWallet->Text = L"MM/AA";
			this->txtMMAAWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtCardNumberWallet
			// 
			this->txtCardNumberWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCardNumberWallet->Location = System::Drawing::Point(44, 145);
			this->txtCardNumberWallet->MaxLength = 19;
			this->txtCardNumberWallet->Name = L"txtCardNumberWallet";
			this->txtCardNumberWallet->Size = System::Drawing::Size(224, 28);
			this->txtCardNumberWallet->TabIndex = 50;
			this->txtCardNumberWallet->Text = L"XXXX-XXXX-XXXX-XXXX";
			this->txtCardNumberWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblPropietor
			// 
			this->lblPropietor->AutoSize = true;
			this->lblPropietor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPropietor->Location = System::Drawing::Point(48, 277);
			this->lblPropietor->Name = L"lblPropietor";
			this->lblPropietor->Size = System::Drawing::Size(171, 25);
			this->lblPropietor->TabIndex = 49;
			this->lblPropietor->Text = L"Titular de la tarjeta";
			this->lblPropietor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblCVV
			// 
			this->lblCVV->AutoSize = true;
			this->lblCVV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCVV->Location = System::Drawing::Point(58, 368);
			this->lblCVV->Name = L"lblCVV";
			this->lblCVV->Size = System::Drawing::Size(55, 25);
			this->lblCVV->TabIndex = 48;
			this->lblCVV->Text = L"CVV";
			this->lblCVV->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblMonthYear
			// 
			this->lblMonthYear->AutoSize = true;
			this->lblMonthYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMonthYear->Location = System::Drawing::Point(39, 185);
			this->lblMonthYear->Name = L"lblMonthYear";
			this->lblMonthYear->Size = System::Drawing::Size(189, 25);
			this->lblMonthYear->TabIndex = 47;
			this->lblMonthYear->Text = L"Fecha de caducidad";
			this->lblMonthYear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 25);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Número de tarjeta";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtAmountToRechange
			// 
			this->txtAmountToRechange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtAmountToRechange->Location = System::Drawing::Point(41, 48);
			this->txtAmountToRechange->Name = L"txtAmountToRechange";
			this->txtAmountToRechange->Size = System::Drawing::Size(185, 28);
			this->txtAmountToRechange->TabIndex = 45;
			this->txtAmountToRechange->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnRecharge
			// 
			this->btnRecharge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRecharge->Location = System::Drawing::Point(203, 448);
			this->btnRecharge->Name = L"btnRecharge";
			this->btnRecharge->Size = System::Drawing::Size(113, 37);
			this->btnRecharge->TabIndex = 44;
			this->btnRecharge->Text = L"Recargar";
			this->btnRecharge->UseVisualStyleBackColor = true;
			// 
			// lblOpctionBalance
			// 
			this->lblOpctionBalance->AutoSize = true;
			this->lblOpctionBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOpctionBalance->Location = System::Drawing::Point(36, 20);
			this->lblOpctionBalance->Name = L"lblOpctionBalance";
			this->lblOpctionBalance->Size = System::Drawing::Size(220, 25);
			this->lblOpctionBalance->TabIndex = 43;
			this->lblOpctionBalance->Text = L"Monto a recargar (S/.) : ";
			this->lblOpctionBalance->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CardVISAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1025, 573);
			this->Controls->Add(this->txtOwnerWallet);
			this->Controls->Add(this->txtCVVWallet);
			this->Controls->Add(this->txtMMAAWallet);
			this->Controls->Add(this->txtCardNumberWallet);
			this->Controls->Add(this->lblPropietor);
			this->Controls->Add(this->lblCVV);
			this->Controls->Add(this->lblMonthYear);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAmountToRechange);
			this->Controls->Add(this->btnRecharge);
			this->Controls->Add(this->lblOpctionBalance);
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
