#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void rev(struct node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    rev(temp->next);
    printf(" %d", temp->data);
}

int len(struct node *temp)
{
    if (temp == NULL)
    {
        return 0;
    }

    return 1 + len(temp->next);
}

void main()
{
    struct node *newnode, *temp, *head;
    int ch;

    clrscr();
    head = NULL;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("\nEnter the Data:");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Add new node press 1 else 0:");
        scanf("%d", &ch);

    } while (ch == 1);

    temp = head;

    printf("\nList:");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }

    printf("\nReversed List:");
    rev(head);

    printf("\nLength of List:%d", len(head));

    getch();
}