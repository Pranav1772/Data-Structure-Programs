//PROGRAM TO IMPLEMENT A LINEAR SEARCH
//PRANAV SAWANT SYD 74

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void LinearSearch(int arr[], int key, int len); //FUNCTION DECLARATION

int main()
{

    system("cls"); //CLEAR SCREEN

    int i, arr[20], key, len, flag; //VARIABLE DECLARATION

    printf("\nEnter how many numbers you want to enter(Less than 20): "); //SIZE OF THE ARRAY REQUIRED
    scanf("%d", &len);

    printf("\nEnter a numbers in arrary: "); //ACCEPTING THE NUMBERS IN ARRAY
    for (i = 0; i < len; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number to search: "); //KEY VALUE TO SEARCH
    scanf("%d", &key);

    LinearSearch(arr, key, len); //FUNCTION CALL

    return 0;
}

void LinearSearch(int arr[], int key, int len) //FUNCTION DEFINATION
{
    int flag;

    for (int i = 0; i < len; i++) //LINEAR SEARCH
    {
        if (arr[i] == key)
        {
            printf("\n%d is found at %d location", key, i + 1);
            flag = 1; //IF KEY FOUND THEN SET TO 1
        }
    }

    if (flag != 1) //CONDITION TO CHECK IF KEY IS FOUND OR NOT
        printf("\n%d not found in the array", key);
}