#include<stdio.h>
#include<conio.h>
void main() 
{ 
        int number,first=0,second=1,third,increase=2;
        clrscr(); 
        printf("enter the number"); 
        scanf("%d",&number);
        printf("%d%d",first,second); 
        while(increase<number) 
        {
             third=first+second;
             first=second;
             second=third;
             increase=increase+1;
             printf("%d",third);
        }
        getch();
}