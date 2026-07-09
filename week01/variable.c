#include <stdio.h>
int main(){
    int a = 0;
    double b = 0.0;
    float c = 0.0f;
    char d[5] ={0};
    
    scanf("%d %lf %f %4s",&a,&b,&c,d);
    printf("Age:%d\nScore:%lf\nHeight:%f\nGrade:%s\n",a,b,c,d);
    printf("Size of int:%d\n Size of double:%d\n Size of float:%d\n Size of char:%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    return 0;
}