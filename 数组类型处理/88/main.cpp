
#include <iostream>
#include <vector>
using namespace std;
# define MAX 99
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int counts[MAX]={0};
        for (int i = 0; i <m ; ++i) {
            counts[nums1[i]]++;
        }
        for (int i = 0; i <n ; ++i) {
            counts[nums2[i]]++;
        }
        int index=0;
        for(int i=0;i<MAX;i++){
            if(counts[i]){
                for (int j = 0; j < counts[i]; ++j) {
                    nums1[index++]=i;
                }
            }
        }
    }
};
int main() {

    int n[]={1,2,3,0,0,0};
    int m[]={2,5,6};
    vector<int> nums1(n,n+sizeof(n)/sizeof(int));
    vector<int> nums2(m,m+sizeof(m)/sizeof(int));
    Solution().merge(nums1,3,nums2,3);
    for (int i = 0; i <nums1.size() ; ++i) {
        cout<<nums1[i];
    }
    return 0;
}
