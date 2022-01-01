//PROGRAM TO IMPLEMENT STACK
//PRANAV SAWANT SYD 74

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Push(int stack[], int n, int *top);
void Pop(int stack[], int *top);
void Display(int stack[], int *top);

int main()
{
    int stack[4], top = -1, ch, n;
    while (ch != 4)
    {
        printf("\n****STACK OPERATIONS****"
               "\n1. Push"
               "\n2. Pop"
               "\n3. Display"
               "\n4. Exit"
               "\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter any number: ");
            scanf("%d", &n);
            Push(stack, n, &top);
            break;
        case 2:
            Pop(stack, &top);
            break;
        case 3:
            Display(stack, &top);
            break;
        case 4:
            break;
        default:
            printf("\nPlease enter between 1 to 4 only!!");
            break;
        }
    }
}

void Push(int stack[], int n, int *top)
{
    if ((*top) >= 4)
    {
        printf("\nStack is full");
    }
    else
    {
        (*top)++;
        stack[(*top)] = n;
    }
}

void Pop(int stack[], int *top)
{
    if ((*top) == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("%d is deleted from the stack", stack[(*top)]);
        (*top)--;
    }
}

void Display(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        for (int i; i < 10; i++)
            printf("%d vlaue: %d", i, stack[*top]);
    }
}