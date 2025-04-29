[leetcode676](https://leetcode.cn/problems/implement-magic-dictionary/)

1. 题目描述
<div>
Design a data structure that is initialized with a list of different words. Provided a string, you should determine if you can change exactly one character in this string to match any word in the data structure.

Implement the MagicDictionary class:

    MagicDictionary() Initializes the object.
    void buildDict(String[] dictionary) Sets the data structure with an array of distinct strings dictionary.
    bool search(String searchWord) Returns true if you can change exactly one character in searchWord to match any string in the data structure, otherwise returns false.

 

Example 1:

Input

["MagicDictionary", "buildDict", "search", "search", "search", "search"]
[[], [["hello", "leetcode"]], ["hello"], ["hhllo"], ["hell"], ["leetcoded"]]
Output

[null, null, false, true, false, false]

Explanation

MagicDictionary magicDictionary = new MagicDictionary();<br>
magicDictionary.buildDict(["hello", "leetcode"]);<br>
magicDictionary.search("hello"); // return False<br>
magicDictionary.search("hhllo"); // We can change the second 'h' to 'e' to match "hello" so we return True<br>
magicDictionary.search("hell"); // return False<br>
magicDictionary.search("leetcoded"); // return False<br>

 

Constraints:

    1 <= dictionary.length <= 100
    1 <= dictionary[i].length <= 100
    dictionary[i] consists of only lower-case English letters.
    All the strings in dictionary are distinct.
    1 <= searchWord.length <= 100
    searchWord consists of only lower-case English letters.
    buildDict will be called only once before search.
    At most 100 calls will be made to search.


</div>


2. 思路
- 经典的字典树问题
- 创建一个字典树，将所有单词的每个字符都保存下来，然后进行搜索
- 如何搜索？----使用dfs
- 暴力遍历每一个字符，判断该字符是否是当前字符，是则不改，不是则改

3. 代码

```cpp
class MagicDictionary {
private:
    static const int N = 10007; // 预分配足够的空间
    static const int M = 26;
    int tr[N][M];
    bool isEnd[N];
    int idx;
    
public:
    MagicDictionary() {
        memset(tr, 0, sizeof(tr));    // 初始化 Trie 数组
        memset(isEnd, 0, sizeof(isEnd));
        idx = 0;
    }
    
    // 构建字典树
    void buildDict(vector<string> dictionary) {
        for (const string& s : dictionary) {
            add(s);
        }
    }
    

    
    // 搜索入口
    bool search(string searchWord) {
        return query(searchWord, 0, 0, 1);
    }
    
private:
    // 递归查询
    bool query(const string& s, int idx_char, int p_node, int limit) {
        if (limit < 0) return false;
        if (idx_char == s.size()) return isEnd[p_node] && (limit == 0);
        
        int u = s[idx_char] - 'a';
        // 遍历所有可能的子节点
        for (int i = 0; i < 26; ++i) {
            if (tr[p_node][i] == 0) continue; // 跳过空节点
            
            int new_limit = (i == u) ? limit : limit - 1;
            if (query(s, idx_char + 1, tr[p_node][i], new_limit)) {
                return true;
            }
        }
        return false;
    }
        // 插入单词
    void add(const string& s) {
        int p = 0;
        for (char ch : s) {
            int u = ch - 'a';
            if (tr[p][u] == 0) { // 动态分配新节点
                tr[p][u] = ++idx;
                if (idx >= N) throw runtime_error("Trie overflow"); // 越界保护
            }
            p = tr[p][u];
        }
        isEnd[p] = true;
    }
};
```