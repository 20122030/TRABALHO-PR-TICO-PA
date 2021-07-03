#include <iostream>
#include "circuitoseletricos.h"
using namespace std;

int main ()
{
  tCircuito circuitoseletricos;

  cout << "digite o valor de R1" << endl;
  cin >> circuitoseletricos.valorR1;

  cout << "digite o valor de R2" << endl;
  cin >> circuitoseletricos.valorR2;

  cout << "digite o valor da fonte de tensão" << endl;
  cin >> circuitoseletricos.valorfonteV1;

  calcserie(circuitoseletricos.valorR1,circuitoseletricos.valorR2);
  
  calparalelo(circuitoseletricos.valorR1,circuitoseletricos.valorR2);

  correntetotal(circuitoseletricos.valorR1,circuitoseletricos.valorR2,circuitoseletricos.valorfonteV1);

  calcpotencia(circuitoseletricos.valorR1,circuitoseletricos.valorR2,circuitoseletricos.valorfonteV1);