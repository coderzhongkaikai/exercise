#include <iostream>
using namespace  std;
class Solution {

public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        {
            while(left<right&&!isalnum(s[left]))
            {
                left++;
            }
            while(left<right&&!isalnum(s[right]))
            {
                right--;
            }
            if(left<right)
            {
                if(tolower(s[left])!=tolower(s[right]))
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
//        int l=0,r=s.size()-1;
//        bool end_juge=true;
//        while(l<r){
//            if(isalnum(s[l])&& isalnum(s[r])){
//                if(! tolower(s[l])==tolower(s[r])){
//                    return false;
//                }
//                l++;
//                r--;
//            }else if(isalnum(s[l])){
//                r--;
//            }else if(isalnum(s[r])){
//                l++;
//            }
//
//        }
//        return true;
    }
};


int main() {
    bool m=Solution().isPalindrome("race a car");
    cout << (bool)m<< endl;
    return 0;
}
