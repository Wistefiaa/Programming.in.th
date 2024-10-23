#include<bits/stdc++.h>
using namespace std;
int c=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,mx;
    string s,o;
    cin>>n;
    mx = n+50;
    vector<bool> prime(mx+1000000);
    prime[1]=true;
    for(int i=2;i<=mx+1000000; i++){
        if(!prime[i]){
            for(int k=i+i;k<=mx+1000000;k+=i){
                prime[k]=true;
            }
        }
    }
    int l;
    for(l=2; l<mx*n+1000000; l++){
        if(!prime[l]){
            /*cout<<l<<" ";*/
            c++;
        }
        if(c==n){
            cout<<l;
            break;
        }
    }
}