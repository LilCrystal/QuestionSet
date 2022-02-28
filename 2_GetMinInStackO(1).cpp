// 定义栈的数据结构，请在该类型中实现一个能够得到栈的
// 最小元素的 min 函数在该栈中，调用 min、push 及 pop 的时间复杂度都是 O(1)。


//空间换时间的思想要时刻谨记


#include <stdlibc++.h>

using namespace std;


class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> Stack;
    stack<int> mStack;
    MinStack() {

    }
    
    void push(int x) {
        Stack.push(x);
        if (mStack.empty() || x <= mStack.top()) {
            mStack.push(x);
        }
    }
    
    void pop() {
        if (Stack.empty())
            return;
        if (Stack.top() == mStack.top())
            mStack.pop();
        Stack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int min() {
        return mStack.top();
    }
};


int main()
{
    MinStack mstack;
    mstack.push(8);
    mstack.pop();
    mstack.push(5);
    mstack.push(4);
    mstack.push(2);
    mstack.push(1);
    mstack.pop();
    mstack.push(10);
    cout << mstack.top() << endl;
    cout << mstack.min() << endl;

    return 0;
}
