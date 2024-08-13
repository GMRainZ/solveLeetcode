// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left=0,right=height.size()-1,ans=0,area;

//         while(left<right){
//             area=min(height[left],height[right])*(right-left);
//             ans=max(ans,area);

//             height[left]<height[right]?++left:--right;
//         }


//         return ans;
//     }
// };