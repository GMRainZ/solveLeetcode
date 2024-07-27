// class Solution {
//     /*********堆排序代码************/
//     void maxHeapify(vector<int>&nums,int i,int heap_size){
//         int lchild=i*2+1,rchild=i*2+2,largest=i;
//         if(lchild<heap_size && nums[lchild]>nums[largest])largest=lchild;
//         if(rchild<heap_size && nums[rchild]>nums[largest])largest=rchild;

//         if(i!=largest){
//             swap(nums[i],nums[largest]);
//             maxHeapify(nums,largest,heap_size);
//         }
//     }

//     void build_max_heap(vector<int>&nums,int heap_size){
//         for(int i=heap_size/2;i>=0;--i){
//             maxHeapify(nums,i,heap_size);
//         }
//     }

//     void heap_sort(vector<int>&nums){
//         int heap_size=nums.size();
//         build_max_heap(nums,heap_size);

//         for(int i=heap_size-1;i>=0;--i){
//             swap(nums[0],nums[i]);
//             --heap_size;
//             maxHeapify(nums,0,heap_size);
//         }
//     }


//     /******************************/
//     /*二分快排*/
//     void quick_sort(vector<int>&nums,int lo,int hi){
//         if(lo >= hi)return;

//         int pivot=nums[lo],i=lo-1,j=hi+1;
//         while(i<j){
//             do ++i;while(nums[i]<pivot);
//             do --j;while(nums[j]>pivot);
//             if(i<j){
//                 swap(nums[i],nums[j]);
//             }
//         }

//         quick_sort(nums,lo,j);
//         quick_sort(nums,j+1,hi);
//     }
//     /*三向切分的快排*/
//     void quick_sort_3(vector<int>&nums,int lo,int hi){
//         if(lo>=hi)return;

//         int pivot=nums[lo],lt=lo,i=lo+1,gt=hi;
//         while(i<=gt){
//             if(nums[i]<pivot)swap(nums[i++],nums[lt++]);
//             else if(nums[i]>pivot)swap(nums[i],nums[gt--]);
//             else ++i;
//         }

//         quick_sort(nums,lo,lt-1);
//         quick_sort(nums,gt+1,hi);
//     }

//     /*选择排序*/
//     void select_sort(vector<int>&arr){
//         int n = arr.size();
//         for (int i = 0; i < n - 1; ++i) {
//             // 找到从i到n-1中最小元素的索引
//             int min_index = i;
//             for (int j = i + 1; j < n; ++j) {
//                 if (arr[j] < arr[min_index]) {
//                     min_index = j;
//                 }
//             }
//             // 将找到的最小元素与第i个位置的元素交换
//             std::swap(arr[i], arr[min_index]);
//         }
//     }
//     /*插入排序*/
//     void insert_sort(vector<int>&arr){
//         int n = arr.size();
//         for (int i = 1; i < n; i++) {
//             int key = arr[i]; // 当前要插入的元素
//             int j = i - 1;

//             // 将arr[i]与已排序好的数组从后向前比较，如果比arr[i]大，就向后移动
//             while (j >= 0 && arr[j] > key) {
//                 arr[j + 1] = arr[j]; // 将元素向后移动
//                 j = j - 1;
//             }
//             arr[j + 1] = key; // 将key插入到正确的位置
//         }
        
//     }
//     /*冒泡排序*/
//     void bubble_sort(vector<int>&nums){
//         const int n=nums.size();
//         for(int i=0;i+1<n;++i)
//             for(int j=i+1;j>0 && nums[j]<nums[j-1];--j)
//                 swap(nums[j],nums[j-1]);
//     }
//     /*计数排序*/
//     void count_sort(vector<int>&nums){
//         const int n = nums.size();
//         int minNum = INT_MAX, maxNum = INT_MIN,i;
//         // 找到数组中的最小和最大元素
//         for (i = 0; i < n; ++i) {
//             if (nums[i] < minNum) minNum = nums[i];
//             if (nums[i] > maxNum) maxNum = nums[i];
//         }
//         // 构造计数数组
//         const int cnt_size=maxNum - minNum + 1;
//         vector<int> counts(maxNum - minNum + 1, 0);
//         for (i = 0; i < n; ++i) {
//             ++counts[nums[i] - minNum];
//         }
        
//         int index=0;
//         for(i=0;i<cnt_size;++i){
//             while(counts[i]){
//                 nums[index++]=i+minNum;
//                 --counts[i];
//             }
//         }
//     }
//     /*桶排序*/
//     void bucket_sort(vector<int>&nums){
//         // BucketSort 桶排序
//         int n = nums.size();
//         // 获取数组的最小值和最大值
//         int maxNum = nums[0], minNum = nums[0];
//         for (int i = 1; i < n; ++i) {
//             if (nums[i] > maxNum) maxNum = nums[i];
//             if (nums[i] < minNum) minNum = nums[i];
//         }
//         // 初始化桶
//         int bucketNum = 5, bucketSize = (maxNum - minNum) / bucketNum + 1;
//         vector<vector<int>> buckets(bucketNum, vector<int>(0));
//         // 小至大分桶
//         for (int num : nums) {
//             int bucketIndex = (num - minNum) / bucketSize;
//             buckets[bucketIndex].emplace_back(num);
//         }
//         // 桶内排序
//         for (int i = 0; i < buckets.size(); ++i) {
//             sort(buckets[i].begin(), buckets[i].end());
//         }
//         // 从桶中依次取数
//         int index = 0;
//         for (auto& bucket : buckets) {
//             for (int num : bucket) {
//                 nums[index++] = num;
//             }
//         }
//     }
//     /*基数排序*/
//     void radix_sort(vector<int>&nums){
//         const int n=nums.size();
//         int i,min_num=INT_MAX,max_num=INT_MIN;
//         for(i=0;i<n;++i)
//         {
//             if(nums[i]>max_num)max_num=nums[i];
//             if(nums[i]<min_num)min_num=nums[i];
//         }
//         for(i=0;i<n;++i)nums[i]-=min_num;
//         max_num-=min_num;

//         int max_digit=0;
//         while(max_num){
//             ++max_digit;
//             max_num/=10;
//         }

//         int digit=1,base=1;
//         vector<queue<int>>buckets(10);
//         for(;digit<=max_digit;++digit,base*=10){
//             for(auto&x:nums){
//                 buckets[x/base%10].emplace(x);
//             }
        
//             nums.clear();
//             for(auto&bucket:buckets){
//                 while(!bucket.empty()){
//                     nums.emplace_back(bucket.front());
//                     bucket.pop();
//                 }
//             }
//         }
//         for(i=0;i<n;++i)nums[i]+=min_num;
//     }
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         bucket_sort(nums);


//         return nums;
//     }
// };