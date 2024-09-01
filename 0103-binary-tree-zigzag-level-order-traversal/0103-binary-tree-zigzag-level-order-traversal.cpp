/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool lr=true;
        while(!q.empty()){
            int s=q.size();
            vector<int> lvl(s);
            for(int i=0;i<s;i++){
                TreeNode* nd=q.front();
                q.pop();
                int idx=lr?i:s-1-i;
                lvl[idx]=nd->val;
                if(nd->left){
                    q.push(nd->left);
                }
                if(nd->right){
                    q.push(nd->right);
                }   
            }
            lr=!lr;
            ans.push_back(lvl);
        }
        
        return ans;
    }
};