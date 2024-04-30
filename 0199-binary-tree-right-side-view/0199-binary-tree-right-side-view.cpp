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
    vector<int> rightSideView(TreeNode* root) {
        // Level Order Traversal.
        vector<int> ans;
        if(root == NULL) return ans;

        queue<pair<int , TreeNode*>> q; // (horiz. line, node)
        q.push({0 , root});
        map<int , int> mp; // (horiz. line, value of node)

        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            int horiz = temp.first;
            TreeNode* node = temp.second;

            if(mp.find(horiz) == mp.end()){
                mp[horiz] = node -> val;
            }

            // we will traverse the right subtree first.
            if(node -> right) q.push({horiz + 1 , node -> right});
            if(node -> left) q.push({horiz + 1 , node -> left});


        }

        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;

    }
};