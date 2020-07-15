#include <iostream>
#include <queue>
#include <ctime>
using namespace  std;
bool  myCmp(int a,int b){
    return a%10>b%10;
}
//优先队列
int main() {
    srand(time(NULL));//
    //默认情况下，最大堆
    //从大到小
    priority_queue<int>pq;
    for (int i = 0; i < 10; ++i) {
            int num=rand()%100;//0~99
            pq.push(num);
            cout<<"insert"<<num<<endl;
    }
    while (!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
    }
    //手动 最小堆  元素类型，低层实现，最小堆比较函数greater
    //从小到大
    priority_queue<int,vector<int>,greater<int>>pq2;

    for (int i = 0; i < 10; ++i) {
        int num=rand()%100;//0~99
        pq2.push(num);
        cout<<"insert"<<num<<endl;
    }
    while (!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

    //自定义 比较函数  按照个位数排序
    priority_queue<int,vector<int>,function<bool(int,int)>>pq3(myCmp);

    for (int i = 0; i < 10; ++i) {
        int num=rand()%100;//0~99
        pq3.push(num);
        cout<<"insert"<<num<<endl;
    }
    while (!pq3.empty()){
        cout<<pq3.top()<<" ";
        pq3.pop();
    }


    cout <<endl;
    return 0;
}
