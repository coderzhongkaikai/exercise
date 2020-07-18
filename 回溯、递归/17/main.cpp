#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        res.clear();//初始化
        if(digits=="")
            return res;
        findCombinaton(digits,0,"");
        return  res;
    }

private:
    vector<string>res;
    const string letterMap[10]={
            " ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    void  findCombinaton(const string&digits,int index,const string &s){
       cout<<index<<" : "<<s<<endl;
        if(index==digits.size()){
           // 保存 s
           res.push_back(s);
            return;
        }
        char c = digits[index];
        assert(c>='0' && c<='9'&& c !='1');
        // c -'0' askII 码计算
            string letters=letterMap[c -'0'];
        for (int i = 0; i <letters.size() ; ++i) {
            findCombinaton(digits,index+1,s+letters[i]);
        }
    }
};
int main() {
    vector<string>res =Solution().letterCombinations("234");
    for (int i = 0; i <res.size() ; ++i) {
        cout<<res[i]<<endl;
    }

    return 0;
}
