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
//     void traverse(TreeNode* root, priority_queue<int,vector<int>,greater<int>> &pq) {
//         if(root==NULL) return;
        
//         pq.push(root->val);
//         traverse(root->left,pq);
//         traverse(root->right,pq);
//     }
    
    void smallest(TreeNode* root, int &k, int &ans) {
        if(root==NULL) return;
        
        smallest(root->left,k,ans);
        k--;
        if(k==0) {
            ans=root->val;
        }
        smallest(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        // priority_queue<int,vector<int>,greater<int>> pq;
        // traverse(root,pq);
        // while(k>1) {
        //     pq.pop();
        //     k--;
        // }
        // return pq.top();
        int ans=-1;
        smallest(root,k,ans);
        return ans;
    }
};