#include <iostream>
#include <vector>
using namespace std;
int num=0;
//记忆化搜索
//vector<int>memo;
//int  fib(int n){
//    num++;
//    if(n==0)
//        return 0;
//    if(n==1)
//        return 1;
//    //优化  记忆化搜索
//    if(memo[n]==-1){
//      memo[n]=  fib(n-1)+fib(n-2);
//    }
//    return  memo[n] ;
//}

//动态规划

int fib(int n){
    vector<int>memo(n+1,-1);
    memo[0]=0;
    memo[1]=1;
    for (int i = 2; i <=n ; ++i) {
        memo[i]=memo[i-1]+memo[i-2];
    }
    return memo[n];
}

int main() {

    num=0;
    int n=40;
//    memo=vector<int>(n+1,-1);
    time_t startTime=clock();
    int res=fib(n);
    time_t endTime=clock();

    cout<<"fib("<<n<<")"<<res<<endl;
    cout<<"time:"<<double(endTime- startTime)/CLOCKS_PER_SEC<<" s"<<endl;
    cout<<"run function fib()"<<num<<":times"<<endl;

    return 0;
}
