#include <iostream>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//        滑动窗口
        int freq[256]={0} //对应ASCII码;  相当于计数  最后作出判断
        int l=0,r=-1;
        int res=0;
        while (l<s.size()){
            if(r+1<s.size()&&freq[s[r+1]]==0)//if else 作用： 注意是连续字串  不是字串  注意两者区别
                freq[s[++r]]++;
            else
                freq[s[l++]]--;
            res=max(res,r-l+1);
        }
        return  res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
