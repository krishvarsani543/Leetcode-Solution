class Solution {
public:

void dfs(int i,int j,int m,int n,vector<vector<char>>& grid,vector<vector<bool>>& visit){
    if(i>=m||j>=n||i<0||j<0||visit[i][j]||grid[i][j]=='0')
    return;
visit[i][j]=true;
    dfs(i-1,j,m,n,grid,visit);
    dfs(i+1,j,m,n,grid,visit);
    dfs(i,j-1,m,n,grid,visit);
    dfs(i,j+1,m,n,grid,visit);

}

    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>> visit(m,vector<bool>(n,false));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'&&!visit[i][j]){
                    
                   ans++;
                    dfs(i,j,m,n,grid,visit);
                     
                }
            }
        }
        return ans;
    }
};