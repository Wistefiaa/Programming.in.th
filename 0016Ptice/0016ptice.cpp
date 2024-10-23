#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    char a[3] = {'A','B','C'};
    char b[4] = {'B','A','B','C'};
    char g[6] = {'C','C','A','A','B','B'};
    int suma =0,sumb =0,sumg =0;
    for(int i = 0; i<n;i++){
        if(a[i%3]==s[i]) suma+=1;
        if(b[i%4]==s[i]) sumb+=1;
        if(g[i%6]==s[i]) sumg+=1;
    }
    int best = max({suma, sumb, sumg});
    cout<<best<<'\n';
    if(best==suma) cout<<"Adrain"<<'\n';
    if(best==sumb) cout<<"Bruno"<<'\n';
    if(best==sumg) cout<<"Goran"<<'\n';
    /*if(suma>sumb&&suma>sumg) cout<<suma<<'\n'<<"Adrian";
    if(sumb>suma&&sumb>sumg) cout<<sumb<<'\n'<<"Bruno";
    if(sumg>suma&&sumg>sumb) cout<<sumg<<'\n'<<"Goran";
    if(suma==sumb&&sumb==sumg) cout<<suma<<'\n'<<"Adrian"<<'\n'<<"Bruno"<<'\n'<<"Goran";
    if(suma==sumb&&suma>sumg) cout<<suma<<'\n'<<"Adrian"<<'\n'<<"Bruno";
    if(suma==sumg&&suma>sumb) cout<<suma<<'\n'<<"Adrian"<<'\n'<<"Goran";
    if(sumg==sumb&&suma<sumg) cout<<sumg<<'\n'<<"Bruno"<<'\n'<<"Goran";*/
}