class Solution {
public:
void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited,int i,int j){
    int m=grid.size();
    int n=grid[0].size();
    if(i<0 || i>=m || j<0 || j>=n)
    return;

    if(grid[i][j]=='0' || visited[i][j]==true)
    return;
      
      visited[i][j]=true;
    dfs(grid,visited,i+1,j);
    dfs(grid,visited,i-1,j);
    dfs(grid,visited,i,j+1);
    dfs(grid,visited,i,j-1);
    


}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && visited[i][j]==false)
               {count++;
                 dfs(grid,visited,i,j);
                 }
            }

        }
        return count;
        
    }
};