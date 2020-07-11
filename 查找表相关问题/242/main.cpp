#include <iostream>
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>map1;
        if(s.size() !=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(map1.find(s[i]) != map1.end() ){
                map1[s[i]]++;
            }
            else{
                map1.insert(make_pair(s[i],1));
            }
        }
        for(int i=0;i<t.size();i++){
            if(map1.find(t[i]) == map1.end()|| map1[t[i]] ==0){
                return false;
            }else{
                map1[t[i]]--;
            }
        }
        return true;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
