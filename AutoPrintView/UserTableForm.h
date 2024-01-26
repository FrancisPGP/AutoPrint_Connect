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

	private: System::Windows::Forms::PictureBox^ PB_imageUSER;
	private: System::Windows::Forms::DataGridView^ dgvUserTable;
	protected:






	private: System::Windows::Forms::Button^ BT_deleteUSER;

	private: System::Windows::Forms::Button^ BT_modUSER;

	private: System::Windows::Forms::TextBox^ TB_dni;


	private: System::Windows::Forms::TextBox^ TB_lastname;

	private: System::Windows::Forms::TextBox^ TB_name;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TB_userID;
	private: System::Windows::Forms::TextBox^ TB_correo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_correo;







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
			this->PB_imageUSER = (gcnew System::Windows::Forms::PictureBox());
			this->dgvUserTable = (gcnew System::Windows::Forms::DataGridView());
			this->BT_deleteUSER = (gcnew System::Windows::Forms::Button());
			this->BT_modUSER = (gcnew System::Windows::Forms::Button());
			this->TB_dni = (gcnew System::Windows::Forms::TextBox());
			this->TB_lastname = (gcnew System::Windows::Forms::TextBox());
			this->TB_name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TB_userID = (gcnew System::Windows::Forms::TextBox());
			this->TB_correo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->UT_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->BeginInit();
			this->SuspendLayout();
			// 
			// PB_imageUSER
			// 
			this->PB_imageUSER->BackColor = System::Drawing::SystemColors::Control;
			this->PB_imageUSER->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PB_imageUSER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_imageUSER.Image")));
			this->PB_imageUSER->Location = System::Drawing::Point(498, 22);
			this->PB_imageUSER->Margin = System::Windows::Forms::Padding(2);
			this->PB_imageUSER->Name = L"PB_imageUSER";
			this->PB_imageUSER->Size = System::Drawing::Size(200, 200);
			this->PB_imageUSER->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_imageUSER->TabIndex = 27;
			this->PB_imageUSER->TabStop = false;
			// 
			// dgvUserTable
			// 
			this->dgvUserTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->UT_id, this->UT_nombre,
					this->UT_apellido, this->UT_dni, this->UT_correo
			});
			this->dgvUserTable->Location = System::Drawing::Point(21, 246);
			this->dgvUserTable->Margin = System::Windows::Forms::Padding(2);
			this->dgvUserTable->Name = L"dgvUserTable";
			this->dgvUserTable->RowHeadersWidth = 82;
			this->dgvUserTable->RowTemplate->Height = 33;
			this->dgvUserTable->Size = System::Drawing::Size(737, 212);
			this->dgvUserTable->TabIndex = 26;
			// 
			// BT_deleteUSER
			// 
			this->BT_deleteUSER->Enabled = false;
			this->BT_deleteUSER->Location = System::Drawing::Point(237, 195);
			this->BT_deleteUSER->Margin = System::Windows::Forms::Padding(2);
			this->BT_deleteUSER->Name = L"BT_deleteUSER";
			this->BT_deleteUSER->Size = System::Drawing::Size(111, 27);
			this->BT_deleteUSER->TabIndex = 25;
			this->BT_deleteUSER->Text = L"Eliminar";
			this->BT_deleteUSER->UseVisualStyleBackColor = true;
			this->BT_deleteUSER->Click += gcnew System::EventHandler(this, &UserTableForm::BT_deleteUSER_Click);
			// 
			// BT_modUSER
			// 
			this->BT_modUSER->Enabled = false;
			this->BT_modUSER->Location = System::Drawing::Point(59, 195);
			this->BT_modUSER->Margin = System::Windows::Forms::Padding(2);
			this->BT_modUSER->Name = L"BT_modUSER";
			this->BT_modUSER->Size = System::Drawing::Size(121, 27);
			this->BT_modUSER->TabIndex = 24;
			this->BT_modUSER->Text = L"Modificar";
			this->BT_modUSER->UseVisualStyleBackColor = true;
			this->BT_modUSER->Click += gcnew System::EventHandler(this, &UserTableForm::BT_modUSER_Click);
			// 
			// TB_dni
			// 
			this->TB_dni->Location = System::Drawing::Point(189, 112);
			this->TB_dni->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni->Name = L"TB_dni";
			this->TB_dni->Size = System::Drawing::Size(68, 22);
			this->TB_dni->TabIndex = 22;
			// 
			// TB_lastname
			// 
			this->TB_lastname->Location = System::Drawing::Point(189, 82);
			this->TB_lastname->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname->Name = L"TB_lastname";
			this->TB_lastname->Size = System::Drawing::Size(203, 22);
			this->TB_lastname->TabIndex = 21;
			// 
			// TB_name
			// 
			this->TB_name->Location = System::Drawing::Point(189, 52);
			this->TB_name->Margin = System::Windows::Forms::Padding(2);
			this->TB_name->Name = L"TB_name";
			this->TB_name->Size = System::Drawing::Size(203, 22);
			this->TB_name->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 115);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 85);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Apellidos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 55);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 25);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Id";
			// 
			// TB_userID
			// 
			this->TB_userID->Location = System::Drawing::Point(189, 22);
			this->TB_userID->Margin = System::Windows::Forms::Padding(2);
			this->TB_userID->Name = L"TB_userID";
			this->TB_userID->Size = System::Drawing::Size(68, 22);
			this->TB_userID->TabIndex = 29;
			// 
			// TB_correo
			// 
			this->TB_correo->Location = System::Drawing::Point(189, 142);
			this->TB_correo->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo->Name = L"TB_correo";
			this->TB_correo->Size = System::Drawing::Size(245, 22);
			this->TB_correo->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 145);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Correo";
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
			// UserTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 479);
			this->Controls->Add(this->TB_correo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TB_userID);
			this->Controls->Add(this->PB_imageUSER);
			this->Controls->Add(this->dgvUserTable);
			this->Controls->Add(this->BT_deleteUSER);
			this->Controls->Add(this->BT_modUSER);
			this->Controls->Add(this->TB_dni);
			this->Controls->Add(this->TB_lastname);
			this->Controls->Add(this->TB_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserTableForm";
			this->Text = L"Usuarios";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BT_modUSER_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BT_deleteUSER_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
