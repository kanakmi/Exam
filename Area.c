#include<stdio.h>
int main()
{
    int n,as;
    float ac;
    scanf("%d",&n);
    if(n%5==0){
        as=n*n;
        printf("Area of the Square: %d",as);
    }        
    else{
        ac=3.14*n*n;
        printf("Area of Circle: %f",ac);
    } 
return 0;
}
