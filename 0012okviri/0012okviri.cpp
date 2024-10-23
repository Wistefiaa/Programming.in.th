#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int f;
    char arr[3] = {'*','#','#'};
    string s;
    cin>>s;
    for(int i=0; i<5;i++){
        for(int c=1; c<=s.length(); c++){
            f = c%3;
            for(int j=0; j<5; j++){
                if(j==4&&c!=(s.length())) cout<<"";
                else if (c>1&&f==1&&j==0&&i==2) cout<<"*";
                else if(i+j==2||(i-j==2)||j-i==2||(i==3&&j==3))cout<<arr[f];
                else if(i==2&&j==2)cout<<s[c-1];
                else cout<<'.';
            }
        }
        cout<<'\n';
    }
}