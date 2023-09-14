#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, mat, matw;

  double nota, maior = 0;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> mat >> nota;
    if(nota > maior){
      maior = nota;
      matw = mat;
    }
  }
  if(maior >= 8) cout << matw << endl;
  else cout << "Minimum note not reached\n";

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test