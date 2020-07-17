#include <iostream>
using namespace  std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution{
public:
    bool hasPathSum (TreeNode*root,int sum){
        if(root==NULL) return NULL;
        //注意 递归的终止条件
        //根 到 叶子
        if(root->left==NULL&&root->right==NULL)//保证此节点为根
            return sum==0;
       if(hasPathSum(root->left,sum-root->val))
           return true;
       if(hasPathSum(root->right,sum- root->val))
           return true;

        return  false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
