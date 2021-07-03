#ifndef circuitoseletricos_H
#define circuitoseletricos_H
#include <cmath>
using namespace std;


struct tCircuito
{
  int valorR1;
  int valorR2;
  int valorfonteV1;
};

void calcserie(float R1, float R2)
{
float Resistserie = 0.0;
Resistserie = R1+R2;

cout << "O valor da Resistência em serie =" << Resistserie << endl;
}

void calparalelo (float R1, float R2)
{
  float Resistparalelo = 0.0;
  Resistparalelo = (R1*R2)/(R1+R2);
  
  cout << "O valor da Resistência em serie =" << Resistparalelo << endl;
}

void correntetotal (float R1, float R2, float fonteV1)
{
  float Itotal = 0.0;
  Itotal = (fonteV1)/(R1=R2);

  cout << "A corrente total do circuito =" << Itotal << endl;
}


void calcpotencia (float R1, float R2, float fonteV1)
{
  float potfonte = 0.0;
  float Requivalente = 0.0;
  Requivalente = R1+R2;
  potfonte = (pow(fonteV1,2))/(Requivalente);

  cout << " A Potencia da fonte = " << potfonte << endl;
  
}
#endif

