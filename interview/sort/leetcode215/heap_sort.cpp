// class Solution {
// public:
//     void maxHeapify(vector<int>& arr, int i, int heapSize) {
//         int lchild = i * 2 + 1, rchild = i * 2 + 2, largest = i;
//         if (lchild < heapSize && arr[lchild] > arr[largest]) {
//             largest = lchild;
//         } 
//         if (rchild < heapSize && arr[rchild] > arr[largest]) {
//             largest = rchild;
//         }
//         if (largest != i) {
//             swap(arr[i], arr[largest]);
//             maxHeapify(arr, largest, heapSize);
//         }
//     }

//     void buildMaxHeap(vector<int>& a, int heapSize) {
//         for (int i = heapSize / 2; i >= 0; --i) {
//             maxHeapify(a, i, heapSize);
//         } 
//     }

//     int findKthLargest(vector<int>& nums, int k) {
//         int heapSize = nums.size();
//         buildMaxHeap(nums, heapSize);

//         const int n=nums.size();
//         for (int i = n - 1; i > n - k; --i) {
//             swap(nums[0], nums[i]);
//             --heapSize;
//             maxHeapify(nums, 0, heapSize);
//         }
//         return nums[0];
//     }
// };

