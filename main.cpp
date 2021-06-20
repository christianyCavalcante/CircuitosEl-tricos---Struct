#include <iostream>
#include "CircuitoEletrico.cpp"

using namespace std;

int main() {

  tCircuito exemplo1;

  exemplo1.R1 = 100;
  exemplo1.R2 = 300;
  exemplo1.V1 = 12;

  exemplo1.imprime();
  cout << "Resistências em série: "<<exemplo1.calculaResistenciaEmSerie() << " ohms." << endl;


  tCircuito exemplo2;

  exemplo2.R1 = 39;
  exemplo2.R2 = 56;
  exemplo2.V1 = 12;  

  exemplo2.imprime();
  cout << "Resistências em paralelo: "<<exemplo2.calculaResistenciaEmParalelo() << " ohms." << endl;


  tCircuito exemplo3;

  exemplo3.R1 = 270;
  exemplo3.R2 = 330;
  exemplo3.V1 = 12;

  exemplo3.imprime(); 
  cout << "Corrente total: "<<exemplo2.calculaResistenciaEmParalelo() << " A." << endl;

  cout << "Potência total: "<<exemplo2.calculaPotencia() << " W." << endl;

 

  

}