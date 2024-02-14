#include "pch.h"
//#include "Inicio.h"
#include "PrintMainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace AutoPrintModel;
using namespace AutoPrintController;
using namespace System::Collections::Generic;

[STAThreadAttribute]

int Main(array<System::String^>^ args)
{
    Application::EnableVisualStyles(); //Application nos lo da "System::Windows::Forms" y ahora habilitaremos los estilos visuales
    Application::SetCompatibleTextRenderingDefault(false); //Ponemos false para que el renderizado sea automático
    array<Byte>^ enblanco = enblanco;
    array<Byte>^ enblanco2 = enblanco2;
    array<Byte>^ enblanco3 = enblanco3;


   /* Boss^ u1 = gcnew Boss("Francis", "Elcapi", "999888777", 98765432, "Masculino", "123", "elcapi@gmail.com", "05/05/02", enblanco, 20);
    Employee^ u2 = gcnew Employee("Ricardo", "Amaya", "999888777", 12345678, "Masculino", "123", "a20195821@pucp.edu.pe", "03/02/02", enblanco2, 30);
    Customer^ u3 = gcnew Customer("Juancito", "Alimaña", "999888777", 45612378, "Masculino", "123", "juancito123@gmail.com", "07/07/07", enblanco3, 50);
    Controller::AddBoss(u1);
    Controller::AddEmployee(u2);
    Controller::AddCostumer(u3);*/

    //User^ U=Controller::Login(12345678,"123");

    //AutoPrintView::Inicio form;//Luego de haber creado la instancia..
    AutoPrintView::PrintMainForm form;
    Application::Run(% form); //Run hará que las interfaces funcionen tal que cuando recién se cierre la ventana principal pasará a la línea 14 (% form es para que saque la dirección)

    return 0;
}