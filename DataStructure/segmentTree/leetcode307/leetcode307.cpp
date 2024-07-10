// class NumArray {
//     vector<int>nums;
//     vector<int>tree;
//     //int n;

//     int prefixSum(int i)
//     {
//         int s=0;
//         for(;i>0;i&=i-1)s+=tree[i];
//         return s;
//     }

// public:
//     NumArray(vector<int>& t):nums(t.size()),tree(t.size()+1)
//     {
//         int i,n=t.size();
//         for(i=0;i<n;++i)update(i,t[i]);
//     }
    
//     void update(int index, int val) 
//     {
//         const int n=tree.size();
//         int delta=val-nums[index];

//         nums[index]=val;

//         for(++index; index<n; index+=index&-index)tree[index]+=delta;
//     }
    
//     int sumRange(int left, int right) 
//     {
//         return prefixSum(right+1)-prefixSum(left);
//     }
// };

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */