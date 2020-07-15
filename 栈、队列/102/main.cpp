#include <iostream>
#include <vector>
#include <queue>
using namespace  std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//树的层序遍历 队列
//二叉树：[3,9,20,null,null,15,7],
//
//    3
//   / \
//  9  20
//    /  \
//   15   7
//返回其层次遍历结果：
//
//[
//  [3],
//  [9,20],
//  [15,7]
//]
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;//二维数组
        if(root==NULL)
            return  res;
        queue<pair<TreeNode*,int>>q; //队列 数据类型
        q.push(make_pair(root,0));
        while (!q.empty()){
            TreeNode*node=q.front().first;
            int level=q.front().second;
            q.pop();
            if(level ==res.size())  //注意边界  level =res.size（）说明此level 还没有数据
                res.push_back(vector<int>());//放入一个数组
            res[level].push_back(node->val);//用vector 进行二维数组的处理
            if(node->left)
                q.push(make_pair(node->left,level+1));
            if(node->right)
                q.push(make_pair(node->right,level+1));
        }
        return  res
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
