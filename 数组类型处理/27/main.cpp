#include <iostream>

#include <vector>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int m=0;
        for (int i = 0; i <nums.size() ; ++i) {
            if(nums[i]==val){

            }else{
                nums[m++]=nums[i];
            }
        }
        return  m;
    }
};

int main(){
    int nums[]={10,5,10,20,30,1,3,4};
    int remove_el=10;
    vector<int> vec(nums,nums+sizeof(nums)/sizeof(int));
   int len= Solution().removeElement(vec,remove_el);
    for (int i = 0; i <len ; ++i) {
        cout<<vec[i];
    }
}