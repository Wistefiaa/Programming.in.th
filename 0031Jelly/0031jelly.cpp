#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int cut = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b>>c;
    while(a>1||b>1||c>1){
        if(a!=1){
            a = a/2;
            cut += 1;
        }
        if(b!=1){
            b = b/2;
            cut += 1;
        }
        if(c!=1){
            c = c/2;
            cut += 1;
        }
    }
    cout<<cut;
}