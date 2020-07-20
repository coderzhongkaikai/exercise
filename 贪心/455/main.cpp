#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;
class Solution{
public:int findContentChild(vector<int>&g,vector<int>&s){
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int si=0,gi=0;//分别代表 饼干和小孩
        int res=0;
        while (gi<g.size()&&si<s.size()){
            if(s[si]>=g[gi]){
                res++;
                si++;
                gi++;
            }
            else{
                gi++;
            }
        }
        return  res;
}
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
