[leetcode648](https://leetcode.com/problems/replace-words/)

1. 题目描述
<div>
In English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word derivative. For example, when the root "help" is followed by the word "ful", we can form a derivative "helpful".

Given a dictionary consisting of many roots and a sentence consisting of words separated by spaces, replace all the derivatives in the sentence with the root forming it. If a derivative can be replaced by more than one root, replace it with the root that has the shortest length.

Return the sentence after the replacement.

 

Example 1:

Input: dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"<br>
Output: "the cat was rat by the bat"

Example 2:

Input: dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs"<br>
Output: "a a b c"

 

Constraints:

    1 <= dictionary.length <= 1000
    1 <= dictionary[i].length <= 100
    dictionary[i] consists of only lower-case letters.
    1 <= sentence.length <= 106
    sentence consists of only lower-case letters and spaces.
    The number of words in sentence is in the range [1, 1000]
    The length of each word in sentence is in the range [1, 1000]
    Every two consecutive words in sentence will be separated by exactly one space.
    sentence does not have leading or trailing spaces.


</div>

2. 解题思路
<div>

-  Trie树
- 遇到终止早停即可

</div>
3. code
‵‵‵cpp
class Solution {
    static const int N=100007;
    int trie[N][26];
    int pass[N],end[N];

    int cnt;

    void buildDict(const vector<string>&dictionary) {
        for(const auto&word : dictionary){
            const int n=word.size();
            int i,cur;
            for(i=0,cur=0;i<n;++i){
                ++pass[cur];
                if(trie[cur][word[i]-'a']==0){
                    trie[cur][word[i]-'a']=++cnt;
                }
                cur=trie[cur][word[i]-'a'];
            }
            ++end[cur];
        }
    }
    
    string query(const string&word){
        int cur=0,i;
        const int n=word.size();
        for(i=0;i<n;++i){
            if(trie[cur][word[i]-'a']==0){
                break;
            }

            if(end[trie[cur][word[i]-'a']]){
                return word.substr(0,i+1);
            }

            cur=trie[cur][word[i]-'a'];
        }
        

        return word;
    }
public:
    Solution(){
        memset(trie,0,sizeof trie);
        memset(pass,0,sizeof pass);
        memset(end,0,sizeof end);
        cnt=0;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        buildDict(dictionary);

        // 分割句子并处理每个单词
        istringstream iss(sentence);
        string word, result;
        while (iss >> word) {
            if (!result.empty()) result += " ";
            result += query(word);
        }
        return result;
    }
};
```