class Solution {
private:
    bool checkBipartite(int src, int color, vector <int> &vis, vector <vector <int>> &graph)
    {
        vis[src] = color;

        for (int &neighbourNode : graph[src])
        {
            if (not vis[neighbourNode])
            {
                int nextColor = (color == 1 ? 2 : 1);

                if (checkBipartite(neighbourNode, nextColor, vis, graph) == false)
                {
                    return false;
                }
            }
            else if (vis[src] == vis[neighbourNode])
            {
                return false;
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph)
    {
        int nodes = graph.size();

        vector <int> vis(nodes, 0);

        for (int v = 0; v < nodes; v ++)
        {
            if (vis[v] == 0 and not checkBipartite(v, 1, vis, graph))
            {
                return false;
            }
        }

        return true;
    }
};