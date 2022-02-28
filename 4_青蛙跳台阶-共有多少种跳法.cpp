// 一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。

// 答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

//为什么青蛙跳台阶问题可以转化为斐波那契数列问题
// f(n) 为以上两种情况之和，即 f(n)=f(n-1)+f(n-2)f(n)=f(n−1)+f(n−2) ，以上递推性质为斐波那契数列。本题可转化为 求斐波那契数列第 nn 项的值 ，与 面试题10- I. 斐波那契数列 等价，唯一的不同在于起始数字不同。
// 青蛙跳台阶问题： f(0)=1f(0)=1 , f(1)=1f(1)=1 , f(2)=2f(2)=2 ；
// 斐波那契数列问题： f(0)=0f(0)=0 , f(1)=1f(1)=1 , f(2)=1f(2)=1 。



#include <stdlibc++.h>

using namespace std;


class Solution {
public:
    int numWays(int n) {
        int MOD = 1000000007;
        if (n < 2)
            return 1;
        int p = 1, q = 1, r = 2;
        for (int i = 2; i < n; ++i) {
            p = q; 
            q = r; 
            r = (p + q)%MOD;
        }
        return r;
    }
};


int main()
{
    Solution solution;
    int n;
    cout << "please input number" << endl;
    cin >> n;
    cout << "Result is " << solution.numWays(n) << endl;
    return 0;
}
