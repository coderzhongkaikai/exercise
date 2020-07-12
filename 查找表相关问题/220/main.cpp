#include <iostream>
//在整数数组 nums 中，是否存在两个下标 i 和 j，使得 nums [i] 和 nums [j] 的差的绝对值小于等于 t ，
//且满足 i 和 j 的差的绝对值也小于等于 ķ 。
//
//如果存在则返回 true，不存在返回 false
//示例 1:
//输入: nums = [1,2,3,1], k = 3, t = 0
//输出: true
//示例 2:
//输入: nums = [1,0,1,1], k = 1, t = 2
//输出: true
//示例 3:
//输入: nums = [1,5,9,1,5,9], k = 2, t = 3
//输出: false
//解释： 满足 i 和 j 的差的绝对值也小于等于 ķ 。可以用滑动窗口固定大小k， 绝对值转化为长度问题
//    ｜nums [i] - nums [j]｜ <=t
//     nums[i]-t  <= nums[j] <= t+nums[i]
//  返回lower_bound（val）大于或等于val的第一个元素位置
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        //  nums[j]-k<nums[i]<k+nums[j]
        //  long long 整型溢出
        set<int> set1;
        for(int i=0;i<nums.size();i++){
            if(set1.lower_bound(nums[i]-t) != set1.end()&& *set1.lower_bound(nums[i]-t) <=t+nums[i]){
                return true;
            }

            set1.insert(nums[i]);
            if(set1.size()== k+1){
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
