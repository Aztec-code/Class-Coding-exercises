#include <stdio.h>
#include <stdlib.h>

void add(int arr[], int c,  int *length);
void delete(int arr[], int c, int *length);
void modify(int arr[], int c, int *length);
void search(int arr[], int c, int *length);
void sort(int arr[], int c, int *length);

int main(void)
{
    int a;
    int b;
    int c = 100;
    printf("Enter the number of elements in the array: \n");
    if (scanf("%d", &a) != 1)
    {
        return 1;
    }
    int arr[c];
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
                add(arr, c, &a);
                break;
            case 2:
                delete(arr, c, &a);
                break;
            case 3:
                modify(arr, c, &a);
                break;
            case 4:
                search(arr, c, &a);
                break;
            case 5:
                sort(arr, c, &a);
                break;
        }
        printf("\n");
    } while(b != 0);
    if (b == 0)
    {
        printf("Exiting program.\n");
    }
}

void add(int arr[], int c, int *length)
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
    for (int i = *length; i > b; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[b] = a;
    (*length)++;
    printf("Array now:");
    for(int i = 0; i < *length; i++)
    {
        printf(" %d", arr[i]);
    }
}

void delete(int arr[], int c, int *length)
{
   
}

void modify(int arr[], int c, int *length)
{
   
}

void search(int arr[], int c, int *length)
{
   
}

void sort(int arr[], int c, int *length)
{
   
}