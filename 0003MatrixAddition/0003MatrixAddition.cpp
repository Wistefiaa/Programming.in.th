#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int i,j;
  cin>>i>>j;
  int matrix1[i][j];
  int matrix2[i][j];
  int matrix3[i][j];
  for(int n = 0 ; n<i ; n++){
    for(int m = 0; m<j ; m++){
      cin>>matrix1[n][m];
    }
  }
  for(int n = 0 ; n<i ; n++){
    for(int m = 0; m<j ; m++){
      cin>>matrix2[n][m];
    }
  }
  for(int n = 0 ; n<i ; n++){
    for(int m = 0; m<j ; m++){
      matrix3[n][m] = matrix1[n][m]+matrix2[n][m];
    }
  }
  for(int n = 0 ; n<i ; n++){
    for(int m = 0; m<j ; m++){
      cout<<matrix3[n][m]<<" ";
    }
    cout<<endl;
  }
}