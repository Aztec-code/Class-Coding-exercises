#include <stdio.h>
#include <stdlib.h>

void add(int arr[], int length);
void delete(int arr[], int length);
void modify(int arr[], int length);
void search(int arr[], int length);
void sort(int arr[], int length);

int main(void)
{
    int a;
    int b;
    printf("Enter the number of elements in the array: \n");
    if (scanf("%d", &a) != 1)
    {
        return 1;
    }
    int arr[a];
    printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++)
    {
        scanf(" %d", &arr[i]);
    }
    do
    {
        printf("\n");
        printf("Choose an operation:\n");
        printf("1. Add an element\n");
        printf("2. Delete an element\n");
        printf("3. Modify an element\n");
        printf("4. Search for an element\n");
        printf("5. Sort the array\n");
        printf("0. Exit\n");
        printf("Enter your choice: \n");
        if (scanf(" %d", &b) != 1)
        {
            return 1;
        }
        switch (b)
        {
            case 1:
                add(arr, a);
                break;
            case 2:
                delete(arr, a);
                break;
            case 3:
                modify(arr, a);
                break;
            case 4:
                search(arr, a);
                break;
            case 5:
                sort(arr, a);
                break;
        }
    } while(b != 0);
    if (b == 0)
    {
        printf("Exiting program.\n");
    }
}

void add(int arr[], int length)
{
    int a;
    int b;
    printf("Enter element to add: \n");
    if (scanf("%d", &a) != 1)
    {
        exit(1);
    }
    printf("Enter position to add (0-based): \n");
    if (scanf("%d", &b) != 1)
    {
        exit(1);
    }
    for (int i = 0; i < length; i++)
    {

    }
}

void delete(int arr[], int length)
{
   for (int i = 0; i < length; i++)
    {

    }
}

void modify(int arr[], int length)
{
   for (int i = 0; i < length; i++)
    {
        
    }
}

void search(int arr[], int length)
{
   for (int i = 0; i < length; i++)
    {
        
    }
}

void sort(int arr[], int length)
{
   for (int i = 0; i < length; i++)
    {
        
    }
}