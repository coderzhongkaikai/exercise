#include <iostream>
#include <vector>
using namespace std;
struct  Interval{
    int start;
    int end;
    Interval():start(0),end(0){}
    Interval(int s,int e):start(s),end(e){}
};

//贪心
//按照区间结尾排序
//每次选择结尾最早的 且 和前一个区间不重叠的区间
bool compare(const Interval&a,const Interval &b){
    if(a.end !=b.end)
        return a.end<b.end;
    return a.start<b.start;
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0)return 0;
        sort(intervals.begin(),intervals.end(),compare);
        //贪心算法
        int res=1;
        int pre=0;
        for (int i = i; i <intervals.size() ; ++i) {
            if(intervals[i].start>=intervals[pre].end){
                res++;
                pre=i;
            }
        }
        return  intervals.size()-res;
    }
};
int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
