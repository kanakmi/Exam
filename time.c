#include<stdio.h>
int main(){
    int h1,m1,s1,h2,m2,s2,h=0,m=0,s;
    scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    s=s1+s2;
    if(s>60){
        s=s%60;
        m++;
    }
    m=m+m1+m2;
    if(m>60){
        m=m%60;
        h++;
    }
    h=h+h1+h2;
    printf("%d %d %d",h,m,s);
return 0;
}


