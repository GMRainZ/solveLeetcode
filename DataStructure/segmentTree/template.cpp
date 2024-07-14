// 线段树代码

#include <iostream>

#include <vector>

using namespace std;



void build_tree(vector<int>& arr, vector<int>& tree, int start, int end, int node_idx)

{

    //递归的出口，也就是到了叶子节点

    if(start == end) {

        tree[node_idx] = arr[start];

    } else {

        //找到左子树的节点(2*node_idx)
        //找到右子树的节点(2*node_idx+1)

        //在数组内维持一种堆的结构
        int left_node = 2*node_idx, right_node = 2*node_idx + 1;

        int mid = (start + end) / 2;

        //将树进行分割，然后左右递归建树

        build_tree(arr, tree, start, mid, left_node);

        build_tree(arr, tree, mid+1, end, right_node);

        tree[node_idx] = tree[left_node] + tree[right_node];

    }

}



int query(vector<int>& arr, vector<int>& tree, int start, int end, int l, int r, int node_idx)

{
    //情况一
    if(l > end || r < start) {
        return 0;
    } else if (l <= start && end <= r) { //情况二
        return tree[node_idx];
    } else {

        //递归查询
        //找到左子树的节点(2*node_idx)
        //找到右子树的节点(2*node_idx+1)

        int left_node = 2*node_idx, right_node = 2*node_idx + 1;
        int mid = (start + end) / 2;

        //将树进行分割，然后左右递归查询
        int left_sum = query(arr, tree, start, mid, l, r, left_node);
        int right_sum = query(arr, tree, mid+1, end, l, r, right_node);
        return left_sum + right_sum;
    }
}



void update(vector<int>& arr, vector<int>& tree, int start, int end, int node_idx, int update_idx, int val)
{
    //递归的出口，也就是到了叶子节点, 更新其值
    if(start == end) {
        tree[node_idx] = arr[start] = val;
    } else {
        //找到左子树的节点(2*node_idx)
        //找到右子树的节点(2*node_idx+1)
        int left_node = 2*node_idx, right_node = 2*node_idx + 1;
        int mid = (start + end) / 2;
        //如果要更新节点在右边
        if(update_idx > mid) {
            update(arr, tree, mid+1, end, right_node, update_idx, val);
        } else { //要更新节点在左边
            update(arr, tree, start, mid, left_node, update_idx, val);
        }
        //要注意更新当前节点！！！！！！
        tree[node_idx] = tree[left_node] + tree[right_node];
    }
}

int main()
{

    vector<int> arr = {93, 90, 50, 50, 1};

    int n = arr.size();

    vector<int> tree(4*n);

    build_tree(arr, tree, 0, n-1, 1);

    cout << "更新前的树:";

    for (auto& x : tree) cout << x << " ";

    cout << endl;

    //更新 idx = 4的元素值为 2
    update(arr, tree, 0, n-1, 1, 4, 2);
    cout << "更新后的树:";
    for (auto& x : tree) cout << x << " ";
    cout << endl;
    cout << "查询区间[2,4]的和为：" << query(arr, tree, 0, n-1, 2, 4, 1) << endl;
    return 0;

}

