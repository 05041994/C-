#include <iostream>

using namespace std;

int main(){
  
  int a,b,c;
  int maior;

  cin >> a >> b >> c;

  maior = a;
  if (( b > maior) || (c > maior)){
    if(c > b){
      maior = c;
    }
    else{
      maior = b;
    }
  }

  cout << maior << " eh o maior" << endl;

  return 0;
}
