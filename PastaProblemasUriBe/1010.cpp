#include <iostream>
#include <iomanip>

using namespace std;

int Main(){
  int CodPecaA, CodPecaB, QuantiA, QuantiB;
  double ValorA, ValorB, Total;
  
  cin >> CodPecaA >> QuantiA >> ValorA;
  cin >> CodPecaB >> QuantiB >> ValorB;

  Total = (QuantiA * ValorA) + (QuantiB * ValorB);

  cout << "VALOR A PAGAR: R$ "<< fixed << setprecision (2) << Total << endl;

  return 0;

}