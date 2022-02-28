// 累加数 是一个字符串，组成它的数字可以形成累加序列。
// 一个有效的 累加序列 必须 至少 包含 3 个数。除了最开始的两个数以外，字符串中的其他数都等于它之前两个数相加的和。
// 给你一个只包含数字 '0'-'9' 的字符串，编写一个算法来判断给定输入是否是 累加数 。如果是，返回 true ；否则，返回 false 。
// 说明：累加序列里的数 不会 以 0 开头，所以不会出现 1, 2, 03 或者 1, 02, 3 的情况。

// 我遇到的问题，是string的某位无法转换成int 
//最后就是减 48 或者是减 '0'

//事实上难点在于 **大数** 加减运算
#include <stdlibc++.h>
#include <stdlib.h>
#include <string>
using namespace std;


class Solution {
public:

    //这是只考虑 单个位数的问题
    // bool isAdditiveNumber(string num) {
    //     for(int i = 0; i < num.length() - 2; i++) {
    //         cout << num[i+2]<< endl;
    //         cout << num[i]<< endl;
    //         cout << num[i+1]<< endl;
    //         cout << (int)num[i+2] - 48 << endl;
    //         cout << (int)num[i] - 48 << endl;
    //         cout << (int)num[i+1] - 48 << endl;
    //         if(int(num[i+2]) - 48 != int(num[i]) - 48  + int(num[i+1]) - 48 ) {
    //             cout << "erro" << endl;
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    bool isAdditiveNumber(string num) {
        for(int i = 0; i < num.length() - 2; i++) {
            cout << num[i+2]<< endl;
            cout << num[i]<< endl;
            cout << num[i+1]<< endl;
            cout << (int)num[i+2] - '0'<< endl;
            cout << (int)num[i] - '0' << endl;
            cout << (int)num[i+1] - '0' << endl;
            // cout << atoi(&num[i+2]) << endl;
            // cout << atoi(&num[i]) << endl;
            // cout << atoi(&num[i+1]) << endl;
            
        }
        return true;
    }
};


int main()
{
    Solution solution;
    string n;
    cout << "please input number" << endl;
    cin >> n;
    solution.isAdditiveNumber(n);
    return 0;
}
