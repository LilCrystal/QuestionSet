// 请实现 copyRandomList 函数，复制一个复杂链表。在复杂链表中，
//每个节点除了有一个 next 指针指向下一个节点，还有一个 random 指针指向链表中的任意节点或者 null。


// 输入：head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
// 输出：[[7,null],[13,0],[11,4],[10,2],[1,0]]


#include <stdlibc++.h>

using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


//用hash 标记现在的next需不需要被创建(因为可能是某个之前的random)


class Solution {
private:
    unordered_map<Node*, Node*> created;
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return head;//如果头结点为空，返回其本身
        Node* pre = new Node(0);//假头节点，用于避免边界判断带来的麻烦
        Node* cur = head;//当前指针指向头节点
        while(cur!=nullptr){//依次遍历链表各节点，同时构造新链表
            if(!created.count(cur)){//如果当前指针指向的旧链表节点未被创建（其有可能在之前的节点完善random指针时被创建）
                created[cur] = new Node(cur->val);//则创建之
            }//如果已被创建则直接使用之
            pre -> next = created[cur];//将前一节点的next指针指向本节点
            pre = pre -> next;//更新pre指针指向本节点
            if(cur->random == nullptr) created[cur] -> random = nullptr;//若该节点的random指针指向空，则新链表中的也指向空
            else{//否则完善其random指针指向
                if(!created.count(cur->random)){//如果其random应指向的节点还未创建
                    created[cur->random] = new Node(cur->random->val);//则创建之
                }//并将random指针指向他
                created[cur]->random = created[cur->random];
            }
            cur = cur -> next;//更新当前工作指针指向本节点的下一节点
        }
        return created[head];//返回答案
    }
};

// class Solution
// {
// public:
//     Node *copyRandomList(Node *head)
//     {
//         if(head == nullptr)
//             return nullptr;
//         Node *read_current = head;
//         Node *res_head = new Node(read_current->val);
//         Node *write_current = res_head;
        
//         while (read_current != nullptr)
//         {
//             write_current = write_current->next;
//             read_current = read_current->next;

//         }
//         return res_head;
//     }
// };
int main()
{

    return 0;
}
