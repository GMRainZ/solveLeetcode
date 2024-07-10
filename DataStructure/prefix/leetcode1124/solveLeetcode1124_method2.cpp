// class Solution {
// public:
//     int longestWPI(vector<int>& hours) 
//     {
//         const int n=hours.size();
//         //printf("********************%d\n",n);
//         //stack<int>st;
//         vector<int>prefix(n+1),st;
//         st.emplace_back(0);


//         int i;
//         for(i=1;i<=n;++i)
//         {
//             //printf("********************\n");

//             prefix[i] = prefix[i-1] + (hours[i-1] > 8 ? 1: -1);

//             if(prefix[i]<prefix[st.back()])st.emplace_back(i);
//         }


//         //printf("********************\n");

//         int ans=0;
//         for(i=n;i;--i)
//         {
//             while(!st.empty() && prefix[i]>prefix[st.back()])
//             {
//                 ans=max(ans,i-st.back());
//                 st.pop_back();
//             }
//         }

//         return ans;
//     }
// };