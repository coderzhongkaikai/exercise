#include <iostream>
#include <vector>
#include <map>
using  namespace  std;
// find() end()  push_back()
//注意 make_pair  的意思
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>map1;
        for (int i = 0; i <nums1.size() ; ++i) {
            if(map1.find(nums1[i]) !=map1.end()){
                map1[nums1[i]]++;
            }else{
                map1.insert(make_pair(nums1[i],1));
            }
            //set 数据结构有去重的 功能
        }
        map<int,int>map2;
        vector<int>vec1;
        for (int i = 0; i <nums2.size() ; ++i) {
            if(map1.find(nums2[i]) !=map1.end()&&map1[nums2[i]]>0){
                vec1.push_back(nums1[i]);
                map1[nums2[i]]--;
            }

        }
        return  vec1;
    }
};
int main() {
    int num1[]={4,9,5};
    int num2[]={9,4,9,8,4};
    vector<int>vec1(num1,num1+sizeof(num1)/sizeof(int));
    vector<int>vec2(num2,num2+sizeof(num2)/sizeof(int));
    Solution().intersection(vec1,vec2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
