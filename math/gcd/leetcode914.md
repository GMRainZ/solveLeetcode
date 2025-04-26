[leetcode914](https://leetcode.cn/problems/x-of-a-kind-in-a-deck-of-cards/description/)

1. 题目描述

<div>
You are given an integer array deck where deck[i] represents the number written on the ith card.

Partition the cards into one or more groups such that:

    Each group has exactly x cards where x > 1, and
    All the cards in one group have the same integer written on them.

Return true if such partition is possible, or false otherwise.
</div>

2. 解题思路
- 我们想想暴力的时候，我们会怎么做？
- 我们首先需要每个数字出现的次数，然后暴力的枚举每一种可能的分法（也就是每组的个数），然后判断是否模尽。
- 这就给优化方法启示了
- 这道题的关键在于，能否将这个问题进行转换
- 目标是把相同的数字放在一起，且需要满足数目一样
- 实际上我们如果能获得所有数字的出现次数，然后再取一下gcd，问题就解决了。

3. code

```cpp
class Solution {
    int cnt[10000];
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        for (auto x: deck) cnt[x]++;
        int g = -1;
        for (int i = 0; i < 10000; ++i) {
            if (cnt[i]) {
                if (~g) {
                    g = gcd(g, cnt[i]);
                } else {
                    g = cnt[i];
                }
            }
        }
        return g >= 2;
    }
};

```