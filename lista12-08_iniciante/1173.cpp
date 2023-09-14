#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, vet[10];

  cin >> a;
  vet[0] = a;

  for(int i=1; i<10; i++){
    vet[i] = vet[i-1] * 2;
  }

  for(int i=0; i<10; i++){
    printf("N[%d] = %d\n", i, vet[i]);
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test