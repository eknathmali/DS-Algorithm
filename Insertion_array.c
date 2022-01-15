#include <stdio.h>
//  This is Traversal
void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    for (int i = capacity - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
}

int main()
{

    int arr[100] = {1, 2, 6, 78};
    int size = 4, element = 45, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);

    return 0;
}

