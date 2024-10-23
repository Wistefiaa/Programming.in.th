#include <bits/stdc++.h>
using namespace std;
int main(){
    char v[5]= {'a','e','i','o','u'};
    string s;
    getline(cin,s);
    for(int w=0; w<s.length(); w++){
        for(int i=0; i<5; i++){
            if(s[w-1]==v[i]&&s[w]=='p'){
                s.erase(s.begin()+w+1);
                s.erase(s.begin()+w);
            }
        }
    }
    cout<<s;
    return 0;
}