#include <iostream>
#include <vector>
using namespace std;
struct  Interval{
    int start;
    int end;
    Interval():start(0),end(0){}
    Interval(int s,int e):start(s),end(e){}
};
//动态规划  最长上升子序列
// 排序
bool compare(const Interval&a,const Interval &b){
    if(a.start !=b.start)
        return a.start<b.start;
    return a.end<b.end;

}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0)return 0;
        sort(intervals.begin(),intervals.end(),compare);
        //构造状态  memo[i]表示使用 intervals[0...i]的区间能构成的最长不重叠区间序列
        vector<int>memo(intervals.size(),1);
        //动态规划
        //i=0 这个区间仅一个元素 就是不重叠区间
        for (int i = 1; i <intervals.size() ; ++i) {
            //memo[i]
            for (int j = 0; j <i ; ++j) {
                if(intervals[i].start >=intervals[j].end){
                        memo[i]=max(memo[i],1+memo[j]);
                }
            }
        }
        int res=0;
        for (int k = 0; k <memo.size() ; ++k) {
                res=max(res,memo[k]);
        }
        return  intervals.size()-res;
    }
};
int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
