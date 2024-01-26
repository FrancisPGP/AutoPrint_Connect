#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->TB_contraseña_reg = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
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
			this->PB_imageREGIS->Name = L"PB_imageREGIS";
			this->PB_imageREGIS->SelectedIndex = 0;
			this->PB_imageREGIS->Size = System::Drawing::Size(786, 507);
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
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(778, 478);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Usuarios";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// TB_correo
			// 
			this->TB_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo->Location = System::Drawing::Point(186, 138);
			this->TB_correo->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo->Name = L"TB_correo";
			this->TB_correo->Size = System::Drawing::Size(245, 24);
			this->TB_correo->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(62, 141);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 18);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Correo";
			// 
			// TB_userID
			// 
			this->TB_userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_userID->Location = System::Drawing::Point(186, 18);
			this->TB_userID->Margin = System::Windows::Forms::Padding(2);
			this->TB_userID->Name = L"TB_userID";
			this->TB_userID->Size = System::Drawing::Size(68, 24);
			this->TB_userID->TabIndex = 43;
			// 
			// PB_imageUSER
			// 
			this->PB_imageUSER->BackColor = System::Drawing::SystemColors::Control;
			this->PB_imageUSER->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PB_imageUSER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_imageUSER.Image")));
			this->PB_imageUSER->Location = System::Drawing::Point(495, 18);
			this->PB_imageUSER->Margin = System::Windows::Forms::Padding(2);
			this->PB_imageUSER->Name = L"PB_imageUSER";
			this->PB_imageUSER->Size = System::Drawing::Size(200, 200);
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
			this->dgvUserTable->Location = System::Drawing::Point(18, 242);
			this->dgvUserTable->Margin = System::Windows::Forms::Padding(2);
			this->dgvUserTable->Name = L"dgvUserTable";
			this->dgvUserTable->RowHeadersWidth = 82;
			this->dgvUserTable->RowTemplate->Height = 33;
			this->dgvUserTable->Size = System::Drawing::Size(737, 212);
			this->dgvUserTable->TabIndex = 41;
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
			this->BT_deleteUSER->Location = System::Drawing::Point(234, 191);
			this->BT_deleteUSER->Margin = System::Windows::Forms::Padding(2);
			this->BT_deleteUSER->Name = L"BT_deleteUSER";
			this->BT_deleteUSER->Size = System::Drawing::Size(111, 27);
			this->BT_deleteUSER->TabIndex = 40;
			this->BT_deleteUSER->Text = L"Eliminar";
			this->BT_deleteUSER->UseVisualStyleBackColor = true;
			// 
			// BT_modUSER
			// 
			this->BT_modUSER->Enabled = false;
			this->BT_modUSER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_modUSER->Location = System::Drawing::Point(56, 191);
			this->BT_modUSER->Margin = System::Windows::Forms::Padding(2);
			this->BT_modUSER->Name = L"BT_modUSER";
			this->BT_modUSER->Size = System::Drawing::Size(121, 27);
			this->BT_modUSER->TabIndex = 39;
			this->BT_modUSER->Text = L"Modificar";
			this->BT_modUSER->UseVisualStyleBackColor = true;
			// 
			// TB_dni
			// 
			this->TB_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni->Location = System::Drawing::Point(186, 108);
			this->TB_dni->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni->Name = L"TB_dni";
			this->TB_dni->Size = System::Drawing::Size(68, 24);
			this->TB_dni->TabIndex = 38;
			// 
			// TB_lastname
			// 
			this->TB_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname->Location = System::Drawing::Point(186, 78);
			this->TB_lastname->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname->Name = L"TB_lastname";
			this->TB_lastname->Size = System::Drawing::Size(203, 24);
			this->TB_lastname->TabIndex = 37;
			// 
			// TB_name
			// 
			this->TB_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name->Location = System::Drawing::Point(186, 48);
			this->TB_name->Margin = System::Windows::Forms::Padding(2);
			this->TB_name->Name = L"TB_name";
			this->TB_name->Size = System::Drawing::Size(203, 24);
			this->TB_name->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 111);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 18);
			this->label4->TabIndex = 35;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(62, 81);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 18);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Apellidos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 51);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 18);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 18);
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
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(778, 478);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registrar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// TB_correo_reg
			// 
			this->TB_correo_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo_reg->Location = System::Drawing::Point(322, 197);
			this->TB_correo_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo_reg->Name = L"TB_correo_reg";
			this->TB_correo_reg->Size = System::Drawing::Size(245, 27);
			this->TB_correo_reg->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(198, 200);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 20);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Correo";
			// 
			// TB_userID_reg
			// 
			this->TB_userID_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_userID_reg->Location = System::Drawing::Point(322, 37);
			this->TB_userID_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_userID_reg->Name = L"TB_userID_reg";
			this->TB_userID_reg->Size = System::Drawing::Size(68, 27);
			this->TB_userID_reg->TabIndex = 56;
			// 
			// BT_registrar_reg
			// 
			this->BT_registrar_reg->Enabled = false;
			this->BT_registrar_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BT_registrar_reg->Location = System::Drawing::Point(297, 315);
			this->BT_registrar_reg->Margin = System::Windows::Forms::Padding(2);
			this->BT_registrar_reg->Name = L"BT_registrar_reg";
			this->BT_registrar_reg->Size = System::Drawing::Size(121, 34);
			this->BT_registrar_reg->TabIndex = 53;
			this->BT_registrar_reg->Text = L"Registrar";
			this->BT_registrar_reg->UseVisualStyleBackColor = true;
			this->BT_registrar_reg->Click += gcnew System::EventHandler(this, &UserTableForm::BT_registrar_reg_Click);
			// 
			// TB_dni_reg
			// 
			this->TB_dni_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni_reg->Location = System::Drawing::Point(322, 157);
			this->TB_dni_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni_reg->Name = L"TB_dni_reg";
			this->TB_dni_reg->Size = System::Drawing::Size(68, 27);
			this->TB_dni_reg->TabIndex = 52;
			// 
			// TB_lastname_reg
			// 
			this->TB_lastname_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname_reg->Location = System::Drawing::Point(322, 117);
			this->TB_lastname_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname_reg->Name = L"TB_lastname_reg";
			this->TB_lastname_reg->Size = System::Drawing::Size(203, 27);
			this->TB_lastname_reg->TabIndex = 51;
			// 
			// TB_name_reg
			// 
			this->TB_name_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name_reg->Location = System::Drawing::Point(322, 77);
			this->TB_name_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_name_reg->Name = L"TB_name_reg";
			this->TB_name_reg->Size = System::Drawing::Size(203, 27);
			this->TB_name_reg->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(198, 160);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 20);
			this->label7->TabIndex = 49;
			this->label7->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(198, 120);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 20);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Apellidos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(198, 80);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 20);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Nombre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(198, 40);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 20);
			this->label10->TabIndex = 46;
			this->label10->Text = L"Id";
			// 
			// TB_contraseña_reg
			// 
			this->TB_contraseña_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_contraseña_reg->Location = System::Drawing::Point(322, 237);
			this->TB_contraseña_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_contraseña_reg->Name = L"TB_contraseña_reg";
			this->TB_contraseña_reg->Size = System::Drawing::Size(203, 27);
			this->TB_contraseña_reg->TabIndex = 60;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(198, 240);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 20);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Contraseña";
			// 
			// UserTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 509);
			this->Controls->Add(this->PB_imageREGIS);
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
	private: System::Void BT_modUSER_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BT_deleteUSER_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BT_registrar_reg_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
