//PROGRAM TO IMPLEMENT COUNTING SORT
//PRANAV SAWANT SYD 74

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void AscendingOrder(int arr[], int len); //FUNCTION DECLARATION
void DescendingOrder(int arr[], int len);

int main()
{
    system("cls"); //CLEAR SCREEN

    int arr[20], len, ch; //VARIABLE DECLARATION

    printf("\nEnter how many numbers you want to enter(Less than 20): "); //SIZE OF THE ARRAY REQUIRED
    scanf("%d", &len);

    printf("\nEnter a numbers in arrary(in 0's,1's & 2's): "); //ACCEPTING THE NUMBERS IN ARRAY
    for (int i = 0; i < len; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    while (ch != 3)
    {
        printf("\n\n1. Sort in Ascending order"
               "\n2. Sort in Descending order"
               "\n3. Exit"
               "\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            AscendingOrder(arr, len);
            break;
        case 2:
            DescendingOrder(arr, len);
            break;
        case 3:
            break;
        default:
            printf("\nEnter choice between 1 or 3!");
            break;
        }
    }
}

void AscendingOrder(int arr[], int len) //FUNCTION DEFINATIONS
{                                       //FUNCTION FOR SORT ARRAY IN ASCENING ORDER USING COUNTING SORT METHOD

    int count[3] = {0, 0, 0}, i, output[20];
    for (i = 0; i < len; i++) //COUNT THE NUMBER OF OCCURENCE OF NUMBERS IN ARRAY
        switch (arr[i])
        {
        case 0:
            count[0]++;
            break;
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        }

    for (i = 1; i < len; i++) //
    {
        count[i] += count[i - 1];
    }

    for (i = len - 1; i >= 0; i--) //PLACING THE NUMBERS IN SORTED MANNER
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    printf("\nSorted array in Ascending Order: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", output[i]);
    }
}

void DescendingOrder(int arr[], int len) //FUNCTION FOR SORT ARRAY IN DESCENING ORDER USING COUNTING SORT METHOD
{
    int count[3] = {0, 0, 0}, i, output[20];
    for (i = 0; i < len; i++) //COUNT THE NUMBER OF OCCURENCE OF NUMBERS IN ARRAY
        switch (arr[i])
        {
        case 0:
            count[0]++;
            break;
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        }

    for (i = 1; i < len; i++) //
    {
        count[i] += count[i - 1];
    }

    for (i = len - 1; i >= 0; i--) //PLACING THE NUMBERS IN SORTED MANNER
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    printf("\nSorted array in Ascending Order: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", output[i]);
    }

    printf("\nSorted array in Descending Order: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}