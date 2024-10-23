#include <bits/stdc++.h>
using namespace std;
int num[10];
int mod[42];
int c = 0;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0 ; i<10; i++){
        cin>>num[i];
        num[i]=num[i]%42;
        mod[num[i]] = 1;
    }

    for(int j = 0; j<42; j++){
        if(mod[j] == 1){
            c+=1;
        }
    }
    cout<<c;
}