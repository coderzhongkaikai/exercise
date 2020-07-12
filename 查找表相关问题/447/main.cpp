#include <iostream>
#include <unordered_map>
using namespace  std;
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res=0;
        for(int i=0;i<points.size();i++){
            unordered_map<int,int>map1;
            for(int j=0;j<points.size();j++){
                if(i != j)
                map1[dis(points[i],points[j])]++;
            }
            for(unordered_map<int,int>::iterator iter=map1.begin(); iter != map1.end();iter++){

                if(iter->second>1) //选择问题   当有大于2各点出现时   可以不用 if  判断 如果 iter->second =1  则 原式=0
                    res +=(iter->second)*(iter->second-1);
            }
        }
        return  res;


    }

private:
    int dis(const pair<int,int>&A,const pair<int,int>&B){//勾股定理 不开 根号
        return (A.first-B.first)*(A.first-B.first)+(A.second-B.second)*(A.second-B.second);
    }

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
