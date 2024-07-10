// class Solution 
// {
//     int cnt25[1001][2];
//     void init()
//     {
//         memset(cnt25,0,sizeof cnt25);

//         for(int i=2;i<=1000;++i)
//         {
//             if(i%2==0)cnt25[i][0]=cnt25[i/2][0]+1;
//             if(i%5==0)cnt25[i][1]=cnt25[i/5][1]+1;
//         }
//     }
// public:
//     int maxTrailingZeros(vector<vector<int>>& grid) 
//     {
//         init();

//         const int rows=grid.size(),cols=grid[0].size();

//         int s[rows][cols+1][2];
//         memset(s,0,sizeof s);

//         int i,j,ans=0;
//         for(i=0;i<rows;++i)
//         {
//             for(j=0;j<cols;++j)
//             {
//                 s[i][j+1][0]=s[i][j][0]+cnt25[grid[i][j]][0];
//                 s[i][j+1][1]=s[i][j][1]+cnt25[grid[i][j]][1];
//             }
//         }



//         int s2,s5;//列方向上的2,5的和        
//         for(j=0;j<cols;++j)
//         {
//             //从上到下
//             for(i=0,s2=0,s5=0;i<rows;++i)
//             {
//                 s2+=cnt25[grid[i][j]][0];
//                 s5+=cnt25[grid[i][j]][1];

//                 ans=max(ans,max(min(s2+s[i][j][0],s5+s[i][j][1]),
//                     min(s5+s[i][cols][1]-s[i][j+1][1],s2+s[i][cols][0]-s[i][j+1][0])));
//             }

//             for(i=rows-1,s2=0,s5=0;i>=0;--i)
//             {
//                 s2+=cnt25[grid[i][j]][0];
//                 s5+=cnt25[grid[i][j]][1];
            
//                 ans=max(ans,max(min(s2+s[i][j][0],s5+s[i][j][1]),
//                     min(s5+s[i][cols][1]-s[i][j+1][1],s2+s[i][cols][0]-s[i][j+1][0])));
//             }
//         }


//         return ans;
//     }
// };