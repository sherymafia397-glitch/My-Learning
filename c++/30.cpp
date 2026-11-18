#include <iostream>
#include <cstdlib>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: %d   :"<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // Allocate memory for nodes in the link list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // Link First and second Nodes
    head->data = 7;
    head->next = second;
    // Link second and third Nodes
    second->data = 11;
    second->next = third;
    // Link fourth and third Nodes
    third->data = 17;
    third->next = fourth;
    // Terminate the list at the third Nodes
    fourth->data = 66;
    fourth->next = NULL;
    linkedlisttraversal(head);
    return 0;
}