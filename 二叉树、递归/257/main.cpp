#include <iostream>
#include <vector>
using namespace  std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution{
public:
    vector<string> binaryTreePaths (TreeNode*root){
        if(root==NULL) return NULL;

        vector<string>res;
        vector<string>leftroot=binaryTreePaths(root->left);
        for (int i = 0; i <leftroot.size() ; ++i) {
            res.push_back(to_string(root->val)+"->"+leftroot[i]);
        }
        vector<string>rightroot=binaryTreePaths(root->right);
        for (int j = 0; j <rightroot.size() ; ++j) {
            res.push_back(to_string(root->val+)"->"+rightroot[i]);
        }
        return  res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
