#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double combustivel, consumo;
    int km;

    cin >> km;
    cin >> combustivel;

    consumo = km / combustivel;

    cout << fixed << setprecision (3) << consumo  << " km/l" << endl;

    return 0;
}