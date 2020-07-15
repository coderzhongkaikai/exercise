#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
//维护优先队列
using namespace  std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        assert(k>0);
        //统计每个元素的频率
        //int,int 元素，频率
        unordered_map<int,int>freq;
        for (int i = 0; i <nums.size() ; ++i) {
            freq[nums[i]]++;
        }
        assert(k<= freq.size());
        //扫描 freq 维护当然出现频率最高的k个元素
        // 在优先队列中，按照频率排序，所以数据对 （频率，元素）的形式
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for (unordered_map<int,int>::iterator iter=freq.begin();
        iter !=freq.end();iter++ ) {
            if(pq.size()==k){
              if( iter->second>pq.top().first){
                  pq.pop();
                  pq.push(make_pair(iter->second,iter->first));
              }
            }else{
                pq.push(make_pair(iter->second,iter->first));
            }
            vector<int>res;
            while (! pq.empty()){
                res.push_back(pq.top().second);
                pq.pop();
            }
            return  res;

        }
    }
};
int main() {

    return 0;
}
