#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double a,b,c;
  double AreaTriangulo, AreaCirculo, AreaTrapezio, AreaQuadrado, AreaRetangulo;
  double pi = 3.14159;

  cin >> a >> b >> c;

  AreaTriangulo =  (a * c) / 2;
  AreaCirculo = (c * c) * pi;
  AreaTrapezio = ((a + b) * c) / 2;
  AreaQuadrado = b * b;
  AreaRetangulo = a * b;

  cout << "TRIANGULO: " << fixed << setprecision(3) << AreaTriangulo << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << AreaCirculo << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << AreaTrapezio << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << AreaQuadrado << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << AreaRetangulo << endl;

  return 0;
}