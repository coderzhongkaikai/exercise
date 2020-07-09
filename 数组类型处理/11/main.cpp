#include <iostream>
//双指针碰撞   相似  209题
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int the_max=0;
        while(l<r){
            int temp_min=  min(height[l],height[r]);
            the_max=max(the_max,temp_min*(r-l));
//            这里想清楚为什么
            if(height[l]>height[r]){
                r--;
            }else{
                l++;
            }
        }
        return the_max;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
