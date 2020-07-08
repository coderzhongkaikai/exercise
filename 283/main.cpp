#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    void moveZeroes(vector<int>& nums){
//  交换法
//        int m=0;
//        for (int i = 1; i <nums.size() ; ++i) {
//            if(nums[m]){
//                m++;
//            }else if(nums[m]==0&&nums[i]){
//                swap(nums[m],nums[i]);
//                m++;
//            }
//
//        }
        // 双指针 , 与交换法区别在于 此方法 最后有for 循环
//        int m=0;
//        for (int i = 0; i <nums.size() ; ++i) {
//            if(nums[i]){
//                nums[m++]=nums[i];
//            }
//        }
//        for( m;m<nums.size();m++){
//            nums[m]=0;
//        }

        //暴力法
//        vector<int> nonZeroElements;
//        for(int i=0;i<nums.size();i++)
//            if(nums[i])
//                nonZeroElements.push_back(nums[i]);
//        for(int i=0;i<nonZeroElements.size();i++)
//            nums[i]=nonZeroElements[i];
//        for(int i=nonZeroElements.size();i<nums.size();i++)
//            nums[i]=0;
    }
};
int main() {
   int arr[]={0,1,0,3,12};
   vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
    Solution().moveZeroes(vec);
    for (int i = 0; i < vec.size(); ++i) {
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
