#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  string a, b;
  int n;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> a >> b;
    if(
      (a == "tesoura" && b == "papel") ||
      (a == "papel" && b == "pedra") ||
      (a == "pedra" && b == "lagarto") ||
      (a == "lagarto" && b == "Spock") ||
      (a == "Spock" && b == "tesoura") ||
      (a == "tesoura" && b == "lagarto") ||
      (a == "lagarto" && b == "papel") ||
      (a == "papel" && b == "Spock") ||
      (a == "Spock" && b == "pedra") ||
      (a == "pedra" && b == "tesoura")
      ) printf("Caso #%d: Bazinga!\n", i+1);
      else if(a == b) printf("Caso #%d: De novo!\n", i+1);
      else printf("Caso #%d: Raj trapaceou!\n", i+1);
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test