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
//case 1
struct Node* InsertAtFirst(struct Node *head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
//case 2 InserATbetween
struct Node* InsertAtEnd(struct Node *head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
//case 3
struct Node* InsertAfterNode(struct Node *head,struct Node *prevNode,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->next=prevNode->next;
   prevNode->next=ptr;
    return head;
}
//case 4
struct Node* InsertAtIndex(struct Node *head,int data,int Index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=Index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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
    cout<<"Link list before insertion\n";
    linkedlisttraversal(head);
    // head=InsertAtFirst(head, 56);
    //  head=InsertAtIndex(head, 56,1);
    //  head=InsertAtEnd(head, 56);
    // head=InsertAfterNode(head,second,45);
    head=InsertAfterNode(head,third,45);
     cout<<"\nLink list After insertion\n";
    linkedlisttraversal(head);
    return 0;
}