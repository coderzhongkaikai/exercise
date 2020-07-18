#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    vector<vector<int>> permute(vector<int>& nums) {
    res.clear();
    if(nums.size()==0)
        return res;
    //将 nums.size（）个元素 设置为 false
    used=vector<bool>(nums.size(), false);
    vector<int>p;
    generatePermutation(nums,0,p);
        return res;
    }

private:
    vector<vector<int>>res;
    vector<bool> used;
    void  generatePermutation(const vector<int>& nums,int index,vector<int>&p){
        if(index==nums.size()){
            res.push_back(p);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
        //   if(!(nums[i]))
            if(!used[i]){
                p.push_back(nums[i]);
                used[i]=true;
                generatePermutation(nums,index+1,p);
                //状态 回溯
                p.pop_back();
                used[i]=false;
            }
        }
        return ;
    }
};
int main() {
//    vector<string>res =Solution().letterCombinations("234");
//    for (int i = 0; i <res.size() ; ++i) {
//        cout<<res[i]<<endl;
//    }

    return 0;
}
