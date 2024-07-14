// class MyCalendarThree 
// {
//     unordered_map<int,int>tree;
//     unordered_map<int,int>lazy;

//     void update(int start, int end, int l, int r, int node_idx)
//     {
//         if(l > end || r < start)return;
//         else if(start <= l && end >= r)
//         {
//             ++tree[node_idx];
//             ++lazy[node_idx];
//         }
//         else
//         {
//             int mid=(l+r)>>1;
//             int left_idx=node_idx*2,right_idx=left_idx+1;

//             update(start,end,l,mid,left_idx);
//             update(start,end,mid+1,r,right_idx);

//             tree[node_idx]=lazy[node_idx]+max(tree[left_idx],tree[right_idx]);
//         }
//     }
// public:
//     MyCalendarThree() 
//     {

//     }
    
//     int book(int start, int end) 
//     {
//         update(start,end-1,0,1e9,1);
//         return tree[1];
//     }
// };

// /**
//  * Your MyCalendarThree object will be instantiated and called as such:
//  * MyCalendarThree* obj = new MyCalendarThree();
//  * int param_1 = obj->book(startTime,endTime);
//  */