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
    //最近公共祖先  二分搜索树的数据特征  注意边界条件
    TreeNode* lowestCommonAncestor (TreeNode*root,TreeNode*p,TreeNode*q){

        assert(p!= NULL && q!=NULL);
     //在左侧
    if(p->val<root->val && q->val<root->val)
        return  lowestCommonAncestor(root->left,p,q);
    //同在右侧
    if(p->val>root->val && q->val>root->val)
        return  lowestCommonAncestor(root->right,p,q);
    //如果在左右，或者又一个是 公共祖先，则根就是最近公共祖先
        return  root;
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
