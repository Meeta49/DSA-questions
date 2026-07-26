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
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> ans;        //store all the levels

        if(root==NULL)       //check the empty tree and return the ans.
            return ans;

        queue<TreeNode*> q;           //use the queue because ot traverse the level by level
        q.push(root);           //start the traversal from the root node

        while(!q.empty())       //whenever queue will not empty it will run
        {
            int size=q.size();       //count the current level node
            vector<int> level;      //store the current level node

            for(int i=0;i<size;i++)       //process the node for current level
            {
                TreeNode* node=q.front(); // take the front node as a queue
                q.pop();                   // remove that node from the queue

                level.push_back(node->val); //store the node value into the current level

                if(node->left)           //if left child exist add into the queue
                    q.push(node->left);

                if(node->right)                  //if the right child exist add into the queue
                    q.push(node->right);
            }

            ans.push_back(level);     //all the current level process and add into the final ans
        }

        return ans;  //return all the final ans.
    }
};


// 1. Queue me Root daalo.
// 2. Jab tak Queue empty na ho:
//    - Current level ka size nikalo.
//    - Size jitni baar loop chalao.
//    - Front node nikalo.
//    - Answer me add karo.
//    - Left aur Right child ko Queue me daalo.
//    - Current level ko final answer me store karo.
// 3. Answer return karo.