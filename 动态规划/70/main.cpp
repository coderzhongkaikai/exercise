#include <iostream>

int fib(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
//记忆化搜索
int fib2(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(memo[n] ==-1){
        memo[n]=fib(n-1)+fib(n-2);
    }
    return memo[n];
}

int main() {
    memo=vector<int>(n+1,-1);
    //动态规划
    vector<int>memo(n+1,-1);
    memo[0]=1;
    memo[1]=1;
    for (int i = 2; i <=n ; ++i) {
        memo[i]=memo[i-1]+memo[i-2];
        return  memo[n];
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
