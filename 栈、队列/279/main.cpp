#include <iostream>

//给定正整数 n，找到若干个完全平方数（比如 1, 4, 9, 16, ...）使得它们的和等于 n。你需要让组成和的完全平方数的个数最少。
//
//示例 1:
//输入: n = 12
//输出: 3
//解释: 12 = 4 + 4 + 4.
//示例 2:
//输入: n = 13
//输出: 2
//解释: 13 = 4 + 9.
//对问题建模
//整个问题转化为图论的问题
//从n到0，每个数字表示一个节点
//如果两个数字x到y相差一个完全平方数，则有一条边，如此可以得到一个无权图
//问题转化成，求这个无权图n到0的最短路径
#include <queue>
#include <vector>
using namespace  std;
class Solution {
public:
    //直观解法
//    int numSquares(int n) {
//        queue<pair<int,int>>q;
//        q.push(make_pair(n,0));
//        while (!q.empty()){
//            int num=q.front().first;
//            int step=q.front().second;
//            q.pop();
//            if(num==0)
//                return  step;
//            for (int i = 0; num-i*i ; ++i) {//类似如此 直观，但是会出现数据冗余 比如  1*1 会出现在每个情况
//                q.push(make_pair(num-i*i,step+1));
//            }
//        }
//        throw invalid_argument("no solution");
//    }

    //优化 数据冗余
    int numSquares(int n) {
        queue<pair<int,int>>q;
        q.push(make_pair(n,0));
        //优化
        vector<bool>visited(n+1,false);
        visited[n]=true;
        while (!q.empty()){
            int num=q.front().first;
            int step=q.front().second;
            q.pop();
            if(num==0)
                return  step;
            for (int i = 0; num-i*i ; ++i) {//类似如此 直观，但是会出现数据冗余 比如  1*1 会出现在每个情况
              if(! visited[num-i*i]){ //num-i*i 没有访问
                  q.push(make_pair(num-i*i,step+1));
                  visited[num-i*i];//num-i*i 标记为访问
              }
            }
        }
        throw invalid_argument("no solution");
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
