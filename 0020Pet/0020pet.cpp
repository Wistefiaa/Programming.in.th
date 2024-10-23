#include <bits/stdc++.h>
using namespace std;
int score[4][5];
int sum[4];

int main(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            cin>>score[j][i];
            sum[i] += score[j][i];
        }
    }
    int max = INT_MIN;
    int count;
    for(int i = 0; i<5; i++){
        if(sum[i] > max){
            max = sum[i];
            count = i;
        }
    }
    cout<<count+1<<" "<<max;
}