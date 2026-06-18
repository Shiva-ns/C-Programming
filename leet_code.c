#if 0
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

/* Function Prototypes */
struct ListNode *insertLast(struct ListNode *head, int val);
void printList(struct ListNode *head);
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);
void freeList(struct ListNode *head);

int main()
{
    struct ListNode *l1 = NULL;
    struct ListNode *l2 = NULL;
    struct ListNode *result = NULL;

    // Example: 342 (represented as 2 -> 4 -> 3)
    l1 = insertLast(l1, 2);
    l1 = insertLast(l1, 4);
    l1 = insertLast(l1, 3);

    // Example: 465 (represented as 5 -> 6 -> 4)
    l2 = insertLast(l2, 5);
    l2 = insertLast(l2, 6);
    l2 = insertLast(l2, 4);

    printf("List 1: ");
    printList(l1);
    printf("List 2: ");
    printList(l2);

    result = addTwoNumbers(l1, l2);

    printf("Result: ");
    printList(result);

    freeList(l1);
    freeList(l2);
    freeList(result);

    return 0;
}

/* Main Logic: Digit-by-digit addition */
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode dummy; // Dummy node to simplify head handling
    dummy.next = NULL;
    struct ListNode *curr = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0)
    {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = carry + x + y;

        carry = sum / 10;

        // Create new node for current digit
        curr->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = sum % 10;
        curr->next = NULL;

        if (l1 != NULL)
            l1 = l1->next;
        if (l2 != NULL)
            l2 = l2->next;
    }
    return dummy.next;
}

struct ListNode *insertLast(struct ListNode *head, int val)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    if (head == NULL)
        return newNode;
    struct ListNode *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}

void printList(struct ListNode *head)
{
    struct ListNode *temp = head;
    while (temp != NULL)
    {
        printf("%d%s", temp->val, temp->next ? " -> " : "");
        temp = temp->next;
    }
    printf("\n");
}

void freeList(struct ListNode *head)
{
    struct ListNode *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

#endif

#if 0
/*
4. Median of Two Sorted Arrays
Hard
Topics
premium lock icon
Companies
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/

#include <stdio.h>
#include <stdlib.h> // For malloc, free

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size) // Text Segment | Function: external linkage
{
    // Concept: Dynamic Memory Allocation, 1D Array
    int total_size = nums1Size + nums2Size;                    // Stack | auto | Calculate total size
    int *merged_arr = (int *)malloc(total_size * sizeof(int)); // Heap Segment | auto | Allocate memory for merged array
    if (merged_arr == NULL)                                    // Concept: Null pointer check
    {
        fprintf(stderr, "Memory allocation failed.\n"); // ROData | Error message
        return 0.0;                                     // Handle error
    }

    // Concept: Array Copying, Pointer Arithmetic
    // Copy nums1 elements into the merged array
    for (int i = 0; i < nums1Size; i++) // Stack | auto | Loop counter
    {
        merged_arr[i] = nums1[i]; // Copy value
    }
    // Copy nums2 elements into the merged array, starting after nums1 elements
    for (int i = 0; i < nums2Size; i++) // Stack | auto | Loop counter
    {
        merged_arr[nums1Size + i] = nums2[i]; // Copy value to end of merged_arr
    }

    // Concept: Sorting Algorithm (Bubble Sort)
    // Sort the merged array using Bubble Sort
    for (int i = 0; i < total_size - 1; i++) // Stack | auto | Outer loop for passes
    {
        for (int j = 0; j < total_size - 1 - i; j++) // Stack | auto | Inner loop for comparison
        {
            if (merged_arr[j] > merged_arr[j + 1]) // Compare adjacent elements
            {
                int temp = merged_arr[j];          // Stack | auto | Temporary variable for swap
                merged_arr[j] = merged_arr[j + 1]; // Swap elements
                merged_arr[j + 1] = temp;          // Complete the swap
            }
        }
    }

    printf("\nMerged and Sorted Array: "); // ROData | Output for debugging/clarity
    for (int i = 0; i < total_size; i++)   // Stack | auto | Loop counter
    {
        printf("%d ", merged_arr[i]); // Print sorted elements
    }
    printf("\n");

    // Concept: Median Calculation
    double median;           // Stack | auto | Stores the calculated median
    if (total_size % 2 == 1) // If total number of elements is odd
    {
        median = (double)merged_arr[total_size / 2]; // Median is the middle element
    }
    else // If total number of elements is even
    {
        // Median is the average of the two middle elements
        median = (double)(merged_arr[total_size / 2 - 1] + merged_arr[total_size / 2]) / 2.0;
    }

    // Concept: Memory Management
    free(merged_arr);  // Free the dynamically allocated memory
    merged_arr = NULL; // Prevent dangling pointer

    return median; // Return the calculated median
}

int main() // Text Segment | Function: Entry point
{
    int s1;                             // Stack | auto | Size of nums1
    int s2;                             // Stack | auto | Size of nums2
    printf("Enter the size of arr1 :"); // ROData | Prompt user
    scanf("%d", &s1);                   // Stack | Read s1
    printf("Enter the size of arr2 :"); // ROData | Prompt user
    scanf("%d", &s2);                   // Stack | Read s2

    // Concept: Variable Length Arrays (VLAs)
    int nums1[s1]; // Stack | auto | VLA for first array
    int nums2[s2]; // Stack | auto | VLA for second array

    printf("\nEnter the Arr1 elements: "); // ROData | Prompt user
    for (int i = 0; i < s1; i++)           // Stack | auto | Loop counter
    {
        scanf("%d", &nums1[i]); // Read elements into nums1
    }
    printf("\nEnter the Arr2 elements: "); // ROData | Prompt user
    for (int i = 0; i < s2; i++)           // Stack | auto | Loop counter
    {
        scanf("%d", &nums2[i]); // Read elements into nums2
    }

    // Concept: Function Call
    double median_result = findMedianSortedArrays(nums1, s1, nums2, s2); // Call function to get median

    printf("\nOutput: %lf\n", median_result); // ROData | Print the median

    return 0; // Exit status
}

#endif

#if 0
/*
4. Median of Two Sorted Arrays
Hard
Topics
premium lock icon
Companies
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/

#include <stdio.h>
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int size = nums1Size + nums2Size;
    for (int i = nums1Size; i < size; i++)
    {
        nums1[i] = nums2[i - nums1Size];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums1[i] > nums1[j])
            {
                int temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
    printf("\nmerged array ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums1[i]);
    }
    if (size % 2 != 0)
    {
        double val = (double)size / 2;
        return val;
    }
    else
    {
        double val = (double)(((nums1[size / 2]) - 1) + (nums1[size / 2])) / 2;
        return val;
    }
}

int main()
{
    int s1;
    int s2;
    printf("Enter the sizeof arr1 :");
    scanf("%d", &s1);
    printf("Enter the sizeof arr2 :");
    scanf("%d", &s2);
    int nums1[s1];
    int nums2[s2];
    printf("\nEnter the Arr1 elements: ");
    for (int i = 0; i < s1; i++)
    {
        scanf("%d", &nums1[i]);
    }
    printf("\nEnter the Arr2 elements: ");
    for (int i = 0; i < s2; i++)
    {
        scanf("%d", &nums2[i]);
    }

    if ((s1 + s2) % 2 != 0)
    {
        int res = findMedianSortedArrays(nums1, s1, nums2, s2);
        printf("\noutput:  %lf\n", (double)nums1[res]);
    }
    else
    {
        printf("\noutput:  %lf\n", findMedianSortedArrays(nums1, s1, nums2, s2));
    }

    return 0;
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
