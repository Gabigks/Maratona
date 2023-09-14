#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  string temp;
  int h, hh, m,mm,d,dm,s,ss;

  cin >> temp >> d;
  cin >> h >> temp >> m >> temp >> s;
  cin >> temp >> dm;
  cin >> hh >> temp >> mm >> temp >> ss;
  
  s = ss - s;
  m = mm - m;
  h = hh - h;
  d = dm - d;

  if(s<0){
    s+=60;
    m--;
  }

  if(m<0){
    m+=60;
    h--;
  }

  if(h<0){
    h+=24;
    d--;
  }
  cout << d << " dia(s)" << endl;
  cout << h << " hora(s)" << endl;
  cout << m << " minuto(s)" << endl;
  cout << s << " segundo(s)" << endl;

  return 0;

}

//g++ -std=c++11 -o2 -Wall index.cpp -o test