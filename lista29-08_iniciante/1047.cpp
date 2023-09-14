#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c, d, h = 24, min = 0;

  cin >> a >> b >> c >> d;

  if(a > c) h = (24 - a) + c;
  else if(a < c) h = c - a;
  
  if((b+d) > 60){
    h++;
    min = (b+d) - 60;
  } else if (b > d){
    h--;
    min = 60 - (b-d);
  } else {
    min = d- b;
  }

  if(a == c && b < d) h = 0;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, min);

  return 0;
}