#include<vector>
#include<iostream>

using namespace std;

class Solution 
{
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) 
    {
        const int rows=mat.size(),cols=mat[0].size(),maxLength=min(rows,cols);  

        vector<vector<int>> prefixSum(rows+1,vector<int>(cols+1,0));
        int i,j;

        //construct the prefix sum 2D array.
        for(i=1;i<=rows;++i)
            for(j=1;j<=cols;++j)
                prefixSum[i][j]=prefixSum[i-1][j]+prefixSum[i][j-1]-prefixSum[i-1][j-1]+mat[i-1][j-1]; 
                //2D Prefix Sum.
        
        int ans=0,lo=1,hi=maxLength,mid;
        //binary search.  lo=1 because we need at least a 1x1 sub-matrix.  hi=maxLength because we need at most a maxLength x maxLength sub-matrix.  mid is the midpoint.  
        bool find;
        while(lo<hi)  //binary search.  lo<=hi is the condition.  lo and hi are the boundaries.  mid is the midpoint.
        {
            mid=(lo+hi+1)>>1;
            find=false;
            for(i=0;i+mid<=rows;++i)
            {
                for(j=0;j+mid<=cols;++j)
                {
                    if(prefixSum[i+mid][j+mid]-prefixSum[i][j+mid]-prefixSum[i+mid][j]+prefixSum[i][j]>threshold)  //2D Prefix Sum.
                        continue;
                    find=true;             
                }
            }

            if(find)ans=lo,lo=mid;
            else hi=mid-1;
        }
        return ans; 
    }
};



/*
 for (int i = 1; i <= m - mid + 1; ++i) {
    for (int j = 1; j <= n - mid + 1; ++j) {
        if (getRect(P, i, j, i + mid - 1, j + mid - 1) <= threshold) {

int getRect(const vector<vector<int>>& P, int x1, int y1, int x2, int y2) {
    return P[x2][y2] - P[x1 - 1][y2] - P[x2][y1 - 1] + P[x1 - 1][y1 - 1];
}
*/