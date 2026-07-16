//D.F.S
// class Solution {
// public:
//     void dfs(int node, vector<vector<int>>& adjacencylist,vector<int>&vis){
//         vis[node]=1;
//         for(auto it:adjacencylist[node]){
//             if(!vis[it]){
//                 dfs(it,adjacencylist,vis);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n=isConnected.size();
//         //dfs
//         //adjacency matrix is given 
//         //convert this into adjacency list 
//         vector<vector<int>>adjacencylist(n);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(isConnected[i][j]==1 && i!=j){
//                     adjacencylist[i].push_back(j);
//                     adjacencylist[j].push_back(i);
//                 }
//             }
//         }
//         vector<int>vis(n,0);
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 cnt++;
//                 dfs(i,adjacencylist,vis);
//             }
//         }
//         return cnt;
//     }
// };

//B.F.S
class Solution {
public:
    void bfs(int node, vector<vector<int>>& adjacencylist,vector<int>&vis){
        queue<int>q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto it:adjacencylist[curr]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }    
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        //dfs
        //adjacency matrix is given 
        //convert this into adjacency list 
        vector<vector<int>>adjacencylist(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjacencylist[i].push_back(j);
                    adjacencylist[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                bfs(i,adjacencylist,vis);
            }
        }
        return cnt;
    }
};