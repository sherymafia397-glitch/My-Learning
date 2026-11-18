#include <iostream>
#include <cstdlib>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *head)
{
    struct Node*ptr=head;
    //  cout<<"Element is %d\n"<<ptr->data<<endl;
    //     ptr=ptr->next;
    do{
        cout<<"Element is %d\n"<<ptr->data<<endl;
        ptr=ptr->next;
    } while(ptr !=head);
}
struct Node * InsertAtFirst(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    // At this point p is pointing to the last node of the circular linked list
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
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
    head->data = 4;
    head->next = second;
    // Link second and third Nodes
    second->data = 3;
    second->next = third;
    // Link fourth and third Nodes
    third->data = 6;
    third->next = fourth;
    // Terminate the list at the third Nodes
    fourth->data = 1;
    fourth->next = head;
    cout<<"link list before insertion\n";
    linkedlisttraversal(head);
    head=InsertAtFirst(head,80);
    head=InsertAtFirst(head,86);
    cout<<"\nlink list after insertion\n";
    linkedlisttraversal(head);
    return 0;
}