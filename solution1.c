#include<stdio.h>
#include<stdlib.h>

typedef struct node
    {
        int val;
        struct node *next; 
    }new_node;

void create_node_start(struct node **link_list, int val);
void print_link_list(struct node *link_list);

int main()
    {
        struct node *link_list1;
        create_node_start(&link_list1,5);
        create_node_start(&link_list1,10);
        create_node_start(&link_list1,15);
        print_link_list(link_list1);
        return 0;
    }

void create_node_start (struct node **link_list,int val)
    {
    new_node * temp;
    temp = malloc (sizeof(new_node));
    temp->val = val;
    temp->next = NULL;
    if (*link_list == NULL)
        {
        *link_list = temp;
        }
    else
        {
        temp->next = *link_list;
        *link_list = temp;
        }
    }

void print_link_list(struct node *link_list)
    {
    struct node *current = link_list;
    while (current != NULL)
        {
        printf ("%d\n", current->val);
        current = current->next;
        }
    }
        
