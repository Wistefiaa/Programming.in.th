#include<bits/stdc++.h>
using namespace std;
vector<int> nums;
int n;
int number;

int main(){
    cin>>n;
    for(int i = 0; i<n ; i++){
        cin>>number;
        nums.push_back(number);
    }
    sort(nums.begin(), nums.end());

    if(nums[0] == 0){
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i], nums[0]);
                break;
            }
        }
    }
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i];
    }
}