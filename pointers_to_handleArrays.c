/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>

#define MAX_SIZE 10

// Function prototypes
void add_element(int *arr, int *size, int value); // Add an element at the end
int delete_all(int *arr, int *size, int value); // Delete all occurrences of a value
void sort_array(int *arr, int size); // Sort the array in ascending order
void reverse_array(int *arr, int size);  // Reverse the array
void display_array(int *arr, int size);  // Display array elements

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, value;

    while (1) {
        printf("\n--- Array Operations ---\n");
        printf("1. Add\n2. Delete All Occurrences\n3. Sort\n4. Reverse\n5. Exit\n");
        printf("Enter choice: \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to add: \n");
                scanf("%d", &value);
                add_element(arr, &size, value);
                display_array(arr, size);
                break;
            case 2:
                printf("Enter value to delete: \n");
                scanf("%d", &value);
                if (delete_all(arr, &size, value))
                    printf("All occurrences of %d deleted.\n", value);
                else
                    printf("%d not found.\n", value);
                display_array(arr, size);
                break;
            case 3:
                sort_array(arr, size);
                printf("Array sorted.\n");
                display_array(arr, size);
                break;
            case 4:
                reverse_array(arr, size);
                printf("Array reversed.\n");
                display_array(arr, size);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
void add_element(int *arr, int *size, int value)
{
    for (int i = 0; i <= *size; i++)
    {
        if (i == *size)
        {
            arr[i] = value;
        }
    }
    *size = *size + 1;
}
int delete_all(int *arr, int *size, int value)
{
    int found = 0;
    for (int i = 0; i < *size; i++)
    {
        if (arr[i] == value)
        {
            found++;
        }
    }
    if (found == 0)
    {
        return 0;
    }
    int deletion = 1;
    while (deletion != 0)
    {
        deletion = 0;
        for (int i = 0; i < (*size - 1); i++)
        {
            if (arr[i] == value)
            {
                for (int j = i; j < *size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                (*size)--;
                deletion = 1;
                break;
            }
        }
        if (!deletion && *size > 0 && arr[*size - 1] == value)
        {
            (*size)--;
            deletion = 1;
        }
    }
    return 1;
}
void sort_array(int *arr, int size)
{
    int swap = 1;
    while (swap != 0)
    {
        swap = 0;
        for (int i = 0; i < (size - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tmp = 0;
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swap++;
            }
        }
    }
}
void reverse_array(int *arr, int size)
{
    int reversing_order = size / 2;
    for (int i = 0; i < reversing_order; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
void display_array(int *arr, int size)
{
    printf("Array elements:");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}