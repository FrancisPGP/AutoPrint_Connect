#pragma once
#include "PrintForm.h"
#include "UserTableForm.h"
#include "WalletForm.h"

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de PrintMainForm
	/// </summary>
	public ref class PrintMainForm : public System::Windows::Forms::Form
	{
	public:

		Thread^ myThread;

		PrintMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->IsMdiContainer = true;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PrintMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ miCuentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarDatosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ impresiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ billeteraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ordenesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->miCuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->impresiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->billeteraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->miCuentaToolStripMenuItem,
					this->impresiónToolStripMenuItem, this->billeteraToolStripMenuItem, this->ordenesToolStripMenuItem, this->usuariosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(780, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// miCuentaToolStripMenuItem
			// 
			this->miCuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->actualizarDatosToolStripMenuItem,
					this->cerrarSesiónToolStripMenuItem
			});
			this->miCuentaToolStripMenuItem->Name = L"miCuentaToolStripMenuItem";
			this->miCuentaToolStripMenuItem->Size = System::Drawing::Size(88, 26);
			this->miCuentaToolStripMenuItem->Text = L"Mi cuenta";
			// 
			// actualizarDatosToolStripMenuItem
			// 
			this->actualizarDatosToolStripMenuItem->Name = L"actualizarDatosToolStripMenuItem";
			this->actualizarDatosToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->actualizarDatosToolStripMenuItem->Text = L"Actualizar datos";
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::cerrarSesiónToolStripMenuItem_Click);
			// 
			// impresiónToolStripMenuItem
			// 
			this->impresiónToolStripMenuItem->Checked = true;
			this->impresiónToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->impresiónToolStripMenuItem->Name = L"impresiónToolStripMenuItem";
			this->impresiónToolStripMenuItem->Size = System::Drawing::Size(107, 26);
			this->impresiónToolStripMenuItem->Text = L"Documentos";
			this->impresiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::impresiónToolStripMenuItem_Click);
			// 
			// billeteraToolStripMenuItem
			// 
			this->billeteraToolStripMenuItem->Name = L"billeteraToolStripMenuItem";
			this->billeteraToolStripMenuItem->Size = System::Drawing::Size(78, 26);
			this->billeteraToolStripMenuItem->Text = L"Billetera";
			this->billeteraToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::billeteraToolStripMenuItem_Click);
			// 
			// ordenesToolStripMenuItem
			// 
			this->ordenesToolStripMenuItem->Name = L"ordenesToolStripMenuItem";
			this->ordenesToolStripMenuItem->Size = System::Drawing::Size(78, 26);
			this->ordenesToolStripMenuItem->Text = L"Ordenes";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(79, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::usuariosToolStripMenuItem_Click);
			// 
			// PrintMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 506);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PrintMainForm";
			this->Text = L"Bienvenido a AutoPrint Connect";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void impresiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintForm^ printForm = gcnew PrintForm();
		printForm->MdiParent = this;
		printForm->Show();
	}
	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		UserTableForm^ usertableForm = gcnew UserTableForm();
		usertableForm->MdiParent = this;
		usertableForm->Show();
		
		

	}
	private: System::Void billeteraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		WalletForm^ walletForm = gcnew WalletForm();
		walletForm->MdiParent = this;
		walletForm->Show();
	}
};
}
