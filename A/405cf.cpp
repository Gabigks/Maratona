#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int columns, a, aux;
  vector<int> vec;

  cin >> columns;

  for(int i=0; i<columns; i++){
    cin >> a;
    vec.push_back(a);
  }

  for(int j=0; j<columns; j++){
    for(int k=columns-1; k>j; k--){
      if(vec[j] > vec[k]){
        aux = vec[k];
        vec[k] += abs(vec[k] - vec[j]);
        vec[j] -= abs(aux - vec[j]);
      }
    }
  }

  for(int i=0; i<columns; i++){
    cout << vec[i] << " ";
  }


  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test
//08:11 1
