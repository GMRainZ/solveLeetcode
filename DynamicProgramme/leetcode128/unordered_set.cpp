#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 建立一个存储所有数的哈希集合，同时起到去重功能
        unordered_set<int> set;
        for (int num : nums) {
            set.insert(num);
        }

        int ans = 0;
        // 遍历去重后的所有数字
        for (int num : set) {
            int cur = num;
            // 只有当num-1不存在时，才开始向后遍历num+1，num+2，num+3......
            if (set.find(cur - 1) == set.end()) {
                while (set.find(cur + 1) != set.end()) {
                    cur++;
                }
            }
            // [num, cur]之间是连续的，数字有cur - num + 1个
            ans = max(ans, cur - num + 1);
        }
        return ans;
    }
};
