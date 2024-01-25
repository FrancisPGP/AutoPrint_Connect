#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UpFile
	/// </summary>
	public ref class UpFile : public System::Windows::Forms::Form
	{
	public:
		UpFile(void)
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
		~UpFile()
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
	private: System::Windows::Forms::ToolStripMenuItem^ verHistorialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ impresiónToolStripMenuItem;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->miCuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->impresiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verHistorialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->miCuentaToolStripMenuItem,
					this->impresiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(904, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// miCuentaToolStripMenuItem
			// 
			this->miCuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actualizarDatosToolStripMenuItem,
					this->verHistorialToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->miCuentaToolStripMenuItem->Name = L"miCuentaToolStripMenuItem";
			this->miCuentaToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->miCuentaToolStripMenuItem->Text = L"Mi cuenta";
			// 
			// impresiónToolStripMenuItem
			// 
			this->impresiónToolStripMenuItem->Name = L"impresiónToolStripMenuItem";
			this->impresiónToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->impresiónToolStripMenuItem->Text = L"Impresión";
			// 
			// actualizarDatosToolStripMenuItem
			// 
			this->actualizarDatosToolStripMenuItem->Name = L"actualizarDatosToolStripMenuItem";
			this->actualizarDatosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->actualizarDatosToolStripMenuItem->Text = L"Actualizar datos";
			// 
			// verHistorialToolStripMenuItem
			// 
			this->verHistorialToolStripMenuItem->Name = L"verHistorialToolStripMenuItem";
			this->verHistorialToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->verHistorialToolStripMenuItem->Text = L"Ver historial";
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &UpFile::cerrarSesiónToolStripMenuItem_Click);
			// 
			// UpFile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 513);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UpFile";
			this->Text = L"UpFile";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
