// class Solution {
//     bool IsOut(int&row,int&col,int&n,int&m)
//     {
//         return row<0||col<0||row>=n||col>=m;
//     }
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int dx[]{0,0,1,-1},dy[]{1,-1,0,0};
//         int n=grid.size(),m=grid[0].size(),ans=0;
//         queue<pair<int,int>>neighbors;
//         for(int i=0;i<n;++i)
//             for(int j=0;j<m;++j)
//             {
//                 if(grid[i][j]=='0')continue;

//                 ++ans;
//                 grid[i][j]='0';
//                 neighbors.emplace(i,j);
//                 while(neighbors.size())
//                 {
//                     auto[row,col]=neighbors.front();
//                     neighbors.pop();

//                     for(int k=0;k<4;++k)
//                     {
//                         int tx=row+dx[k],ty=col+dy[k];
//                         if(!IsOut(tx,ty,n,m)&&grid[tx][ty]=='1')
//                             neighbors.emplace(tx,ty),grid[tx][ty]='0';
//                     }

//                 }
//             }   

//         return ans;
//     }
// };