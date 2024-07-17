// class Solution 
// {
//     void splitPainting(const vector<vector<int>>& segments,vector<vector<int>>&ans) 
//     {
//         const int n=segments.size();

//         map<int,int>diff;
//         for(const auto&segment:segments)
//         {
//             diff[segment[0]]+=1;
//             diff[segment[1]+1]-=1;
//         }

//         int last=0,color=0;
//         for(const auto&[pos,d]:diff)
//         {
//             if(color)ans.push_back({last,pos,color});
        
//             last=pos;
//             color+=d;
//         }
//         // return ans;
//     }
// public:
//     vector<int> fullBloomFlowers_bad_split(vector<vector<int>>& flowers, vector<int>& people) 
//     {
//         vector<vector<int>>regions;
//         splitPainting(flowers,regions);

//         for(const auto&region:regions)
//         {
//             printf("[%d , %d]   %d\n",region[0],region[1],region[2]);
//         }


//         auto cmp=[](const vector<int>&lst,int rst){return lst[1]<rst;};

//         vector<int>ans;
//         for(const auto&visit_time:people)
//         {
//             auto it = lower_bound(regions.cbegin(),regions.cend(),visit_time,cmp)-regions.cbegin();
//             if(regions[it][0]>visit_time)ans.emplace_back(0);
//             else ans.emplace_back(regions[it][2]);
//         }

//         return ans;
//     }
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people)
//     {
//         const int n=flowers.size();

//         vector<int>starts(n),ends(n);
//         for(int i=0;i<n;++i)
//         {
//             starts[i]=flowers[i][0];
//             ends[i]=flowers[i][1];
//         }
        

//         sort(starts.begin(),starts.end());
//         sort(ends.begin(),ends.end());

//         vector<int>ans;
//         for(int&visit_time:people)
//         {
//             visit_time=(upper_bound(starts.begin(), starts.end(), visit_time) - starts.begin()) -
//                 (lower_bound(ends.begin(), ends.end(), visit_time) - ends.begin());
//         }
//         return people;
//     } 
// };