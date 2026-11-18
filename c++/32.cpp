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
// case 1:DELETE FIRST ELEMENT FROM THE LINK LIST
struct Node *deleteFirst(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
// case 2:DELETE THE ELEMENT AT THE GIVEN INDEX
struct Node *deleteATIndex(struct Node*head,int Index){
    struct Node*p=head;
    struct Node*q=head->next;
    for (int i = 0; i < Index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
// case 3:DELETE THE LAST ELEMENT 
struct Node *deleteATLast(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
// case 4:DELETE THE ELEMENT WITH THE GIVEN VALUE
struct Node *deleteATvalue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
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
    third->data = 8;
    third->next = fourth;
    // Terminate the list at the third Nodes
    fourth->data = 1;
    fourth->next = NULL;
    cout<<"link list before deletion\n";
    linkedlisttraversal(head);
    //head=deleteFirst(head);
    // head=deleteFirst(head);
    // head=deleteATIndex(head,2);
    // head=deleteATLast(head);
     head=deleteATvalue(head,8);
    cout<<"\nlink list after deletion\n";
    linkedlisttraversal(head);
    return 0;
}