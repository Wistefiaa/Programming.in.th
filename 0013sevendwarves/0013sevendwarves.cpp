#include<bits/stdc++.h>
using namespace std;
int num[9];
int sum = 0;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for(int i = 0; i<9; i++){

        cin>>num[i];
        sum+=num[i];

    }
    for (int i = 0; i<9; i++){

        for(int j = i+1; j<9; j++){
            
            if(sum-100 == num[i]+num[j]){
                
                for(int k = 0; k<9; k++){
                    
                    if(k == i || k == j){
                        
                        continue;

                    }
                    cout<<num[k]<<endl;

                }
            }
        }       
    }    
}