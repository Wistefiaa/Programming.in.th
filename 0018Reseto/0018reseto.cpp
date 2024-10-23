#include<bits/stdc++.h>
using namespace std;
int n,k;
int min = 2000000;

int main(){
    cin>>n>>k;
    vector<int> num;
    vector<int> cross;
    for(int i = 2; i<=n; i++){ 
        num.push_back(i);
    }

    while(num.size()!=0){
        cross.push_back(num[0]);
        for(int j = 1; j<num.size(); j++){
            if(num[j]%num[0]==0){
                cross.push_back(num[j]);
                num.erase(num.begin()+j);
            }
        }
        num.erase(num.begin());
    }
    cout<<cross[k-1];
}