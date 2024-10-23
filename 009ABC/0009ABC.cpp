#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    string s;
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    cin>>s;
    sort(arr,arr+3);
    for(auto w:s){
        cout<<arr[(int)w-65]<<" ";
    }
}