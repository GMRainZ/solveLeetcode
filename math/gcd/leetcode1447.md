[leetcode1447](https://leetcode.cn/problems/simplified-fractions/description/)

1. Problem Description:

Given an integer n, return a list of all simplified fractions between 0 and 1 (exclusive) such that the denominator is less-than-or-equal-to n. You can return the answer in any order.

 

Example 1:

    Input: n = 2
    Output: ["1/2"]
    Explanation: "1/2" is the only unique fraction with a denominator less-than-or-equal-to 2.

Example 2:

    Input: n = 3
    Output: ["1/2","1/3","2/3"]

Example 3:

    Input: n = 4
    Output: ["1/2","1/3","1/4","2/3","3/4"]
    Explanation: "2/4" is not a simplified fraction because it can be simplified to "1/2".

 

Constraints:

    1 <= n <= 100


<!-- 解题思路 -->
2. Tread:

- 暴力枚举每种可能的分数，然后判断是否满足条件。

3. Code:

```cpp
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for (int denominator = 2; denominator <= n; ++denominator) {
            for (int numerator = 1; numerator < denominator; ++numerator) {
                if (__gcd(numerator, denominator) == 1) {
                    ans.emplace_back(to_string(numerator) + "/" + to_string(denominator));
                }
            }
        }
        return ans;
    }
};

```
