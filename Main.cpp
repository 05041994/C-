#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double combustivel, consumo;
    int km;

    cin >> km;
    cin >> combustivel fixed >> setprecision (2);

    consumo = km / combustivel;

    cout << combustivel << endl;
    cout << fixed << setprecision (3) << consumo  << " km/l" << endl;

    return 0;
}