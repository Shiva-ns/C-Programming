#include <stdio.h>

#if 1
#include <stdlib.h>
/*Implement the functions given below :-
1.insert_at_first(head, data)
2.insert_at_last(head, data)
3.delete_first(head)
4.delete_last(head)
5.delete_list(head)
6.find_node(head, data)*/
struct single
{
    int data;
    struct single *next;
};
struct single *head = NULL;

int insert_at_first(int val)
{

    struct single *node = malloc(sizeof(struct single));
    if (node == NULL)
    {
        printf("memory is not allocated. ");
    }
    node->next = NULL;
    node->data = val;
    if (head == NULL)
    {
        head = node;
        return 1;
    }
    node->next = head;
    head = node;
    printf("\nInserted at first..");
    return 1;
}
int print_list()
{
    printf("\n");

    if (head == NULL)
    {
        printf("List is MT..");
        return 1;
    }
    struct single *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 1;
}
int insert_at_last(int val)
{
    struct single *node = malloc(sizeof(struct single));
    if (node == NULL)
    {
        printf("\nMemory is not allocated .. ");
        return 1;
    }
    node->next = NULL;
    node->data = val;
    if (head == NULL)
    {
        head = node;
        return 1;
    }
    struct single *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    printf("\nInserted at last..");
    return 1;
}
int delete_first()
{
    struct single *temp = head;
    head = temp->next;
    free(temp);
    printf("\nDeleted at first..");
    return 1;
}
int delete_last()
{
    if (head == NULL)
    {
        printf("list is MT..");
        return 1;
    }
    struct single *temp = head;
    struct single *pre = temp;
    while (temp->next != NULL)
    {
        pre = temp;
        temp = temp->next;
    }
    pre->next = NULL;
    free(temp);
    printf("\nDeleted at Last..");
    return 1;
}
int find_node(int val)
{
    if (head == NULL)
    {
        printf("List is MT..");
        return 1;
    }
    struct single *temp = head;
    int c = 0;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            flag = 1;
            break;
        }
        c++;
        temp = temp->next;
    }
    if (flag)
    {
        printf("\nElement %d is present at node position %d\n", val, c);
    }
    else
    {
        printf("\nElement %d is not there in the nodes..", val);
    }
}
int delete_list()
{
    if (head == NULL)
    {
        printf("list is MT....");
        return 1;
    }
    struct single *temp = head;
    while (head != NULL)
    {

        head = head->next;
        free(temp);
        temp = head;
    }
    free(temp);
    printf("\nSuccessfully deleted the node...");
}
int main()
{
    insert_at_first(10);
    insert_at_first(5);
    insert_at_first(15);
    insert_at_first(50);
    print_list();
    insert_at_last(80);
    insert_at_last(85);
    insert_at_last(87);
    print_list();
    insert_at_first(20);
    print_list();
    // delete_first();
    // print_list();
    // delete_first();
    // print_list();
    insert_at_first(40);
    // delete_last();
    // print_list();
    // insert_at_last(70);
    // print_list();

    // delete_first();
    print_list();
    find_node(81);
    delete_list();
    print_list();
}
#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
