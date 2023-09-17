#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Numbers.");
scanf("%d%d%d",&a,&b,&c);
    if(a>b)
      {
        if(a>c)
      {
      printf("%d is greatest.",a);//hey
      }
      else
      {printf("%d is greatest.",c);}
    }
    else
    {
        if(b>c)
        {//this is written by sarthak gupta

         printf("%d is greatest.",b);
        }
        else
{printf("%d is greatest.",c);}
    }


return 0;
}
