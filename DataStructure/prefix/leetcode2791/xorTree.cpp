// class Solution 
// {
// public:
//     long long countPalindromePaths(vector<int>& parent, string s) 
//     {
//         const int n=parent.size();
//         int i;

//         vector<vector<int>>graph(n);
//         for(i=1;i<n;++i)graph[parent[i]].emplace_back(i);

//         long long ans=0;
//         unordered_map<int,int>cnt{{0,1}};

//         function<void(int,int)>dfs=[&](int v,int xor_)
//         {
//             for(const auto&w:graph[v])
//             {
//                 int x=xor_^(1<<(s[w]-'a'));
//                 ans+=cnt.contains(x)?cnt[x]:0;
//                 for(int i=0;i<26;++i)
//                     ans+=cnt.contains(x^(1<<i))?cnt[x^(1<<i)]:0;
            
//                 ++cnt[x];
//                 dfs(w,x);
//             }
//         };

//         dfs(0,0);


//         return ans;
//     }
// };