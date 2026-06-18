#if 0

#include <stdio.h>
#include <stdlib.h>
struct single
{
    int data;
    struct single *link;
};

int insert_first(int val, struct single **head)
{
    struct single *node = malloc(sizeof(struct single));
    if (node == NULL)
    {
        printf("Memory is not aloocated.\n");
        return 0;
    }
    node->data = val;
    node->link = *head;
    *head = node;
    return 1;
}
int print(struct single **head)
{
    if (*head == NULL)
    {
        printf("Node is MT\n");
        return 0;
    }
    struct single *temp = *head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
int main()
{
    struct single *head = NULL;
    insert_first(100, &head);
    insert_first(80, &head);
    insert_first(70, &head);
    insert_first(50, &head);
    insert_first(40, &head);
    insert_first(30, &head);
    insert_first(20, &head);
    insert_first(10, &head);
    print(&head);
    return 0;
}

#endif

#if 1
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int insert_at_first(struct node **head, struct node **tail, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory is not created\n");
        return 1;
    }
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL && *tail == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return 1;
    }
    new_node->next = *head;
    (*head)->prev = new_node;
    *head = new_node;
    return 1;
}

int insert_at_last(struct node **head, struct node **tail, int data)
{
    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Memory is not created\n");
        return 1;
    }
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (*head == NULL && *tail == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return 1;
    }
    (*tail)->next = new_node;
    new_node->prev = *tail;
    *tail = new_node;
    return 1;
}

int print_forward(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("[%d] ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int print_backward(struct node *tail)
{
    struct node *temp = tail;
    while (temp != NULL)
    {
        printf("[%d] ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int delet_at_first(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is MT\n");
        return 0;
    }
    struct node *temp = *head;
    *head = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
    return 1;
}

int delet_at_last(struct node **tail)
{
    if (*tail == NULL)
    {
        printf("List is MT\n");
        return 1;
    }
    struct node *temp = *tail;
    *tail = temp->prev;
    temp->prev->next = temp->next;
    free(temp);
    return 1;
}

int main()
{
    struct node *head = NULL;
    struct node *tail = NULL;

    insert_at_last(&head, &tail, 10);
    insert_at_last(&head, &tail, 20);
    insert_at_last(&head, &tail, 30);
    print_forward(head);
    delet_at_last(&tail);
    print_forward(head);
    insert_at_last(&head, &tail, 70);
    insert_at_first(&head, &tail, 40);
    print_forward(head);
    delet_at_first(&head);
    print_forward(head);
    insert_at_last(&head, &tail, 100);
    insert_at_first(&head, &tail, 400);
    printf("Backward: ");
    print_backward(tail);
    print_forward(head);
    return 0;
}

#endif