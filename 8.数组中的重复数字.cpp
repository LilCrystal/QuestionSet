// 在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
// 数组中某些数字是重复的，但不知道有几个数字重复了，
// 也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。


//关于hash_map的很好应用

#include <stdlibc++.h>

using namespace std;



class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        set<int> repeat;
        for(const auto & i : nums)
            if(!repeat.insert(i).second)
                return i;
        return -1;
    }
};


int main()
{
    Solution a;
    vector<int> b = {1, 2, 3, 5, 3, 2, 1, 3};
    cout << a.findRepeatNumber(b) << endl;
}