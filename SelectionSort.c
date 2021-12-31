//PROGRAM TO IMPLEMENT SELECTION SORT
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

    printf("\nEnter a numbers in arrary: "); //ACCEPTING THE NUMBERS IN ARRAY
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
{                                       //FUNCTION FOR SORT ARRAY IN ASCENING ORDER USING SELECTION SORT METHOD
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("\nSorted array in Ascending Order: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

void DescendingOrder(int arr[], int len) //FUNCTION FOR SORT ARRAY IN DESCENING ORDER USING SELECTION SORT METHOD
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("\nSorted array in Descending Order: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}