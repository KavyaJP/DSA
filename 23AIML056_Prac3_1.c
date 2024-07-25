/*Implement below operations of singly linked list.
    (a) Insert a node at front
    (b) Delete a node at last
    (c) Delete Nth Node from End of List
    (d) Delete all nodes of linked list
Note: Display content of linked list after each operation.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL;
void insert_front(int n)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        temp->next = first;
        first = temp;
    }
}
void delete_last()
{
    struct node *temp, *prev;
    temp = first;
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else if (first->next == NULL)
    {
        first = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}
void display()
{
    struct node *trav;
    trav = first;
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (trav != NULL)
    {
        printf("%d ", trav->data);
        trav = trav->next;
    }
}
int main()
{
    char choice, again;
    while (1)
    {
        printf("Enter your choice\n(a) Insert at front\n(b) Delete a node at Last\n(c) Delete Nth node from last\n(d) Delete all Nodes from LinkedList\nEnter Your Choice : ");
        scanf("%c", &choice);
        int num;
        switch (choice)
        {
        case 'a':
            printf("Enter the number to insert at front: ");
            scanf("%d", &num);
            insert_front(num);
            printf("Linked List after insertion at front: ");
            display();
            break;
        case 'b':
            delete_last();
            printf("Linked List after deletion at last: ");
            display();
            break;
        default:
            printf("Invalid choice!");
        }
        printf("Enter N to Exit : ");
        scanf("%c", &again);
        printf("\n");
        if (again == 'N' || again == 'n')
            break;
    }
    // do
    // {
    //     printf("Enter your choice\n(a) Insert at front\n(b) Delete a node at Last\n(c) Delete Nth node from last\n(d) Delete all Nodes from LinkedList\nEnter Your Choice : ");
    //     scanf("%c", &choice);
    //     int num;
    //     switch (choice)
    //     {
    //     case 'a':
    //         printf("Enter the number to insert at front: ");
    //         scanf("%d", &num);
    //         insert_front(num);
    //         printf("Linked List after insertion at front: ");
    //         display();
    //         break;
    //     case 'b':
    //         delete_last();
    //         printf("Linked List after deletion at last: ");
    //         display();
    //         break;
    //     default:
    //         printf("Invalid choice!");
    //     }
    //     printf("Enter N to exit : ");
    //     scanf("%c", &again);
    //     printf("\n");
    // } while (again != 'N' || again != 'n');
}