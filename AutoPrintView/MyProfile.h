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
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de MyProfile
	/// </summary>
	public ref class MyProfile : public System::Windows::Forms::Form
	{
	public:
		MyProfile(void)
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
		~MyProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtCorreoP;
	private: System::Windows::Forms::TextBox^ txtNUMP;
	private: System::Windows::Forms::TextBox^ txtConP;



	private: System::Windows::Forms::TextBox^ txtDNIP;

	private: System::Windows::Forms::TextBox^ txtlastP;
	private: System::Windows::Forms::TextBox^ txtNameP;



	private: System::Windows::Forms::Button^ btn_modificar_perfil;
	private: System::Windows::Forms::Button^ btn_foto_perfil;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtCorreoP = (gcnew System::Windows::Forms::TextBox());
			this->txtNUMP = (gcnew System::Windows::Forms::TextBox());
			this->txtConP = (gcnew System::Windows::Forms::TextBox());
			this->txtDNIP = (gcnew System::Windows::Forms::TextBox());
			this->txtlastP = (gcnew System::Windows::Forms::TextBox());
			this->txtNameP = (gcnew System::Windows::Forms::TextBox());
			this->btn_modificar_perfil = (gcnew System::Windows::Forms::Button());
			this->btn_foto_perfil = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Firebrick;
			this->label1->Location = System::Drawing::Point(200, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"My Profile";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(433, 156);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(156, 154);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyProfile::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(56, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre:";
			this->label2->Click += gcnew System::EventHandler(this, &MyProfile::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(56, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Apellidos:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(56, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"DNI:";
			this->label4->Click += gcnew System::EventHandler(this, &MyProfile::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(56, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(56, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Numero:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(56, 327);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Contraseña:";
			// 
			// txtCorreoP
			// 
			this->txtCorreoP->Location = System::Drawing::Point(184, 249);
			this->txtCorreoP->Name = L"txtCorreoP";
			this->txtCorreoP->Size = System::Drawing::Size(149, 20);
			this->txtCorreoP->TabIndex = 8;
			// 
			// txtNUMP
			// 
			this->txtNUMP->Location = System::Drawing::Point(184, 291);
			this->txtNUMP->Name = L"txtNUMP";
			this->txtNUMP->Size = System::Drawing::Size(149, 20);
			this->txtNUMP->TabIndex = 9;
			// 
			// txtConP
			// 
			this->txtConP->Location = System::Drawing::Point(184, 332);
			this->txtConP->Name = L"txtConP";
			this->txtConP->Size = System::Drawing::Size(149, 20);
			this->txtConP->TabIndex = 10;
			// 
			// txtDNIP
			// 
			this->txtDNIP->Location = System::Drawing::Point(184, 208);
			this->txtDNIP->Name = L"txtDNIP";
			this->txtDNIP->Size = System::Drawing::Size(148, 20);
			this->txtDNIP->TabIndex = 11;
			// 
			// txtlastP
			// 
			this->txtlastP->Location = System::Drawing::Point(184, 170);
			this->txtlastP->Name = L"txtlastP";
			this->txtlastP->Size = System::Drawing::Size(148, 20);
			this->txtlastP->TabIndex = 12;
			// 
			// txtNameP
			// 
			this->txtNameP->Location = System::Drawing::Point(184, 129);
			this->txtNameP->Name = L"txtNameP";
			this->txtNameP->Size = System::Drawing::Size(148, 20);
			this->txtNameP->TabIndex = 13;
			// 
			// btn_modificar_perfil
			// 
			this->btn_modificar_perfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_modificar_perfil->Location = System::Drawing::Point(208, 395);
			this->btn_modificar_perfil->Name = L"btn_modificar_perfil";
			this->btn_modificar_perfil->Size = System::Drawing::Size(94, 37);
			this->btn_modificar_perfil->TabIndex = 14;
			this->btn_modificar_perfil->Text = L"Modificar";
			this->btn_modificar_perfil->UseVisualStyleBackColor = true;
			this->btn_modificar_perfil->Click += gcnew System::EventHandler(this, &MyProfile::btn_modificar_perfil_Click);
			// 
			// btn_foto_perfil
			// 
			this->btn_foto_perfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_foto_perfil->Location = System::Drawing::Point(461, 332);
			this->btn_foto_perfil->Name = L"btn_foto_perfil";
			this->btn_foto_perfil->Size = System::Drawing::Size(110, 40);
			this->btn_foto_perfil->TabIndex = 15;
			this->btn_foto_perfil->Text = L"Agregar foto";
			this->btn_foto_perfil->UseVisualStyleBackColor = true;
			// 
			// MyProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(633, 470);
			this->Controls->Add(this->btn_foto_perfil);
			this->Controls->Add(this->btn_modificar_perfil);
			this->Controls->Add(this->txtNameP);
			this->Controls->Add(this->txtlastP);
			this->Controls->Add(this->txtDNIP);
			this->Controls->Add(this->txtConP);
			this->Controls->Add(this->txtNUMP);
			this->Controls->Add(this->txtCorreoP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyProfile";
			this->Text = L"MyProfile";
			this->Load += gcnew System::EventHandler(this, &MyProfile::MyProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void FillTextBoxes(User^ u) {
			txtNameP->Text = u->Name;
			txtlastP->Text = u->LastName;
			txtDNIP->Text = Convert::ToString(u->Dni);
			txtCorreoP->Text = u->Email;
			txtNUMP->Text = u->Phone_number;
			txtConP->Text = u->Password;
		}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
		private: System::Void MyProfile_Load(System::Object^ sender, System::EventArgs^ e) {
			
			User^ currentUser = Session::CurrentUser;
			if (currentUser != nullptr) {
				FillTextBoxes(currentUser);
			}
		}
	private: System::Void btn_modificar_perfil_Click(System::Object^ sender, System::EventArgs^ e) {

		User^ currentUser = Session::CurrentUser;

		currentUser->Name =txtNameP->Text;
		currentUser->LastName = txtlastP->Text;
		currentUser->Dni = Int32::Parse(txtDNIP->Text);
		currentUser->Email = txtCorreoP->Text;
		currentUser->Phone_number = txtNUMP->Text;
		currentUser->Password = txtConP->Text;



		Controller::UpdateCustomer(currentUser);
		FillTextBoxes(currentUser);

	}
};
}
