#include<bits/stdc++.h>
using namespace std;

int main() {

  int max; int min; int n; int m;
  max = -2000000000;
  min = 2000000000;
  cin>>n;
  for(int i = 0; i<n ; ++i)
  {
    cin>>m;
    if(max<=m){
      max = m;
    }
    if(min>=m){
      min = m;
    }
  }
  cout<<min<<endl<<max;
}