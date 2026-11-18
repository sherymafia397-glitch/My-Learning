#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *head)
{
    struct Node *ptr = head;

    while(ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

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
    third->next = fourth;

    // Fourth Node
    fourth->prev = third;
    fourth->data = 1;
    fourth->next = NULL;

    cout << "Doubly Linked List Traversal\n";

    linkedlisttraversal(head);

    return 0;
}