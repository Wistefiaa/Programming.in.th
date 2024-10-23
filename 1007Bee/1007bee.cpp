#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int bee[3][25] = {0};
    bee[0][0] = 1; //ผึ้งงาน
    bee[2][0] = 2; // ผึ้งรวม
    // memo  เก็บค่าไว้สำหรับแสดงผลลัพธ์ตามการ Input
    for(int i = 1; i<25; i++){
        bee[0][i] = bee[2][i-1]; //ผึ้งงาน
        bee[1][i] = bee[0][i-1]; //ผึ้งทหาร
        bee[2][i] = bee[0][i]+bee[1][i]+1; // ผึ้งรวม
    }
    int y = 0;
    while(y!=-1){
        cin>>y;
        if(y>0){
            cout<<bee[0][y]<<' '<<bee[2][y]<<'\n';
        }
    }
    return 0;
}
/*

1 3 -1
7 3 1 6 12 20 15 16 18 -1
*/