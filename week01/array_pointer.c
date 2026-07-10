#include <stdio.h>

void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int main(void)
{
    int arr[5] = {10,20,30,40,50};

    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        printf("&arr[%d] = %p\n\n", i, (void *)&arr[i]);
    }


    printf("arr      = %p\n", (void *)arr);
    printf("&arr[0]  = %p\n", (void *)&arr[0]);



    int *p = arr;

    for(int i = 0; i < 5; i++)
    {
       printf("%d ", *(p+i));
    }


    printf("%zu\n", sizeof(arr));
    printf("%zu\n", sizeof(p));
    

    return 0;
}