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
	/// Resumen de UserTableForm
	/// </summary>
	public ref class UserTableForm : public System::Windows::Forms::Form
	{
	public:
		UserTableForm(void)
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
		~UserTableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ PB_imageREGIS;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ TB_correo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TB_userID;


	private: System::Windows::Forms::PictureBox^ PB_imageUSER;
	private: System::Windows::Forms::DataGridView^ dgvUserTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_correo;
	private: System::Windows::Forms::Button^ BT_deleteUSER;
	private: System::Windows::Forms::Button^ BT_modUSER;
	private: System::Windows::Forms::TextBox^ TB_dni;
	private: System::Windows::Forms::TextBox^ TB_lastname;
	private: System::Windows::Forms::TextBox^ TB_name;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ TB_correo_reg;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TB_userID_reg;
	private: System::Windows::Forms::Button^ BT_registrar_reg;




	private: System::Windows::Forms::TextBox^ TB_dni_reg;

	private: System::Windows::Forms::TextBox^ TB_lastname_reg;


	private: System::Windows::Forms::TextBox^ TB_name_reg;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TB_contraseña_reg;

	private: System::Windows::Forms::Label^ label11;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserTableForm::typeid));
			this->PB_imageREGIS = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->TB_correo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TB_userID = (gcnew System::Windows::Forms::TextBox());
			this->PB_imageUSER = (gcnew System::Windows::Forms::PictureBox());
			this->dgvUserTable = (gcnew System::Windows::Forms::DataGridView());
			this->UT_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BT_deleteUSER = (gcnew System::Windows::Forms::Button());
			this->BT_modUSER = (gcnew System::Windows::Forms::Button());
			this->TB_dni = (gcnew System::Windows::Forms::TextBox());
			this->TB_lastname = (gcnew System::Windows::Forms::TextBox());
			this->TB_name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TB_contraseña_reg = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TB_correo_reg = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TB_userID_reg = (gcnew System::Windows::Forms::TextBox());
			this->BT_registrar_reg = (gcnew System::Windows::Forms::Button());
			this->TB_dni_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_lastname_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_name_reg = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->PB_imageREGIS->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// PB_imageREGIS
			// 
			this->PB_imageREGIS->Controls->Add(this->tabPage1);
			this->PB_imageREGIS->Controls->Add(this->tabPage2);
			this->PB_imageREGIS->Location = System::Drawing::Point(1, 1);
			this->PB_imageREGIS->Margin = System::Windows::Forms::Padding(2);
			this->PB_imageREGIS->Name = L"PB_imageREGIS";
			this->PB_imageREGIS->SelectedIndex = 0;
			this->PB_imageREGIS->Size = System::Drawing::Size(590, 412);
			this->PB_imageREGIS->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->TB_correo);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->TB_userID);
			this->tabPage1->Controls->Add(this->PB_imageUSER);
			this->tabPage1->Controls->Add(this->dgvUserTable);
			this->tabPage1->Controls->Add(this->BT_deleteUSER);
			this->tabPage1->Controls->Add(this->BT_modUSER);
			this->tabPage1->Controls->Add(this->TB_dni);
			this->tabPage1->Controls->Add(this->TB_lastname);
			this->tabPage1->Controls->Add(this->TB_name);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(582, 386);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Usuarios";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// TB_correo
			// 
			this->TB_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo->Location = System::Drawing::Point(140, 112);
			this->TB_correo->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo->Name = L"TB_correo";
			this->TB_correo->Size = System::Drawing::Size(185, 21);
			this->TB_correo->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(46, 115);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 15);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Correo";
			// 
			// TB_userID
			// 
			this->TB_userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_userID->Location = System::Drawing::Point(140, 15);
			this->TB_userID->Margin = System::Windows::Forms::Padding(2);
			this->TB_userID->Name = L"TB_userID";
			this->TB_userID->Size = System::Drawing::Size(52, 21);
			this->TB_userID->TabIndex = 43;
			// 
			// PB_imageUSER
			// 
			this->PB_imageUSER->BackColor = System::Drawing::SystemColors::Control;
			this->PB_imageUSER->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PB_imageUSER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_imageUSER.Image")));
			this->PB_imageUSER->Location = System::Drawing::Point(371, 15);
			this->PB_imageUSER->Margin = System::Windows::Forms::Padding(2);
			this->PB_imageUSER->Name = L"PB_imageUSER";
			this->PB_imageUSER->Size = System::Drawing::Size(150, 163);
			this->PB_imageUSER->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_imageUSER->TabIndex = 42;
			this->PB_imageUSER->TabStop = false;
			// 
			// dgvUserTable
			// 
			this->dgvUserTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->UT_id, this->UT_nombre,
					this->UT_apellido, this->UT_dni, this->UT_correo
			});
			this->dgvUserTable->GridColor = System::Drawing::Color::Black;
			this->dgvUserTable->Location = System::Drawing::Point(14, 197);
			this->dgvUserTable->Margin = System::Windows::Forms::Padding(2);
			this->dgvUserTable->Name = L"dgvUserTable";
			this->dgvUserTable->RowHeadersWidth = 82;
			this->dgvUserTable->RowTemplate->Height = 33;
			this->dgvUserTable->Size = System::Drawing::Size(553, 172);
			this->dgvUserTable->TabIndex = 41;
			this->dgvUserTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserTableForm::dgvUserTable_CellClick);
			// 
			// UT_id
			// 
			this->UT_id->HeaderText = L"Id";
			this->UT_id->MinimumWidth = 10;
			this->UT_id->Name = L"UT_id";
			this->UT_id->Width = 50;
			// 
			// UT_nombre
			// 
			this->UT_nombre->HeaderText = L"Nombre";
			this->UT_nombre->MinimumWidth = 10;
			this->UT_nombre->Name = L"UT_nombre";
			this->UT_nombre->Width = 200;
			// 
			// UT_apellido
			// 
			this->UT_apellido->HeaderText = L"Apellidos";
			this->UT_apellido->MinimumWidth = 10;
			this->UT_apellido->Name = L"UT_apellido";
			this->UT_apellido->Width = 200;
			// 
			// UT_dni
			// 
			this->UT_dni->HeaderText = L"DNI";
			this->UT_dni->MinimumWidth = 10;
			this->UT_dni->Name = L"UT_dni";
			this->UT_dni->Width = 90;
			// 
			// UT_correo
			// 
			this->UT_correo->HeaderText = L"Correo";
			this->UT_correo->MinimumWidth = 10;
			this->UT_correo->Name = L"UT_correo";
			this->UT_correo->Width = 300;
			// 
			// BT_deleteUSER
			// 
			this->BT_deleteUSER->Enabled = false;
			this->BT_deleteUSER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_deleteUSER->Location = System::Drawing::Point(176, 155);
			this->BT_deleteUSER->Margin = System::Windows::Forms::Padding(2);
			this->BT_deleteUSER->Name = L"BT_deleteUSER";
			this->BT_deleteUSER->Size = System::Drawing::Size(83, 22);
			this->BT_deleteUSER->TabIndex = 40;
			this->BT_deleteUSER->Text = L"Eliminar";
			this->BT_deleteUSER->UseVisualStyleBackColor = true;
			this->BT_deleteUSER->Click += gcnew System::EventHandler(this, &UserTableForm::BT_deleteUSER_Click_1);
			// 
			// BT_modUSER
			// 
			this->BT_modUSER->Enabled = false;
			this->BT_modUSER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_modUSER->Location = System::Drawing::Point(42, 155);
			this->BT_modUSER->Margin = System::Windows::Forms::Padding(2);
			this->BT_modUSER->Name = L"BT_modUSER";
			this->BT_modUSER->Size = System::Drawing::Size(91, 22);
			this->BT_modUSER->TabIndex = 39;
			this->BT_modUSER->Text = L"Modificar";
			this->BT_modUSER->UseVisualStyleBackColor = true;
			this->BT_modUSER->Click += gcnew System::EventHandler(this, &UserTableForm::BT_modUSER_Click_1);
			// 
			// TB_dni
			// 
			this->TB_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni->Location = System::Drawing::Point(140, 88);
			this->TB_dni->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni->Name = L"TB_dni";
			this->TB_dni->Size = System::Drawing::Size(52, 21);
			this->TB_dni->TabIndex = 38;
			// 
			// TB_lastname
			// 
			this->TB_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname->Location = System::Drawing::Point(140, 63);
			this->TB_lastname->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname->Name = L"TB_lastname";
			this->TB_lastname->Size = System::Drawing::Size(153, 21);
			this->TB_lastname->TabIndex = 37;
			// 
			// TB_name
			// 
			this->TB_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name->Location = System::Drawing::Point(140, 39);
			this->TB_name->Margin = System::Windows::Forms::Padding(2);
			this->TB_name->Name = L"TB_name";
			this->TB_name->Size = System::Drawing::Size(153, 21);
			this->TB_name->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(46, 90);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 15);
			this->label4->TabIndex = 35;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 66);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 15);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Apellidos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 15);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Id";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->TB_contraseña_reg);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->TB_correo_reg);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->TB_userID_reg);
			this->tabPage2->Controls->Add(this->BT_registrar_reg);
			this->tabPage2->Controls->Add(this->TB_dni_reg);
			this->tabPage2->Controls->Add(this->TB_lastname_reg);
			this->tabPage2->Controls->Add(this->TB_name_reg);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(582, 386);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registrar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// TB_contraseña_reg
			// 
			this->TB_contraseña_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_contraseña_reg->Location = System::Drawing::Point(242, 193);
			this->TB_contraseña_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_contraseña_reg->Name = L"TB_contraseña_reg";
			this->TB_contraseña_reg->Size = System::Drawing::Size(153, 23);
			this->TB_contraseña_reg->TabIndex = 60;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(148, 195);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 17);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Contraseña";
			// 
			// TB_correo_reg
			// 
			this->TB_correo_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo_reg->Location = System::Drawing::Point(242, 160);
			this->TB_correo_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo_reg->Name = L"TB_correo_reg";
			this->TB_correo_reg->Size = System::Drawing::Size(185, 23);
			this->TB_correo_reg->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(148, 162);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 17);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Correo";
			// 
			// TB_userID_reg
			// 
			this->TB_userID_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_userID_reg->Location = System::Drawing::Point(242, 30);
			this->TB_userID_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_userID_reg->Name = L"TB_userID_reg";
			this->TB_userID_reg->Size = System::Drawing::Size(52, 23);
			this->TB_userID_reg->TabIndex = 56;
			// 
			// BT_registrar_reg
			// 
			this->BT_registrar_reg->Enabled = false;
			this->BT_registrar_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BT_registrar_reg->Location = System::Drawing::Point(223, 256);
			this->BT_registrar_reg->Margin = System::Windows::Forms::Padding(2);
			this->BT_registrar_reg->Name = L"BT_registrar_reg";
			this->BT_registrar_reg->Size = System::Drawing::Size(91, 28);
			this->BT_registrar_reg->TabIndex = 53;
			this->BT_registrar_reg->Text = L"Registrar";
			this->BT_registrar_reg->UseVisualStyleBackColor = true;
			this->BT_registrar_reg->Click += gcnew System::EventHandler(this, &UserTableForm::BT_registrar_reg_Click);
			// 
			// TB_dni_reg
			// 
			this->TB_dni_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni_reg->Location = System::Drawing::Point(242, 128);
			this->TB_dni_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni_reg->Name = L"TB_dni_reg";
			this->TB_dni_reg->Size = System::Drawing::Size(52, 23);
			this->TB_dni_reg->TabIndex = 52;
			// 
			// TB_lastname_reg
			// 
			this->TB_lastname_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname_reg->Location = System::Drawing::Point(242, 95);
			this->TB_lastname_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname_reg->Name = L"TB_lastname_reg";
			this->TB_lastname_reg->Size = System::Drawing::Size(153, 23);
			this->TB_lastname_reg->TabIndex = 51;
			// 
			// TB_name_reg
			// 
			this->TB_name_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name_reg->Location = System::Drawing::Point(242, 63);
			this->TB_name_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_name_reg->Name = L"TB_name_reg";
			this->TB_name_reg->Size = System::Drawing::Size(153, 23);
			this->TB_name_reg->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(148, 130);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 17);
			this->label7->TabIndex = 49;
			this->label7->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(148, 98);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 17);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Apellidos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(148, 65);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Nombre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(148, 32);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 17);
			this->label10->TabIndex = 46;
			this->label10->Text = L"Id";
			// 
			// UserTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 414);
			this->Controls->Add(this->PB_imageREGIS);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserTableForm";
			this->Text = L"Usuarios";
			this->PB_imageREGIS->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void BT_registrar_reg_Click(System::Object^ sender, System::EventArgs^ e) {

		User^ newUser = gcnew User(); //instanciamos al nuevo usuario
		newUser->User_Id = Int32::Parse(TB_userID_reg->Text);
		newUser->Name = TB_name_reg->Text;
		newUser->LastName = TB_lastname_reg->Text;
		newUser->Dni = TB_dni_reg->Text;
		newUser->Email = TB_correo_reg->Text;
		newUser->Password = TB_contraseña_reg->Text;

		//Ya cargados los datos, lo pasamos como parámetro al método AddCustomer
		Controller::AddCustomer(newUser); //Añadimos al usuario

		RefreshGrid();

	}

		   void RefreshGrid() {
			   List<User^>^ userList = Controller::QueryAllCustomers(); ///

			   dgvUserTable->Rows->Clear();
			   for (int i = 0; i < userList->Count; i++) {
				   User^ user = userList[i];
				   dgvUserTable->Rows->Add(gcnew array<String^> {"" + user->User_Id + "," + user->Name + ","
					   + user->LastName + "," + user->Dni + "," + user->Email });
			   
			   }

		   }

	 private: System::Void BT_deleteUSER_Click_1(System::Object^ sender, System::EventArgs^ e) {
	 
		 int id = Int32::Parse(TB_userID_reg->Text);
		 Controller::DeleteCustomer(id);
		 RefreshGrid();
	
	 
	 }
     private: System::Void BT_modUSER_Click_1(System::Object^ sender, System::EventArgs^ e) {
     
	 
		 User^ u = gcnew User();
		 u->User_Id = Int32::Parse(TB_userID_reg->Text);
		 u->Name = TB_name_reg->Text;
		 u->LastName = TB_lastname_reg->Text;
		 u->Dni = TB_dni_reg->Text;
		 u->Email = TB_correo_reg->Text;


		 Controller::UpdateCustomer(u);
		 RefreshGrid();
	 
	 
	 
	 }
    private: System::Void dgvUserTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int UserId = Int32::Parse(dgvUserTable->Rows[dgvUserTable->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		User^ u = Controller::QueryCustomerById(UserId);
		TB_userID_reg->Text = "" + u->User_Id;
		TB_name_reg->Text = u->Name;
		TB_lastname_reg->Text = u->LastName;
		TB_dni_reg->Text =  u->Dni;
		TB_correo_reg->Text = u->Email;
	
	
	}



};
}
