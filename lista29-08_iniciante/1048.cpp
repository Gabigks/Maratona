#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  double a, b;

  cin >> a;

  if(a <= 400) b=a*1.15;
  else if(a <= 800) b=a*1.12;
  else if(a <= 1200) b=a*1.10;
  else if(a <= 2000) b=a*1.07;
  else b=a*1.04;

  printf("Novo salario: %.2f\n", b);
  printf("Reajuste ganho: %.2f\n", b-a);
  printf("Em percentual: %.0f %\n", ((b/a)-1)*100);

  return 0;
}