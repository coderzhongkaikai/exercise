#include <iostream>
#include <vector>
#include <set>
using  namespace  std;
 //  iterator  迭代器的使用    *iter
//输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出：[9,4]
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>set1;
        for (int i = 0; i <nums1.size() ; ++i) {
            set1.insert(nums1[i]);
        //set 数据结构有去重的 功能
        }
        set<int>set2;
        for (int i = 0; i <nums2.size() ; ++i) {
            set2.insert(nums2[i]);

        }
        vector<int> vec1;
        for (set<int>::iterator iter=set2.begin();iter != set2.end(); iter++) {
            vec1.push_back(*iter);
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
