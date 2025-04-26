[leetcode208](https://leetcode.cn/problems/implement-trie-prefix-tree/)

Trie（发音类似 "try"）或者说 前缀树 是一种树形数据结构，用于高效地存储和检索字符串数据集中的键。这一数据结构有相当多的应用情景，例如自动补完和拼写检查。

**code**
```cpp
class Trie {
    int end_cnt;
    int pass_cnt;
    Trie*next[26];
public:
    Trie() {
        memset(next,0,sizeof next);
        pass_cnt=0;
        end_cnt=0;
    }
    
    void insert(string word) {
        Trie*node=this;
        
        for(const char&c:word){
            if(!node->next[c-'a']){
                ++node->pass_cnt;
                node->next[c-'a']=new Trie;
            }
            node=node->next[c-'a'];
        }
        ++node->end_cnt;
    }
    
    int search(string word) {
        Trie*node=this;
        for(const char&c:word){
            if(node->next[c-'a']){
                node=node->next[c-'a'];
            }else{
                return false;
            }
        }
        return node->end_cnt;
    }
    
    int startsWith(string prefix) {
        Trie*node=this;
        for(const char&c:prefix){
            node=node->next[c-'a'];
            if(!node){
                // node=node->next[c-'a'];
                return false;
            }
        }
        return pass_cnt;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
```