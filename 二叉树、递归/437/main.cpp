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
    //  以 root 为根节点的二叉树中，寻找和为 sum的路径 返回这样路径的个数
    //递归的嵌套
    int pathSum (TreeNode*root,int sum){
        if(root==NULL) return NULL;
        //以 不同节点为根
        int res=0;
        res+= find_path(root,sum);
         res +=find_path(root->left,sum);
         res +=find_path(root->right,sum);

        return  res;
    }

private:
    //以 一个节点为根 在这一条路径下 出现等于 sum的次数
   int  find_path(TreeNode*root,int num){
       int res=0;
       if(root->val==num)
           res++;
       res+=find_path(root->left,num-root->val);
       res+=find_path(root->right,num-root->val);
       return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
