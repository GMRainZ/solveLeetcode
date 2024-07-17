// class Solution 
// {
// public:
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
//     {
//         map<int,int>diff;
//         for(const auto&flower:flowers)
//         {
//             ++diff[flower[0]];
//             --diff[flower[1]+1];
//         }

//         const int n= people.size();
//         vector<int>id(n);

//         iota(id.begin(),id.end(),0);
//         sort(id.begin(),id.end(),[&](int i,int j){return people[i]<people[j];});


//         auto it=diff.begin();
//         int sum=0;
//         for(int i:id)
//         {
//             while(it!=diff.end() && it->first<=people[i])
//                 sum+=it++->second;
//             people[i]=sum;
//         }

//         return people;
//     }
// };