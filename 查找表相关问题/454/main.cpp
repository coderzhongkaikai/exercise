#include <iostream>

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int,int>map1;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                int temp=A[i]+B[j];
                if(map1.find(temp) != map1.end()){
                    map1[temp]++;
                }else{
                    map1.insert(make_pair(temp,1));
                }
            }
        }
        int total=0;
        for(int i=0;i<C.size();i++){
            for(int j=0;j<D.size();j++){
                int temp=0-C[i]-D[j];
                if(map1.find(temp) != map1.end()){
                    total +=map1[temp];
                }
            }
        }
        return total;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
