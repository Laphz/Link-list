#include<iostream>

//hiiii testing git hub

class Node
{
public:
    int val;
    Node* next;

    Node(int val = 0 , Node* next = NULL) : val(val) , next(next) {}

    void print(Node head)
    {
        std::cout << ""<< std::endl;
        while (true)
        {
            std::cout << '(' << head.val << ')' << " --> ";
            if (head.next == NULL) 
            {
                std::cout << "NULL" << std::endl;
                break;
            } 
            head = *(head.next);
        }
    }
    void insert(Node *head,int newbie){
        Node newer;
        newer.val = newbie;
        newer.next = head->next;
        head->next = &newer;

    }
};

int main()
{
    Node a(1);
    Node b = Node(2);
    Node c = Node(3);
    Node d = Node(4);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    Node LL;

    LL.insert(&d,5);
    LL.print(a);


    return 0;
}