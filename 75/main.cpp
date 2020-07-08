#include <iostream>
#include <vector>
#include <cassert>
using namespace  std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //三路排序
        int zero=-1;
        int two=nums.size();
        for (int i = 0; i <two ; ++i) {
            if(nums[i]==1) i++;
            else if(nums[i]==2)
                swap(nums[i],nums[--two]);
            else{
                assert(nums[i]==0);
                swap(nums[++zero],nums[i++]);
            }
        }



        //计数排序  时间复杂度 O(n) 空间复杂度 O(1)
//        int cout[3]={0};
//        for (int i = 0; i <nums.size() ; ++i) {
//            assert(nums[i]>=0&&nums[i]<=2);
//            cout[nums[i]]++;
//        }
//        int index=0;
//        for (int j = 0; j <cout[0] ; ++j) {
//                nums[index++]=0;
//        }
//        for (int j = 0; j <cout[1] ; ++j) {
//            nums[index++]=0;
//        }
//        for (int j = 0; j <cout[2] ; ++j) {
//            nums[index++]=0;
//        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
