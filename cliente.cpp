#include "cliente.h"
#include <iostream>
#include <windows.h>
   using namespace std;
cliente::cliente()
{
   //ctor
}

cliente::~cliente()
{
   //dtor
}

void cliente::nuevoCliente(void)
{
   
   try 
   {
        
         cout<<"Identificacion del cliente: ";
         cin>>idCliente;
        // throw 125;
         cout<<"Nombre completo del cliente: ";
         cin>>nomCliente>>apellido1>>apellido2;
         
   }  
   
   catch(...)
   {
         cout<<"Dato ingresado No valido";
         
   }
   
   
}

void cliente::nuevofiador()
{
   cout<<"Identificacion del fiador: ";
   cin>>idFiador;
   cout<<"Nombre completo del fiador : ";
   cin>>nomFiador>>apFiador1>>apFiador2;
   
}
