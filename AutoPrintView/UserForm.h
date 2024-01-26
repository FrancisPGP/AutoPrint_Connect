#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//MODIFICACIONES DE LUIS------------------------------------------
	using namespace AutoPrintModel;
	using namespace AutoPrintController;
	//----------------------------------------------------------------

	/// <summary>
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtMail;


	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::TextBox^ txtGender;
	private: System::Windows::Forms::TextBox^ txtDateOfBirth;
	private: System::Windows::Forms::TextBox^ txtDNI;




	private: System::Windows::Forms::TextBox^ txtCellphoneNumber;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;
	private: System::Windows::Forms::Button^ btnContinue;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label10;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtMail = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			this->txtDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtCellphoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(60, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(60, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellidos:";
			this->label2->Click += gcnew System::EventHandler(this, &UserForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(60, 286);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Genero: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(60, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Fecha de nacimiento:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(60, 453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Correo electrónico: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(360, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(211, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Número de celular:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(360, 207);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Número de DNI:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(360, 286);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Contraseña:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(360, 360);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(237, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Confirma contraseña:";
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtName->ForeColor = System::Drawing::SystemColors::MenuText;
			this->txtName->Location = System::Drawing::Point(60, 158);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(130, 20);
			this->txtName->TabIndex = 10;
			// 
			// txtMail
			// 
			this->txtMail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtMail->Location = System::Drawing::Point(60, 502);
			this->txtMail->Name = L"txtMail";
			this->txtMail->Size = System::Drawing::Size(130, 20);
			this->txtMail->TabIndex = 11;
			// 
			// txtSurname
			// 
			this->txtSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtSurname->Location = System::Drawing::Point(60, 253);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(130, 20);
			this->txtSurname->TabIndex = 12;
			// 
			// txtGender
			// 
			this->txtGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtGender->Location = System::Drawing::Point(60, 328);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(130, 20);
			this->txtGender->TabIndex = 13;
			// 
			// txtDateOfBirth
			// 
			this->txtDateOfBirth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDateOfBirth->Location = System::Drawing::Point(60, 410);
			this->txtDateOfBirth->Name = L"txtDateOfBirth";
			this->txtDateOfBirth->Size = System::Drawing::Size(130, 20);
			this->txtDateOfBirth->TabIndex = 14;
			// 
			// txtDNI
			// 
			this->txtDNI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDNI->Location = System::Drawing::Point(365, 253);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(130, 20);
			this->txtDNI->TabIndex = 15;
			// 
			// txtCellphoneNumber
			// 
			this->txtCellphoneNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCellphoneNumber->Location = System::Drawing::Point(365, 158);
			this->txtCellphoneNumber->Name = L"txtCellphoneNumber";
			this->txtCellphoneNumber->Size = System::Drawing::Size(130, 20);
			this->txtCellphoneNumber->TabIndex = 16;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(365, 328);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(130, 20);
			this->txtPassword->TabIndex = 17;
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtConfirmPassword->Location = System::Drawing::Point(365, 410);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(130, 20);
			this->txtConfirmPassword->TabIndex = 18;
			// 
			// btnContinue
			// 
			this->btnContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnContinue->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnContinue->FlatAppearance->BorderColor = System::Drawing::Color::Violet;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinue->Location = System::Drawing::Point(374, 472);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(146, 50);
			this->btnContinue->TabIndex = 19;
			this->btnContinue->Text = L"Siguiente";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &UserForm::btnContinue_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(660, 93);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(428, 476);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(697, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(237, 25);
			this->label10->TabIndex = 21;
			this->label10->Text = L"AUTOPRINT CONNECT";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1123, 661);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtCellphoneNumber);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtDateOfBirth);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->txtMail);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->IsMdiContainer = true;
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
//-----------------------------------------------------------------------------------------------------------------CAMBIOS DE LUIS-----------------------------------------------------------------------
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) { //FUNCIONALIDAD DEL BOTÓN PARA TERMINAR DE REGISTRARSE
		User^ newUser = gcnew User(); //instanciamos al nuevo usuario
		
		newUser->Name = txtName->Text;
		newUser->LastName = txtSurname->Text;
		newUser->Gender = txtGender->Text;
		newUser->Birthdate = Int32::Parse(txtDateOfBirth->Text);
		newUser->Email = txtMail->Text;
		newUser->Phone_number = txtCellphoneNumber->Text;
		newUser->Dni = txtDNI->Text;
		newUser->Password = txtPassword->Text;
		newUser->Password = txtConfirmPassword->Text; //Acá no estoy seguro si deberíamos colocar otro atributo que almacene la misma contraseña para comparar y asegurar que sea la misma
		
		//Ya cargados los datos, lo pasamos como parámetro al método AddCustomer
		Controller::AddCustomer(newUser); //Añadimos al usuario
		Close(); //Una vez añadido el nuevo usario, cerramos esa pestaña

	}//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
}
