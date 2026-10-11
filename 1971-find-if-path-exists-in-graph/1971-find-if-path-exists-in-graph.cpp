class Solution {
public:

bool isreachable(vector<vector<int>>&G,vector<int> &visited,int source,int destination){
    if(source==destination)
    return true;

    visited[source]=true;
    for(int c=0;c<G[source].size();c++){
        int des=G[source][c];
        if(visited[des]==false){
            bool ans=isreachable(G,visited, des, destination);
            if(ans==true)
            return true;
            else{
                continue;
            }
        }

    }
    return false;
}

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        

        vector<vector<int>> G(n);
        for(int r=0;r<edges.size();r++){
            int src=edges[r][0];
            int des=edges[r][1];
            G[src].push_back(des);
            G[des].push_back(src);
        }

        vector<int> visited(n,false);
        bool res=isreachable(G,visited,source,destination);
        return res;

        
    }
};