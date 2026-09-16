#include <stdio.h>

#define MAX 5

int queue[MAX];
int priority[MAX];
int size = 0;

// Insert
void insert(int value, int p)
{
    if (size == MAX)
    {
        printf("Priority Queue Overflow\n");
        return;
    }

    queue[size] = value;
    priority[size] = p;
    size++;

    printf("%d inserted with priority %d\n", value, p);
}

// Delete highest priority element
void delete()
{
    int i, pos = 0;

    if (size == 0)
    {
        printf("Priority Queue Underflow\n");
        return;
    }

    // Find highest priority
    for (i = 1; i < size; i++)
    {
        if (priority[i] < priority[pos])
        {
            pos = i;
        }
    }

    printf("%d deleted\n", queue[pos]);

    // Shift elements
    for (i = pos; i < size - 1; i++)
    {
        queue[i] = queue[i + 1];
        priority[i] = priority[i + 1];
    }

    size--;
}

// Display
void display()
{
    int i;

    if (size == 0)
    {
        printf("Priority Queue is empty\n");
        return;
    }

    printf("Element\tPriority\n");

    for (i = 0; i < size; i++)
    {
        printf("%d\t%d\n", queue[i], priority[i]);
    }
}

int main()
{
    insert(10, 2);
    insert(20, 1);
    insert(30, 3);
    insert(40, 1);

    display();

    delete();

    display();

    return 0;
}