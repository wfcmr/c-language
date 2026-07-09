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
    // Function implementation
    return 0;
}