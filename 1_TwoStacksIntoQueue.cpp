#include <iostream>
#include <stdlibc++.h>

using namespace std;

class CQueue
{
public:
    stack<int> StackIn;
    stack<int> StackOut;

    CQueue()
    {
    }

    void appendTail(int value)
    {
        StackIn.push(value);
    }

    int deleteHead()
    {
        if (!StackOut.empty())
        {
            int temp = StackOut.top();
            StackOut.pop();
            return temp;
        }
        else
        {
            while (!StackIn.empty())
            {
                StackOut.push(StackIn.top());
                StackIn.pop();
            }
            if (StackOut.empty())
            {
                return -1;
            }
            else
            {
                int temp2 = StackOut.top();
                StackOut.pop();
                return temp2;
            }
        }
    }
};
    /**
     * Your CQueue object will be instantiated and called as such:
     * CQueue* obj = new CQueue();
     * obj->appendTail(value);
     * int param_2 = obj->deleteHead();
     */

int main(){
    cout << "1" << endl;
    CQueue test;
    test.appendTail(1);
    int a = 0;
    a++;
    test.appendTail(2);
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    return 0;
}