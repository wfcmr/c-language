#include <stdio.h>
int main(){
    int a = 0;
    double b = 0.0;
    float c = 0.0f;
    char d[4] ={'A','B','C','D'};
    
    scanf("%d %lf %f %s",&a,&b,&c,d);
    printf("Age:%d\n Score:%lf\n Height:%f\n Grade:%s\n",a,b,c,d);
    printf("Size of int:%d\n Size of double:%d\n Size of float:%d\n Size of char:%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    return 0;
}