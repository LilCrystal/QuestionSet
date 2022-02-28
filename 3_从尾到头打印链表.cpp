//

//最先想到的就是 入栈 然后出栈的时候打印就行了。
#include <stdlibc++.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    //这个是利用栈，返回的是链表版本
    // ListNode *reverseList(ListNode *head)
    // {
    //     stack<ListNode> forRevert;
    //     ListNode *current = head;
    //     while (current->next != nullptr)
    //     {
    //         forRevert.push(current->val);
    //         current = current->next;
    //     }
    //     while (!forRevert.empty())
    //     {
    //         *current = forRevert.top();
    //         head = &ListNode(forRevert.top());
    //         forRevert.push(current->val);
    //     }
    // }


    //这个是返回数组版本
    // vector<int> reversePrint(ListNode* head) {
    //     stack<ListNode> forRevert;
    //     ListNode *current = head;
    //     vector<int> result;
    //     while (current != nullptr)
    //     {
    //         forRevert.push(current->val);
    //         current = current->next;
    //     }
    //     while (!forRevert.empty())
    //     {
    //         result.push_back(forRevert.top().val);
    //         cout << "in function:" << forRevert.top().val << endl;
    //         forRevert.pop();
    //     }
    //     return result;
    // }

    //原地修改版，应该会省掉不少内存，翻转链表
    ListNode* reversePrint(ListNode *head)
    {
        ListNode *current = head;
        ListNode *pre = NULL;
        if (current != nullptr)
        {
            ListNode *next = current->next;
            while (current != nullptr)
            {
                current->next = pre;
                pre = current;
                current = next;
                if (next != nullptr)
                    next = next->next;
            }
            head = pre;
        }
        
        return head;
    }
};

int main()
{
    Solution solution;
    ListNode *head = new ListNode(0);
    ListNode *current = head;
    for(int i = 1; i < 10; i++){
        current->next = new ListNode(i);
        current = current->next;
    }
    current = head;
    while (current!=nullptr)
    {
        cout<< current->val << endl;
        current = current->next;
    }
    cout<<"------------分隔符---------------" << endl;
    ListNode* res = solution.reversePrint(head);
    for(int i = 0; i < 10; i++){
        cout << res->val << endl;
        res = res->next;
    }
    return 0;
}