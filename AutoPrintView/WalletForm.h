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
	/// Resumen de WalletForm
	/// </summary>
	public ref class WalletForm : public System::Windows::Forms::Form
	{
	public:
		WalletForm(void)
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
		~WalletForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ txtAmountToRechange;
	private: System::Windows::Forms::TextBox^ txtLastNameProprietorWallet;
	private: System::Windows::Forms::TextBox^ txtNameProprietorWallet;
	private: System::Windows::Forms::TextBox^ txtCVVWallet;
	private: System::Windows::Forms::TextBox^ txtMMAAWallet;
	private: System::Windows::Forms::TextBox^ txtCardNumberWallet;
	private: System::Windows::Forms::Button^ btnRecharge;
	private: System::Windows::Forms::Label^ lblLastNameProprietor;
	private: System::Windows::Forms::Label^ lblNameProprietor;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ lblCardNumber;
	private: System::Windows::Forms::Label^ lblOpctionBalance;
	private: System::Windows::Forms::Label^ lblBalanceUser;
	private: System::Windows::Forms::Label^ lblBalance;


	protected:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtAmountToRechange = (gcnew System::Windows::Forms::TextBox());
			this->txtLastNameProprietorWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtNameProprietorWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCVVWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtMMAAWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCardNumberWallet = (gcnew System::Windows::Forms::TextBox());
			this->btnRecharge = (gcnew System::Windows::Forms::Button());
			this->lblLastNameProprietor = (gcnew System::Windows::Forms::Label());
			this->lblNameProprietor = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->lblCardNumber = (gcnew System::Windows::Forms::Label());
			this->lblOpctionBalance = (gcnew System::Windows::Forms::Label());
			this->lblBalanceUser = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtAmountToRechange
			// 
			this->txtAmountToRechange->Location = System::Drawing::Point(71, 116);
			this->txtAmountToRechange->Name = L"txtAmountToRechange";
			this->txtAmountToRechange->Size = System::Drawing::Size(100, 22);
			this->txtAmountToRechange->TabIndex = 32;
			// 
			// txtLastNameProprietorWallet
			// 
			this->txtLastNameProprietorWallet->Location = System::Drawing::Point(294, 405);
			this->txtLastNameProprietorWallet->Name = L"txtLastNameProprietorWallet";
			this->txtLastNameProprietorWallet->Size = System::Drawing::Size(100, 22);
			this->txtLastNameProprietorWallet->TabIndex = 31;
			// 
			// txtNameProprietorWallet
			// 
			this->txtNameProprietorWallet->Location = System::Drawing::Point(60, 405);
			this->txtNameProprietorWallet->Name = L"txtNameProprietorWallet";
			this->txtNameProprietorWallet->Size = System::Drawing::Size(100, 22);
			this->txtNameProprietorWallet->TabIndex = 30;
			// 
			// txtCVVWallet
			// 
			this->txtCVVWallet->Location = System::Drawing::Point(527, 276);
			this->txtCVVWallet->Name = L"txtCVVWallet";
			this->txtCVVWallet->Size = System::Drawing::Size(100, 22);
			this->txtCVVWallet->TabIndex = 29;
			// 
			// txtMMAAWallet
			// 
			this->txtMMAAWallet->Location = System::Drawing::Point(294, 276);
			this->txtMMAAWallet->Name = L"txtMMAAWallet";
			this->txtMMAAWallet->Size = System::Drawing::Size(100, 22);
			this->txtMMAAWallet->TabIndex = 28;
			// 
			// txtCardNumberWallet
			// 
			this->txtCardNumberWallet->Location = System::Drawing::Point(60, 276);
			this->txtCardNumberWallet->Name = L"txtCardNumberWallet";
			this->txtCardNumberWallet->Size = System::Drawing::Size(100, 22);
			this->txtCardNumberWallet->TabIndex = 27;
			// 
			// btnRecharge
			// 
			this->btnRecharge->Location = System::Drawing::Point(319, 459);
			this->btnRecharge->Name = L"btnRecharge";
			this->btnRecharge->Size = System::Drawing::Size(75, 23);
			this->btnRecharge->TabIndex = 26;
			this->btnRecharge->Text = L"Recargar";
			this->btnRecharge->UseVisualStyleBackColor = true;
			this->btnRecharge->Click += gcnew System::EventHandler(this, &WalletForm::btnRecharge_Click);
			// 
			// lblLastNameProprietor
			// 
			this->lblLastNameProprietor->AutoSize = true;
			this->lblLastNameProprietor->Location = System::Drawing::Point(316, 356);
			this->lblLastNameProprietor->Name = L"lblLastNameProprietor";
			this->lblLastNameProprietor->Size = System::Drawing::Size(57, 16);
			this->lblLastNameProprietor->TabIndex = 25;
			this->lblLastNameProprietor->Text = L"Apellido";
			// 
			// lblNameProprietor
			// 
			this->lblNameProprietor->AutoSize = true;
			this->lblNameProprietor->Location = System::Drawing::Point(67, 356);
			this->lblNameProprietor->Name = L"lblNameProprietor";
			this->lblNameProprietor->Size = System::Drawing::Size(56, 16);
			this->lblNameProprietor->TabIndex = 24;
			this->lblNameProprietor->Text = L"Nombre";
			// 
			// lblCVV
			// 
			this->lblCVV->AutoSize = true;
			this->lblCVV->Location = System::Drawing::Point(554, 238);
			this->lblCVV->Name = L"lblCVV";
			this->lblCVV->Size = System::Drawing::Size(34, 16);
			this->lblCVV->TabIndex = 23;
			this->lblCVV->Text = L"CVV";
			// 
			// lblMonthYear
			// 
			this->lblMonthYear->AutoSize = true;
			this->lblMonthYear->Location = System::Drawing::Point(325, 238);
			this->lblMonthYear->Name = L"lblMonthYear";
			this->lblMonthYear->Size = System::Drawing::Size(51, 16);
			this->lblMonthYear->TabIndex = 22;
			this->lblMonthYear->Text = L"MM/AA";
			// 
			// lblCardNumber
			// 
			this->lblCardNumber->AutoSize = true;
			this->lblCardNumber->Location = System::Drawing::Point(57, 238);
			this->lblCardNumber->Name = L"lblCardNumber";
			this->lblCardNumber->Size = System::Drawing::Size(114, 16);
			this->lblCardNumber->TabIndex = 21;
			this->lblCardNumber->Text = L"Número de tarjeta";
			// 
			// lblOpctionBalance
			// 
			this->lblOpctionBalance->AutoSize = true;
			this->lblOpctionBalance->Location = System::Drawing::Point(32, 85);
			this->lblOpctionBalance->Name = L"lblOpctionBalance";
			this->lblOpctionBalance->Size = System::Drawing::Size(219, 16);
			this->lblOpctionBalance->TabIndex = 20;
			this->lblOpctionBalance->Text = L"Ingrese la cantidad a recargar (S/) : ";
			// 
			// lblBalanceUser
			// 
			this->lblBalanceUser->AutoSize = true;
			this->lblBalanceUser->Location = System::Drawing::Point(404, 40);
			this->lblBalanceUser->Name = L"lblBalanceUser";
			this->lblBalanceUser->Size = System::Drawing::Size(131, 16);
			this->lblBalanceUser->TabIndex = 19;
			this->lblBalanceUser->Text = L"Saldo disponible: S/.";
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Location = System::Drawing::Point(535, 40);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(14, 16);
			this->lblBalance->TabIndex = 33;
			this->lblBalance->Text = L"0";
			// 
			// WalletForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(721, 523);
			this->Controls->Add(this->lblBalance);
			this->Controls->Add(this->txtAmountToRechange);
			this->Controls->Add(this->txtLastNameProprietorWallet);
			this->Controls->Add(this->txtNameProprietorWallet);
			this->Controls->Add(this->txtCVVWallet);
			this->Controls->Add(this->txtMMAAWallet);
			this->Controls->Add(this->txtCardNumberWallet);
			this->Controls->Add(this->btnRecharge);
			this->Controls->Add(this->lblLastNameProprietor);
			this->Controls->Add(this->lblNameProprietor);
			this->Controls->Add(this->lblCVV);
			this->Controls->Add(this->lblMonthYear);
			this->Controls->Add(this->lblCardNumber);
			this->Controls->Add(this->lblOpctionBalance);
			this->Controls->Add(this->lblBalanceUser);
			this->Name = L"WalletForm";
			this->Text = L"Billetera";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnRecharge_Click(System::Object^ sender, System::EventArgs^ e) {
		Card^ newCardWallet = gcnew Card(); //instanciamos la nueva tarjeta a emplear

		newCardWallet->account_number = txtCardNumberWallet->Text;
		newCardWallet->cvv = txtCVVWallet->Text;
		newCardWallet->dueDate = txtMMAAWallet->Text;

		int a = Int32::Parse(lblBalance->Text);
		int b = Int32::Parse(txtAmountToRechange->Text);
		int total = a + b;

		lblBalance->Text = total.ToString();

	}
	};
}