#include<stdio.h>

void fun()
{
    auto int i=10;            //auto lihina optional
    i++;

    printf("value of i is :%d\n",i);   
}
int main()
{      
       int no=51;
       fun();
       fun();
       fun();
       
    return 0;
}