#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node* delete_frm_beginning(Node* head)
{
    if ( head == NULL )
    {
        return NULL;
    }

    Node* temp = head;
    head = head->next;

    free(temp);

    return head; 
}

void travarsel(Node* head)
{
    Node* current = head;
    printf("\nThe linked list is : ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    head = delete_frm_beginning(head);

    travarsel(head);

    return 0;
}