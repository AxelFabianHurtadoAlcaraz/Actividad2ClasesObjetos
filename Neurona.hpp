#ifndef NEURONA_HPP
#define NEURONA_HPP

#include <iostream>

using namespace std;

class Neurona
 {
  private:
  int id,posicionX,posicionY,red,green,blue;
  float voltaje;
   
  public:
  Neurona(){}
  Neurona(int id,int posicionX,int posicionY,int red,int green,int blue,float voltaje )
   {
    this->id = id;
    this->posicionX = posicionX;
    this->posicionY = posicionY;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->voltaje = voltaje;
   }
  
  void setId(int valor)
   {id = valor;}

  int getId()
   {return id;}

  void setPosicionX(int valor)
   {posicionX = valor;}

  int getPosicionX()
   {return posicionX;} 

  void setPosicionY(int valor)
   {posicionY = valor;}

  int getPosicionY()
   {return posicionY;}

   void setRed(int valor)
    {red = valor;} 

   int getRed()
    {return red;}

   void setGreen(int valor)
    {green = valor;}
   
   int getGreen()
    {return green;}

   void setBlue(int valor)
    {blue = valor;}

   int getBlue()
    {return blue;}

   void setVoltaje(float valor)  
    {voltaje = valor;}

   float getVoltaje()
    {return voltaje;}

  friend istream& operator >> (istream& is,Neurona& neuron)
   {
    cout << "Ingrese el id de la neurona:";
    is >> neuron.id;

   cout << "Ingresa la posicion en x de la neurona:";
   is >> neuron.posicionX;

   cout << "Ingresa la posicion en y de la neurona:";
   is >> neuron.posicionY;

   cout << "Ingresa red de la neurona:";
   is >> neuron.red;

   cout << "Ingresa green de la neurona:";
   is >> neuron.green;

   cout << "Ingresa blue de la neurona:";
   is >> neuron.blue;

   cout << "Ingresa el voltaje de la neurona:";
   is >> neuron.voltaje;

   return is;   
   }
  
  friend ostream& operator << (ostream& os,Neurona& neuron)
   {
    os << "ID de la neurona:" << neuron.getId() << endl;

    os << "POSICION X de la neurona:" << neuron.getPosicionX() << endl;

    os << "POSICION Y de la neurona:" << neuron.getPosicionY() << endl;

    os << "RED de la neurona:" << neuron.getRed() << endl;

    os << "GREEN de la neurona:" << neuron.getGreen() << endl;

    os << "BLUE de la funcion:" << neuron.getBlue() << endl;    

    os << "VOLTAJE de la neurona" << neuron.getVoltaje() << endl;

    return os;  
   }
 };
#endif