#include <iostream>
#include <vector>

using namespace  std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
//        [2,0,2,1,1,0] 自己写 计数排序
//         int n[3]={0};
//        for (int i = 0; i < nums.size(); ++i) {
//            n[nums[i]]++;
//        }
//        int index=0;
//        for (int j = 0; j <3 ; ++j) {
//            for (int i = 0; i < n[j]; ++i) {
//                nums[index++]=j;
//            }
//        }



        //三路排序  注意 zero 和 two 对应边界的统一
//        int zero=-1;
//        int two=nums.size();
//        for (int i = 0; i <two ; ++i) {
//            if(nums[i]==1) i++;
//            else if(nums[i]==2)
//                swap(nums[i],nums[--two]);
//            else{
//                assert(nums[i]==0);
//                swap(nums[++zero],nums[i++]);
//            }
//        }



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

    int m[]={2,0,2,1,1,0};
    vector<int> vec(m,m+sizeof(m)/sizeof(int));
    Solution().sortColors(vec);
    for (int i = 0; i <vec.size() ; ++i) {
        cout<<vec[i]<<endl;
    }
    return 0;
}
