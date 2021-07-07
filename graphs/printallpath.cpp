// https://leetcode.com/problems/all-paths-from-source-to-target/submissions/

class Solution {
    
    void dfs(vector<vector<int>>& graph,vector<int>& path,vector<vector<int>> &result,int u)
    {
        path.push_back(u);
        
        if(u == graph.size()-1 ) result.push_back(path);
        
        for(int x: graph[u]) dfs(graph,path,result,x);
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>result;
        
        vector<int>path;
        
        dfs(graph,path,result,0);
        
        return result;
        
    }
};