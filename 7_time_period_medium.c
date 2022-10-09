// 7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
#include<math.h>
struct time
{
    int f1,f1_1,f2,f2_2;

    /* data */
};
void diff(struct time p)
{
    printf("%d:%02d",abs(p.f1-p.f2),abs(p.f1_1-p.f2_2));
}
int main()
{
    printf("enter t1 and t2 in standard form full day and night ");
 struct time t;
    scanf("%d:%d %d:%d",&t.f1,&t.f1_1,&t.f2,&t.f2_2);
   
       if(t.f1<t.f2 && t.f1_1>t.f2_2)
       {
     printf("%d:%02d",abs(t.f1-t.f2)-1,abs(60-t.f1_1)+t.f2_2);
       } 
       if(t.f1>t.f2 && t.f1_1<t.f2_2)
       {
     printf("%d:%02d",abs(t.f1-t.f2)-1,abs(60-t.f2_2)+t.f1_1);
       } 
 
    return 0;
}
