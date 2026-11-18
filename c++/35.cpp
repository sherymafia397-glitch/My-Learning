#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

// Traversal Function
void traversal(struct Node *head)
{
    struct Node *ptr = head;

    while(ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// Insertion at First
struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;

    if(head != NULL)
    {
        head->prev = ptr;
    }

    return ptr;
}

// Insertion at End
struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = NULL;

    if(head == NULL)
    {
        ptr->prev = NULL;
        return ptr;
    }

    struct Node *p = head;

    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->prev = p;

    return head;
}

// Insertion at Specific Position
struct Node *InsertAtPosition(struct Node *head, int data, int position)
{
    if(position < 1)
        return head;

    if(position == 1)
        return InsertAtFirst(head, data);

    struct Node *p = head;

    for(int i = 1; i < position - 1 && p != NULL; i++)
    {
        p = p->next;
    }

    if(p == NULL)
        return head;

    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = p->next;
    ptr->prev = p;

    if(p->next != NULL)
    {
        p->next->prev = ptr;
    }

    p->next = ptr;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate Memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // First Node
    head->prev = NULL;
    head->data = 4;
    head->next = second;

    // Second Node
    second->prev = head;
    second->data = 3;
    second->next = third;

    // Third Node
    third->prev = second;
    third->data = 6;
    third->next = NULL;

    cout << "Original Linked List\n";
    traversal(head);

    // Insertion at First
    head = InsertAtFirst(head, 80);

    cout << "\nAfter Insertion at First\n";
    traversal(head);

    // Insertion at End
    head = InsertAtEnd(head, 90);

    cout << "\nAfter Insertion at End\n";
    traversal(head);

    // Insertion at Position 3
    head = InsertAtPosition(head, 70, 3);

    cout << "\nAfter Insertion at Position 3\n";
    traversal(head);

    return 0;
}