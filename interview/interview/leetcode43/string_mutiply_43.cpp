// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         const int n1=num1.size(),n2=num2.size();

//         string ans(n1+n2,'0');
//         int i,j,t;
//         for(i=n1-1;i>=0;--i){
//             for(j=n2-1;j>=0;--j){
//                 t=(ans[i+j+1]-'0')+(num1[i]-'0') * (num2[j]-'0');
//                 ans[i+j+1]=t%10+'0';
//                 ans[i+j]+=t/10;       
//             }   
//         }


//         for(i=0;i<n1+n2;++i){
//             if(ans[i]!='0'){
//                 return ans.substr(i);
//             }
//         }

//         return "0";
//     }
// };