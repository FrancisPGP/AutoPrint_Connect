#include "pch.h"
#include "Inicio.h"


using namespace System;
using namespace System::Windows::Forms;


int Main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles(); //Application nos lo da "System::Windows::Forms" y ahora habilitaremos los estilos visuales
    Application::SetCompatibleTextRenderingDefault(false); //Ponemos false para que el renderizado sea automático

    AutoPrintView::Inicio form;//Luego de haber creado la instancia..
    Application::Run(% form); //Run hará que las interfaces funcionen tal que cuando recién se cierre la ventana principal pasará a la línea 14 (% form es para que saque la dirección)

    return 0;
}
