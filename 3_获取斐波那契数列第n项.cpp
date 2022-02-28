//斐波那契数列，每一项都是前两项的和，即F(n) = F(n-1) + F(n-2)
//其中F(0) = 0 , F(1) = 1


#include <stdlibc++.h>

using namespace std;


class Solution {
public:
    //第一种方法虽然代码最简洁，但是会超时
    // int fib(int n) {
    //     if (n < 0)
    //         return -1;
    //     else if (n == 0 || n == 1)
    //         return n;
    //     else {
    //         return fib(n-1) + fib(n-2);
    //     }
    // }


    //第二种方法，就是利用一个循环计算，到n停止，时间复杂度为O(n)
    //有人管这个叫动态规划，或者是滑动窗口，那好吧
    int fib(int n) {
        int MOD = 1000000007;
        if (n < 2)
            return n;
        int p = 0, q = 0, r = 1;
        for (int i = 2; i <= n; ++i) {
            p = q; 
            q = r; 
            r = (p + q)%MOD;
        }
        return r;
    }

    //第三种方法就是矩阵快速幂 其时间复杂度是 O(log n)









    //第四种方法就是最狠的啦，推到出通项公式，时间复杂度为O(1)





    
};


int main()
{
    Solution solution;
    int n;
    cout << "please input number" << endl;
    cin >> n;
    cout << "the no." << n << " in Flib is " << solution.fib(n) << endl;
    return 0;
}
