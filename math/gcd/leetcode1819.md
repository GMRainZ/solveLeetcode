[leetcode1819](https://leetcode.cn/problems/number-of-different-subsequences-gcds/description/)

1. 题目描述
You are given an array nums that consists of positive integers.

The GCD of a sequence of numbers is defined as the greatest integer that divides all the numbers in the sequence evenly.

    For example, the GCD of the sequence [4,6,16] is 2.

A subsequence of an array is a sequence that can be formed by removing some elements (possibly none) of the array.

    For example, [2,5,10] is a subsequence of [1,2,1,2,4,1,5,10].

Return the number of different GCDs among all non-empty subsequences of nums.

说白了，就是找所有子序列的最大公约数，然后统计一下有多少个不同的最大公约数。

2. 解题思路

- 我们不妨去遍历所有可能的最大公约数
- 如果说，某个子序列的最大公约数是 x，那么一定有这些子序列中的数都是x的倍数
- 那么就显然了，我们只需要遍历所有的可能的最大公约数，然后统计一下有多少个子序列的最大公约数是这个数，就OK了

3. 为什么不会超时
 
<!-- 添加证明图片 -->
<img src="../../../static/images/Screenshot from 2025-04-26 15-54-51.png" alt="image.png" style="zoom:100%;" />

4. 代码

```cpp
class Solution {

public:

    int countDifferentSubsequenceGCDs(vector<int>& nums) {

        int mx = ranges::max(nums);

        vector<int> has(mx + 1);

        for (int x : nums) {

            has[x] = true;

        }

        

        int ans = 0;

        for (int i = 1; i <= mx; i++) {

            int g = 0; // 0 和任何数 x 的最大公约数都是 x

            for (int j = i; j <= mx && g != i; j += i) { // 枚举 i 的倍数 j

                if (has[j]) { // 如果 j 在 nums 中

                    g = __gcd(g, j); // 更新最大公约数

                    // 注：__gcd 比 gcd 更快

                }

            }

            if (g == i) {

                ans++; // 找到一个答案

            }

        }

        return ans;

    }

};

```