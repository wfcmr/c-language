#include <stdio.h>
int max(int a,int b){
    if(a > b) return a;
    else if(a < b) return b;
    else return a;
}

int min(int a,int b){
    if(a < b) return a;
    else if(a > b) return b;
    else return a;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Max: %d\n", max(a, b));
    printf("Min: %d\n", min(a, b));
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}