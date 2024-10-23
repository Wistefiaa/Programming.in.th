#include <bits/stdc++.h>
using namespace std;
string a;
int ball = 1;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a;
    for(int i = 0; i<a.length(); i++){
        if(a[i]=='A'){
            if(ball == 1){
                ball = 2;
            }
            else if(ball == 2){
                ball = 1;
            }
        }
        if(a[i]=='B'){
            if(ball == 2){
                ball = 3;
            }
            else if(ball == 3){
                ball = 2;
            }
            else{
                ball = ball;
            }
        }
        if(a[i]=='C'){
            if(ball == 3){
                ball = 1;
            }
            else if(ball == 1){
                ball = 3;
            }
            else{
                ball = ball;
            }
        }
    }
    cout<<ball;
}