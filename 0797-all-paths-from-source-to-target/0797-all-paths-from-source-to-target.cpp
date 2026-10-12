class Solution {
public:

void allpaths(vector<vector<int>>& graph,int src,int des, vector<vector<int>> &ans,vector<int> &path){
   
   
    if(src==des){
    
        ans.push_back(path);
       
        return;
       
    }
   
    for(int c=0;c<graph[src].size();c++){
        int descol=graph[src][c];
          path.push_back(descol);
       
         allpaths( graph,descol, des,ans,path);
         path.pop_back();
         
    }

}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
         vector<vector<int>> all;
         vector<int> path;
         path.push_back(0);
         
         int n=graph.size();
allpaths( graph,0,n-1, all,path);
return all;

    }
};