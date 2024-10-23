#include<bits/stdc++.h>
using namespace std;

int main() {

  string s;
  bool upper = false; bool lower = false;
  cin>>s;
  for(char a:s){
    if(isupper(a)){
      upper = true;
    }
    if(islower(a)){
      lower = true;
    }
  }
  if(upper == true&&lower == true){
    cout<<"Mix";
  }
  else if(upper == true){
    cout<<"All Capital Letter";
  }
  else{
    cout<<"All Small Letter";
  }
}