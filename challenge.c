#include <stdio.h>
#include <stdlib.h>

void add(int arr[], int c,  int *length);
void delete(int arr[], int c, int *length);
void modify(int arr[], int c, int *length);
void search(int arr[], int c, int *length);
void sort(int arr[], int c, int *length);

int main(void)
{
    //changed nothing
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
    printf("\n");
}

void delete(int arr[], int c, int *length)
{
    int b;
    printf("Enter position to delete (0-based): \n");
    if (scanf("%d", &b) != 1)
    {
        exit(1);
    }
    if (b >= *length)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (int i = b; i < *length; i++)
        {
            arr[i] = arr[i + 1];
        }
        (*length)--;
        printf("Array now:");
        for(int i = 0; i < *length; i++)
        {
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
}

void modify(int arr[], int c, int *length)
{
    int a;
    int b;
    printf("Enter position to modify (0-based): \n");
    if (scanf(" %d", &a) != 1)
    {
        exit(1);
    }
    printf("Enter new value: \n");
    if (scanf(" %d", &b) != 1)
    {
        exit(1);
    }
    if (a < 0 || a >= *length)
    {
        printf("Invalid position!\n");
        return;
    }
    arr[a] = b;
    printf("Array now:");
    for(int i = 0; i < *length; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

void search(int arr[], int c, int *length)
{
    int a;
    int position;
    printf("Enter element to search for: \n");
    if (scanf(" %d", &a) != 1)
    {
        exit(1);
    }
    int d = 0;
    for (int i = 0; i < *length; i++)
    {
        if (arr[i] == a)
        {
            position = i;
            d = 1;
        }
    }
    if (d == 1)
    {
        printf("Element found at position %d", position);
    }
    else
    {
        printf("Element not found.");
    }
    printf("\n");
}

void sort(int arr[], int c, int *length)
{
    int swap = 1;
    while (swap != 0)
    {
        swap = 0;
        for (int i = 0; i < (*length - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swap++;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
    printf("Array now:");
    for(int i = 0; i < *length; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}