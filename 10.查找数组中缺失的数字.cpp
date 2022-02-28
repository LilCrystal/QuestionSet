// 一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。
// 在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

//有序，就用二分，想各种办法二分

#include <stdlibc++.h>

using namespace std;



class Solution {
public:
//遍历版
    // int missingNumber(vector<int>& nums) {
    //     int counter = 0;
    //     for(auto i:nums)
    //     {
    //         if (counter != i)
    //         return counter;
    //         counter++;
    //     }
    //     return counter;
    // }
//二分版，一切其他二分的基础
    int missingNumber(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1; 
        while(start <= end)
        {
            int middle = (start + end)/2; 
            if (nums[middle] == middle)
                start = middle + 1;
            else
                end = middle -1;
        }
        return start;
    }
};


int main()
{
    Solution a;
    vector<int> b = {0, 1, 2, 3, 5, 6};
    cout << a.missingNumber(b) << endl;
}