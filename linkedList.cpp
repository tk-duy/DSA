#include <iostream>

struct Node
{
    int value;
    Node* nextnode = NULL;
};

Node* addList(Node* &head, int value) 
{
        Node *a = new  Node;            //Khoi tao mot con tro moi, 
        a->value = value;               //tro den doi tuong Node a.
        a->nextnode = NULL;

        if (head == NULL)               //Neu list rong, thi gan cho doi tuong a,
        {
            head = a;
            return head;                    //va tra ve dau list.
        }

        Node *b = head;                    //Neu list khong rong thi tao con tro b
        while (b->nextnode != NULL)         // de duyet list, tim den phan tu cuoi cung.
        {
            b = b->nextnode;
        }
        b->nextnode = a;                        //Cho con tro cuoi cung tro den doi tuong a.

    return head;                                  // Tra ve dau list.
}

// int getlist(Node *head) 
// {
//     int sum = 0;
//     while (head != NULL)
//     {
//         sum += head->value;
//         head = head->nextnode;
//     }
//     return sum;
// }

int count(Node* head, int key) 
{
    int count = 0;
    // if (head == NULL)
    // {
    //     return count;
    // }
    // else 
    // {
    //     do 
    //     {
    //         if (head->value == key)
    //         {
    //             count++;
    //         }
    //         head = head->nextnode;
    //     } while (head != NULL);
    //     return count;
    // }
    while (head != NULL) 
    {
        if (head->value == key)
        {
            count++;
        }
        head = head->nextnode;
    }
    return count;
}

int main() 
{
    Node *head = nullptr;
    int n; std::cin >> n;
    int i = 0;
    while (i < n)
    {
        int x; std::cin >> x;
        addList(head, x);
        i++;
    }
    std::cout << count(head, 1);
    
    system("pause");
    return 0;
}