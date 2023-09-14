#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, vet[10];

  for(int i=0; i<10; i++){
    cin >> a;
    if(a <= 0) a = 1;
    vet[i] = a;
  }

  for(int i=0; i<10; i++){
    printf("X[%d] = %d\n",i, vet[i]);
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test