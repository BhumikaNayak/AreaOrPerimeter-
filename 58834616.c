#include<stdio.h>
int main()
{
    int Length,Breadth; //declaration of variables
    scanf("%d %d",&Length,&Breadth);
    fflush(stdin);
    int area,peri;
    
    area=Length*Breadth;
    peri=2*(Length+Breadth);
    
    if(area>peri)
    {
        printf("Area\n%d",area);
    }
    else if(peri>area)
    {
        printf("Peri\n%d",peri);
    }
    else
    {
        printf("Eq\n%d",peri,area);
    }
    return 0;
}
//code by bhumika nayak