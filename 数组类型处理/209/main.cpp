#include <iostream>

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
    int l=0,r=-1;
    int sum=0;
    int res=nums.size()+1;
    while (l<nums.size(){
        if(r+1<nums.size()&& sum<s)
            sum +=nums[++r];
        else
            sum -=nums[l++];
        if(sum>=s)
            res=min(res,r-l+1);
        if(res==nums.size()+1)
            return 0;
    })
    }
};

int main() {

//    滑动窗口


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
