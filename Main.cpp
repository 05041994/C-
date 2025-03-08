#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double X1, Y1, X2, Y2, calc;

    cin >> X1 >> Y1;
    cin >> X2 >> Y2;

    calc = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    cout << fixed << setprecision(4);
    cout << calc;

    return 0;
}