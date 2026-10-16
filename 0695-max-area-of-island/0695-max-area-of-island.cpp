class Solution {
public:

int dfs(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<bool>>&visit)
{
      if(i<0||j<0||i>=m||j>=n||visit[i][j]||grid[i][j]!=1)
      return 0;
visit[i][j]=true;
int count=1;
count+=dfs(i+1,j,m,n,grid,visit);
count+=dfs(i-1,j,m,n,grid,visit);
 count+=dfs(i,j+1,m,n,grid,visit);
count+=dfs(i,j-1,m,n,grid,visit);

return count;
}

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
       int maxi=0;
      vector<vector<bool>> visit(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
             maxi=max(maxi,dfs(i,j,m,n,grid,visit));   
            }
        }
        return maxi;
    }
};