#include <iostream>

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
         int l=0,r=-1;//-1 为了防止数组溢出
    int sum=0;
    int res=nums.size()+1;  //+1为了判断 所有数组没有满足题目情况
    while (l<nums.size()){
        if(r+1<nums.size()&& sum<s)
            sum +=nums[++r];
        else
            sum -=nums[l++];
        if(sum>=s)
            res=min(res,r-l+1);

    };
          if(res==nums.size()+1) return 0; //为了判断 没有满足题目情况的最小数组

      return res;
    }
};

int main() {

//    滑动窗口


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
