#ifndef LISTA_HPP
#define LISTA_HPP

#include <list>
#include <iomanip>
#include "Neurona.hpp"

class Lista
 {
  private:
  list<Neurona> lista;
  public:
  Lista(){}

  void agregarInicio(const Neurona& neurona)
   {
    lista.push_front(neurona);
    cout << "Neurona agregada al inicio con exito a la lista" << endl; 
   }

  void agegarFinal(const Neurona& neurona) 
   {
    lista.push_back(neurona);
    cout << "Neurona agregada al final con exito a la lista" << endl; 
   } 

   void mostrarLista() 
    {
     cout << "---INFORMACION DE LA LISTA---" << endl << endl;
     cout << "Se han agregado " << lista.size() << " Neuronas a la lista" << endl;
     cout << setw(3)  << "ID"
          << setw(15) << "POSICIONX"
          << setw(20) << "POSICIONY"
          << setw(20) << "RED"
          << setw(20) << "GREEN"
          << setw(20) << "BLUE"
          << setw(20) << "VOLTAJE"
          << endl;
             
     for(auto it = lista.begin(); it != lista.end(); it++)
      {
       cout << setw(3) << (*it).getId()
            << setw(6) << (*it).getPosicionX()
            << setw(20) << (*it).getPosicionY()
            << setw(25) << (*it).getRed()
            << setw(25) << (*it).getGreen()
            << setw(25) << (*it).getBlue()
            << setw(25) << (*it).getVoltaje()
            << endl;
      }   
    }
 };
 
 
#endif