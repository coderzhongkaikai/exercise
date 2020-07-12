#include <iostream>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//。滑动窗口+查找表 ，绝对值转化为长度解决问题
        unordered_set<int>set1;
    for(int  i=0;i<nums.size();i++){
    if(set1.find(nums[i]) != set1.end()){
                return true;
        }
        set1.insert(nums[i]);
          if(set1.size()==k+1){//固定长度 ，固定窗口大小
            set1.erase(nums[i-k]);
          }
    }

    return false;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
