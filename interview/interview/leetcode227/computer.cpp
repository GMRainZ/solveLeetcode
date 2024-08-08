// class Solution {
// public:
//     // 使用 map 维护一个运算符优先级
//     std::map<char, int> map = {
//         {'-', 1},
//         {'+', 1},
//         {'*', 2},
//         {'/', 2},
//         {'%', 2},
//         {'^', 3}
//     };

//     int calculate(std::string s) {
//         // 将所有的空格去掉
//         s.erase(remove(s.begin(), s.end(), ' '), s.end());
//         int n = s.size();
//         // 存放所有的数字
//         std::deque<int> nums;
//         // 为了防止第一个数为负数，先往 nums 加个 0
//         nums.push_back(0);
//         // 存放所有「非数字以外」的操作
//         std::deque<char> ops;
//         for (int i = 0; i < n; ++i) {
//             char c = s[i];
//             if (c == '(') {
//                 ops.push_back(c);
//             } else if (c == ')') {
//                 // 计算到最近一个左括号为止
//                 while (!ops.empty()) {
//                     if (ops.back() != '(') {
//                         calc(nums, ops);
//                     } else {
//                         ops.pop_back();
//                         break;
//                     }
//                 }
//             } else {
//                 if (isNumber(c)) {
//                     int u = 0;
//                     int j = i;
//                     // 将从 i 位置开始后面的连续数字整体取出，加入 nums
//                     while (j < n && isNumber(s[j])) u = u * 10 + (s[j++] - '0');
//                     nums.push_back(u);
//                     i = j - 1;
//                 } else {
//                     // if (i > 0 && (s[i - 1] == '(' || s[i - 1] == '+' || s[i - 1] == '-')) {
//                     //     nums.push_back(0);
//                     // }
//                     // 有一个新操作要入栈时，先把栈内可以算的都算了
//                     // 只有满足「栈内运算符」比「当前运算符」优先级高/同等，才进行运算
//                     while (!ops.empty() && ops.back() != '(') {
//                         char prev = ops.back();
//                         if (map[prev] >= map[c]) {
//                             calc(nums, ops);
//                         } else {
//                             break;
//                         }
//                     }
//                     ops.push_back(c);
//                 }
//             }
//         }
//         // 将剩余的计算完
//         while (!ops.empty()) calc(nums, ops);
//         return nums.back();
//     }

// private:
//     void calc(std::deque<int>& nums, std::deque<char>& ops) {
//         if (nums.size() < 2) return;
//         if (ops.empty()) return;
//         int b = nums.back(); nums.pop_back();
//         int a = nums.back(); nums.pop_back();
//         char op = ops.back(); ops.pop_back();
//         int ans = 0;
//         switch (op) {
//             case '+': ans = a + b; break;
//             case '-': ans = a - b; break;
//             case '*': ans = a * b; break;
//             case '/': ans = a / b; break;
//             case '^': ans = static_cast<int>(pow(a, b)); break;
//             case '%': ans = a % b; break;
//         }
//         nums.push_back(ans);
//     }

//     bool isNumber(char c) {
//         return isdigit(c);
//     }
// };