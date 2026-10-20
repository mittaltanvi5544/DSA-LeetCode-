class Solution {
public:
void dfs(vector<vector<char>> &grid,int r, int c){
    int n=grid.size();
    int m=grid[0].size();
    if(r<0 || c<0 || r>=n || c>=m || grid[r][c]=='0')
    return ;
    if(grid[r][c]=='0')
    return;
    
    grid[r][c]='0';

    if(r<n-1 && grid[r+1][c]=='1')
    dfs(grid,r+1,c);

    if(c>0 && grid[r][c-1]=='1')
    dfs(grid,r,c-1);

    if(c<m-1 && grid[r][c+1]=='1')
    dfs(grid,r,c+1);

    if(r>0 && grid[r-1][c]=='1')
    dfs(grid,r-1,c);

     

     }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int count=0;

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1')
            {
                count++;
                dfs(grid, i, j);
                }
        }
       }
       return count;
    }
};