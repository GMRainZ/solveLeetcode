// class Solution {
// public:
//     string shiftingLetters(string s, vector<vector<int>>& shifts) {
//         vector<int> diff( s.size()+1 );
//         for(auto & t : shifts )
//         {
//             if( 0==t[2] )
//             {
//                 diff[ t[0] ]--;
//                 diff[ t[1]+1 ]++;      
//             }
//             else
//             {
//                 diff[ t[0] ]++;
//                 diff[ t[1] +1]--; 
//             }
//         }

//         for(int i=1; i<s.size(); ++i)
//         {
//             diff[i]+=diff[i-1];
//             diff[i]%=26;
//         }

//         for(int i=0; i<s.size(); ++i)
//         {
//             //核心的地方，如何处理取模
//             int c = s[i] - 'a';
//             c = ((c + diff[i]) % 26 + 26) % 26;
//             s[i] = (char) (c + 'a');
//         }

//         return s;
//     }
// };