/**
 * Definition for binary tree
 * struct TreeNode{
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* par(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent, int target){
    queue<TreeNode*> q; q.push(root);
    TreeNode* ans;
    while(!q.empty()){
        TreeNode* node = q.front(); q.pop();
        if(node->val == target) ans = node;

        if(node->left){
            parent[node->left] = node;
            q.push(node->left);
        }
        if(node->right){
            parent[node->right] = node;
            q.push(node->right);
        }
    }
    return ans;
}

int burn(unordered_map<TreeNode*, TreeNode*> parent, TreeNode* target){
    queue<TreeNode*> q; q.push(target);
    unordered_map<TreeNode*, bool> visited; visited[target] = true;
    int dist = 0;

    while(!q.empty()){
        int flag = 0; int n = q.size();
        for(int i=0; i<n; i++){
            TreeNode* node = q.front(); q.pop();
            if(node->left && !visited[node->left]){
                flag = 1;
                visited[node->left] = true;
                q.push(node->left);
            }
            if(node->right && !visited[node->right]){
                flag = 1;
                visited[node->right] = true;
                q.push(node->right);
            }
            if(parent[node] && !visited[parent[node]]){
                flag = 1;
                visited[parent[node]] = true;
                q.push(parent[node]);
            }
        }
        if(flag) dist++;
    }
    return dist;
}

int Solution::solve(TreeNode* A, int B) {
    unordered_map<TreeNode*, TreeNode*> parent;
    TreeNode* target = par(A, parent, B);
    
    return burn(parent, target);
}
