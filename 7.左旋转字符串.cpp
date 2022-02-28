// 字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。
// 请定义一个函数实现字符串左旋转操作的功能。比如，输入字符串"abcdefg"和数字2，
// 该函数将返回左旋转两位得到的结果"cdefgab"。



#include <stdlibc++.h>

using namespace std;



class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string res;
        string head;
        int counter = 0;
        res.substr(0,n);
        for(string::iterator i = s.begin();i != s.end(); i++)
        {
            if(counter < n)
                head.push_back(*i);
            else
                res.push_back(*i);
            counter++;
        }
        res.append(head);
        return res;
        //return s.substr(n)+s.substr(0, n);
    }
};


int main()
{
    Solution a;
    string test = "123456789";
    int n;
    cin >> n;
    cout << a.reverseLeftWords(test,n) <<endl;
}
