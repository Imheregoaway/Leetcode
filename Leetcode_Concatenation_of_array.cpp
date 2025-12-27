#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>nums ={1,2,1};
    int n=nums.size();
    int newLen {2*n};
    vector<int>ans(newLen);

    for(int i{0};i<n;i++){
        ans[i] = nums[i];
    }
    for(int i{0};i<n;i++){
        ans[i+n] = nums[i];
    }

    for (int x: ans) cout<<x<<" ";
    return 0;
}
