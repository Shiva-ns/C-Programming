#include <stdio.h>

#if 0
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
    if (head == NULL)
    {
        printf("\nList is empty. Cannot delete.");
        return 0;
    }
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
        printf("\nList is empty. Cannot delete.");
        return 0;
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nDeleted at Last..");
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
        return 1;
    }
    else
    {
        printf("\nElement %d is not there in the nodes..", val);
        return 0;
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
#include <stdio.h>
#if 0
// find midle element in an list
#include <stdlib.h>
/*Implement the functions given below :-
1.insert_at_first(head, data)
2.find_MiD_node(head, data)*/
struct single
{
    int data;
    struct single *next;
};
struct single *head = NULL;
int count = 0;
int insert_at_first(int val)
{

    struct single *node = malloc(sizeof(struct single));
    if (node == NULL)
    {
        printf("memory is not allocated. ");
    }
    node->next = NULL;
    node->data = val;
    count++;
    if (head == NULL)
    {
        head = node;
        return 1;
    }
    node->next = head;
    head = node;
    // printf("\nInserted at first..");

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

int find_mid_node()
{
    if (head == NULL)
    {
        printf("List is MT..");
        return 1;
    }
    struct single *temp = head;
    int i = 0;
    while (i < count / 2)
    {
        temp = temp->next;
        i++;
    }
    printf("\nThe Mid element in an list is : %d\n", temp->data);
    return 1;
}

int main()
{
    insert_at_first(10);
    insert_at_first(5);
    insert_at_first(15);
    insert_at_first(50);
    insert_at_first(20);
    print_list();
    find_mid_node();
}
#endif

#if 0
#include <stdlib.h>
// WAF to sort the given single linked list(selection sorting)

struct single
{
    int data;
    struct single *link;
};
struct single *head = NULL;
int insert(int data);
int print();
int sorted();

int main()
{
    int val;
    int choose;
    while (1)
    {

        printf("\n1.Insert\n2.Print\n3.Sort\n4 Exit: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &val);

            if (!(insert(val)))
            {
                printf("Successfully added.");
            }
            else
            {
                printf("Memory is not allocated. ");
            }
            break;
        case 2:
            print();
            break;
        case 3:
            sorted();
            printf("Soretd.");
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Give valide.");
            break;
        }
    }
}
int insert(int dat)
{
    struct single *node = malloc(sizeof(struct single));
    if (node == NULL)
    {
        return 1;
    }
    node->data = dat;
    node->link = NULL;
    if (head == NULL)
    {
        head = node;
        return 0;
    }
    struct single *temp = head;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = node;
    return 0;
}
int print()
{
    if (head == NULL)
    {
        return 0;
    }

    struct single *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    return 0;
}
int sorted()
{
    struct single *i = head;
    struct single *j = i->link;
    while (i != NULL)
    {
        j = i->link;
        while (j != NULL)
        {
            if (i->data < j->data)
            {
                int t = i->data;
                i->data = j->data;
                j->data = t;
            }
            j = j->link;
        }
        i = i->link;
    }
}
#endif

#if 0
// WAF to reverse the single linked list in both iterative
#include <stdlib.h>
struct single
{
    int data;
    struct single *link;
};

struct single *head = NULL;
int count = 0;
int insert(int dat)
{
    struct single *node = malloc(sizeof(struct single));
    if (node == NULL)
    {
        return 1;
    }
    node->data = dat;
    node->link = NULL;
    if (head == NULL)
    {
        head = node;
        return 0;
    }
    struct single *temp = head;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = node;
    return 0;
}
int print()
{
    if (head == NULL)
    {
        return 0;
    }

    struct single *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
        count++;
    }
    return 0;
}
int reverse()
{
    if (head == NULL)
    {
        printf("List is MT\n");
        return 1;
    }
    struct single *prev = NULL;
    struct single *curr = head;
    struct single *next;

    while (curr != NULL)
    {
        next = curr->link; // save next node
        curr->link = prev; // reverse the link
        prev = curr;       // move prev forward
        curr = next;       // move curr forward
    }

    head = prev; // update head to the new first node
}

int main()
{
    int val;
    int choose;
    while (1)
    {

        printf("\n1.Insert\n2.Print\n3.Reverse\n4 Exit: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &val);

            if (!(insert(val)))
            {
                printf("Successfully added.");
            }
            else
            {
                printf("Memory is not allocated. ");
            }
            break;
        case 2:
            print();
            break;
        case 3:
            reverse();
            printf("reversed.");
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Give valide.");
            break;
        }
    }
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
