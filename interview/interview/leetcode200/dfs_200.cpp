// class Solution {
//     bool IsOut(int&row,int&col,int&n,int&m)
//     {
//         return row<0||col<0||row>=n||col>=m;
//     }
//     void dfs(vector<vector<char>>&grid,int row,int col,int n,int m,int dx[],int dy[])
//     {
//         //++ans;
//         grid[row][col]='0';
//         for(int i=0;i<4;++i)
//         {
//             int tx=row+dx[i],ty=col+dy[i];
//             if(!IsOut(tx,ty,n,m)&&grid[tx][ty]=='1')
//             dfs(grid,tx,ty,n,m,dx,dy);
//         }
//     }
// public:
//     int numIslands(vector<vector<char>>& grid) 
//     {
//         int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
//         int ans=0,n=grid.size(),m=grid[0].size();
//         for(int i=0;i<n;++i)
//             for(int j=0;j<m;++j)
//                 if(grid[i][j]=='1')++ans,dfs(grid,i,j,n,m,dx,dy);
//         return ans;
//     }
// };