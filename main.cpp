#include "Lista.hpp"

int main()
 {
  Lista cerebro;
  string opcion;

 while(true)
  {
   cout << "*****MENU*****" << endl;
   cout << "1.-AGREGAR ELEMENTO AL INICIO DE  LA LISTA" << endl;
   cout << "2.-AGREGAR ELEMENTO AL FINAL DE LA LISTA" << endl;
   cout << "3.-MOSTRAR ELEMENTOS" << endl;
   cout << "4.-SALIR" << ":" << endl;
  
   cin >> opcion;

   if(opcion == "1") 
    {
     Neurona neurona;
     cin >> neurona;
     cerebro.agregarInicio(neurona);
    }

   else if(opcion == "2")
    {
     Neurona Neurona;
     cin >> Neurona;
     cerebro.agegarFinal(Neurona);
    }

   else if(opcion == "3")
    {cerebro.mostrarLista();}
    
   else if(opcion == "4")
    {break;} 
  }
 }