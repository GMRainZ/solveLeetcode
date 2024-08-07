// class Solution {
//     int digit(int x){
//         int ans=0;
//         while(x){
//             ++ans;
//             x/=10;
//         }
//         return ans;
//     }
// public:
//     string largestNumber(vector<int>& nums) {
//         const int n=nums.size();
//         vector<string>digits;
//         for(int i=0;i<n;++i){
//             digits.emplace_back(to_string(nums[i]));
//         }


//         sort(digits.begin(),digits.end(),[&](const string& i,const string& j)->bool{
//             return i+j>j+i;
//         });        

//         string ans;
//         for(const auto&s:digits){
//             ans+=s;
//         }

//         if(ans[0]=='0'){
//             return "0";
//         }

//         return ans;
//     }
// };