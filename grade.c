#include<stdio.h>
void main()
{
int marks;
printf("enter your marks");
scanf("%d",&marks);
printf("marks=%d",marks);
if(marks<0 || marks>100)
{
printf(" marks should not exceed 100");
}
else if(marks<40)
{
printf("you got E grade");
}
else if(marks>=85 && marks<100)
{
printf("you got A grade ");
}
else if(marks>=70 && marks<84)
{
printf("you got B grade");
}
else if(marks>=55 && marks<69)
{
printf("you got C grade);
}
else if(marks>=40 && marks<54)
{
printf("you got D grade ");
}
getch();
}
