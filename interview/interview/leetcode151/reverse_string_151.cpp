// class Solution {
// public:
//     string reverseWords(string s) {
//         const int n=s.size();
//         int i,j,start;

//         for(i=0;s[i]==' ' && i<n;++i);
//         start=i;
//         for(j=n-1;s[j]==' ' && j>=0;--j);


//         string ans;
//         for(i=j;j>=start;){
//             // printf("\n");
//             for(;i>=start&&s[i]!=' ';--i)
//                 /*printf("%d ",i)*/;
//             ans+=s.substr(i+1,j-i);
//             if(i>=start)ans+=" ";
//             // cout<<ans<<endl;
//             // printf("\n");
//             for(;i>=start&&s[i]==' ';--i)
//                 /*printf("%d ",i)*/;
//             j=i;
//         }


//         return ans;
//     }
// };