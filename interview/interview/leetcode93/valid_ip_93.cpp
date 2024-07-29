// class Solution {
//     static constexpr int SEG_COUNT=4; 

// public:
//     vector<string> restoreIpAddresses(const string s) {
//         const int n=s.size();
//         vector<string>ans;

//         string ip_address;
//         vector<string>segment(SEG_COUNT);
//         int segment_count=0;
//         function<void(int)>dfs=[&](int st_pos){
//             if(segment_count==SEG_COUNT){
//                 if(st_pos==n){
//                     ip_address="";
//                     for(int i=0;i<SEG_COUNT;++i){
//                         ip_address+=segment[i];
//                         if(i+1!=SEG_COUNT)ip_address+='.';
//                     }
//                     ans.emplace_back(ip_address);
//                 }
                
//                 return;
//             }

//             if(st_pos>=n){
//                 return;
//             }

//             if(s[st_pos]=='0'){
//                 segment[segment_count++]=s.substr(st_pos,1);

//                 dfs(st_pos+1);

//                 // segment.pop_back();
//                 --segment_count;
//                 return;
//             }

//             for(int len=1;len<=3;++len){
//                 string ts=s.substr(st_pos,len);
//                 int value=stoi(ts);
//                 if(value<=255 && value>0){
//                     segment[segment_count++]=ts;
//                     dfs(st_pos+len);
//                     // segment.pop_back();
//                     --segment_count;
//                 }else{
//                     break;
//                 }
//             }
//         };
//         dfs(0);


//         return ans;
//     }
// };