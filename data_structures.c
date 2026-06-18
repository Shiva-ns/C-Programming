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
            if (i->data > j->data)
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
#include <stdlib.h>
#include <stdio.h>
// merge 2 lists
struct merge
{
    int data;
    struct merge *next;
};
struct merge *h1 = NULL;
struct merge *h2 = NULL;
struct merge *m = NULL;

int insert(int val)
{
    struct merge *node = malloc(sizeof(struct merge));
    if (node == NULL)
    {
        printf("The node is not created.\n");
    }
    node->data = val;
    node->next = NULL;
    if (h1 == NULL)
    {
        h1 = node;
        return 1;
    }
    struct merge *t = h1;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = node;
    return 1;
}
int iinsert(int val)
{
    struct merge *node = malloc(sizeof(struct merge));
    if (node == NULL)
    {
        printf("The node is not created.\n");
    }
    node->data = val;
    node->next = NULL;
    if (h2 == NULL)
    {
        h2 = node;
        return 1;
    }
    struct merge *t = h2;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = node;
    return 1;
}
int print()
{
    printf("List1\n");
    struct merge *t = h1;
    while (t != NULL)
    {
        printf("%d -> ", t->data);
        t = t->next;
    }

    printf("\nlist 2\n");
    t = h2;
    while (t != NULL)
    {
        printf("%d -> ", t->data);
        t = t->next;
    }
}
int merg()
{
    struct merge *node = malloc(sizeof(struct merge));
    if (node == NULL)
    {
        printf("Memory is not created.");
        return 0;
    }
    if (m == NULL)
    {
        m = h1;
    }
    struct merge *t = m;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = h2;
    t = m;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    // print();
    iinsert(7);
    iinsert(8);
    iinsert(9);
    iinsert(10);
    iinsert(11);
    iinsert(12);
    print();

    printf("\nAfter Merging :\n");
    merg();
}

#endif

#if 0
#include <stdlib.h>
#include <stdio.h>
// merge 2 lists
struct merge
{
    int data;
    struct merge *next;
};

struct merge *h1 = NULL;
struct merge *h2 = NULL;

/**
 * Optimized insert: O(1) Time Complexity.
 * By passing the 'tail' pointer, we append nodes instantly without
 * traversing the entire list from the head every time.
 */
struct merge *insert_node(struct merge **head, struct merge *tail, int val)
{
    struct merge *node = malloc(sizeof(struct merge));
    if (!node)
        return NULL; // Safety check for memory allocation

    node->data = val;
    node->next = NULL;

    if (*head == NULL)
    {
        *head = node; // First node becomes the head
    }
    else
    {
        tail->next = node; // Link new node to the current tail
    }
    return node; // Return the new node to be used as the next 'tail'
}

/**
 * Display logic: O(N) Time Complexity.
 */
void print_list(struct merge *head, const char *msg)
{
    printf("%s: ", msg);
    while (head)
    {
        // Using ternary operator for clean arrow formatting
        printf("%d%s", head->data, head->next ? " -> " : " -> NULL\n");
        head = head->next;
    }
}

/**
 * Merging logic: O(N) Time Complexity.
 * We traverse only the first list to find the connection point.
 * Optimization: If we stored the tail of h1, this could be O(1).
 */
struct merge *merge_lists(struct merge *list1, struct merge *list2)
{
    if (!list1)
        return list2; // If list1 is empty, result is list2
    if (!list2)
        return list1; // If list2 is empty, result is list1

    struct merge *temp = list1;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = list2;
    return list1;
}

/**
 * Memory Cleanup: O(N + M) Time Complexity.
 */
void free_list(struct merge *head)
{
    struct merge *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    // t1 and t2 act as trackers for the end of our lists (tails)
    struct merge *t1 = NULL, *t2 = NULL;

    // Efficiently build List 1: 1 to 6.
    // This loop is O(N) total because each insertion is O(1).
    for (int i = 1; i <= 6; i++)
    {
        t1 = insert_node(&h1, t1, i);
    }

    // Efficiently build List 2: 7 to 12.
    // This loop is O(M) total.
    for (int i = 7; i <= 12; i++)
    {
        t2 = insert_node(&h2, t2, i);
    }

    print_list(h1, "List 1");
    print_list(h2, "List 2");

    printf("\nMerging lists...\n");
    struct merge *merged_head = merge_lists(h1, h2);

    print_list(merged_head, "Merged List"); // O(N + M)

    // Essential for production code: clean up heap memory
    free_list(merged_head);
    return 0;
}
#endif

#if 0
int len = 5;
int arr[5];
int top = -1;
int push(int val)
{
    if (top == len - 1) // Corrected: Stack is full when top points to the last valid index
    {
        printf("Stack Overflow: Cannot push %d\n", val);
        return 0; // Indicate failure
    }

    top++; // Increment top first, then assign
    arr[top] = val;
    printf("Pushed: %d\n", val); // Added print for clarity
    return 1;                    // Indicate success
}
int peek()
{
    if (top == -1)
    {
        printf("Stack Empty: Cannot peek.\n");
        return -1; // Indicate an error or empty stack
    }
    printf("Top element: %d\n", arr[top]);
    return arr[top]; // Return the top element
}
int pop()
{
    if (top == -1)
    {
        printf("Stack Empty: Cannot pop.\n");
        return -1; // Indicate an error or empty stack
    }
    int popped_val = arr[top];          // Get the value before decrementing
    top--;                              // Decrement top
    printf("Popped: %d\n", popped_val); // Added print for clarity
    return popped_val;                  // Return the popped element
}
int print_stack_elements()
{
    printf("Stack elements (bottom to top): "); // Clarified output
    if (top == -1)
    {
        printf("Stack is Empty.\n");
        return 0; // Indicate no elements printed
    }
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Newline for cleaner output
    return 1;     // Indicate success
}
int main()
{
    push(3);
    push(2);
    push(4);
    push(6);
    push(1); // Stack is now full (5 elements)

    print_stack_elements();
    peek();
    pop();
    pop();
    print_stack_elements();

    printf("\n--- Testing overflow ---\n");
    push(99); // This should now correctly trigger the overflow message

    printf("\n--- Testing peek after some pops ---\n");
    peek();

    printf("\n--- Popping remaining elements ---\n");
    pop();
    pop();
    pop();
    pop(); // Pop all elements

    print_stack_elements(); // Should now correctly print "Stack is Empty."

    printf("\n--- Testing pop from empty stack ---\n");
    pop(); // Should print "Stack Empty"

    printf("\n--- Testing peek from empty stack ---\n");
    peek(); // Should print "Stack Empty"

    print_stack_elements(); // Should print "Stack is Empty."
}
#endif

#if 0
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

#endif

#if 1
//stack implementation with array



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

#if 0

#endif

#if 0

#endif

#if 0

#endif
