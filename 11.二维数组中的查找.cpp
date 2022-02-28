// 在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
// 请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

//二分查找


// 如下图所示，我们将矩阵逆时针旋转 45° ，并将其转化为图形式，发现其类似于 二叉搜索树 ，
// 即对于每个元素，其左分支元素更小、右分支元素更大。
// 因此，通过从 “根节点” 开始搜索，遇到比 target 大的元素就向左，反之向右，即可找到目标值 target 。


#include <stdlibc++.h>

using namespace std;



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int counter = 0;
        for(auto i:nums)
        {
            if (counter != i)
            return counter;
            counter++;
        }
        return counter;
    }
};


int main()
{
    Solution a;
    vector<int> b = {0, 1, 2, 3, 5, 6};
    cout << a.missingNumber(b) << endl;
}