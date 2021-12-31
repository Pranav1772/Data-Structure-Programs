//PROGRAM TO IMPLEMENT A BINARY SEARCH
//PRANAV SAWANT SYD 74

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void BinarySearch(int arr[], int lb, int ub, int key); //FUNCTION DECLARATION

int main()
{

    system("cls"); //CLEAR SCREEN

    int lb = 0, ub, arr[20], key, ans;

    printf("\nEnter how many numbers you want to enter(Less than 20): "); //SIZE OF THE ARRAY REQUIRED
    scanf("%d", &ub);

    printf("\nEnter a numbers in arrary: "); //ACCEPTING THE NUMBERS IN ARRAY
    for (int i = 0; i < ub; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number to search: "); //KEY VALUE TO SEARCH
    scanf("%d", &key);

    BinarySearch(arr, lb, ub, key);
}

void BinarySearch(int arr[], int lb, int ub, int key)
{
    int mid = (lb + ub) / 2;
    while (lb <= ub && key != arr[mid])
    {
        if (key < arr[mid])
            ub = mid - 1;
        else
            lb = mid + 1;
        mid = (lb + ub) / 2;
    }
    if (lb <= ub)
        printf("\n%d found at %d location", key, mid + 1);
    else
        printf("\n%d not found in the array", key);
}