// 9. Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<string.h>
struct student
{
	int s_rollno;
	char s_name[20];
	float s_perc;
};
struct student input()
{
	struct student b;
	
	scanf("%d",&b.s_rollno);
	fflush(stdin);
	fgets(b.s_name,20,stdin);
b.s_name[strlen(b.s_name)-1]='\0';
	scanf("%f",&b.s_perc);
	
	return b;
}
void display(struct student E)
{
		
	printf("\n%d %s %f",E.s_rollno,E.s_name,E.s_perc);
}
int main()
{
    int n;
    printf("Enter no of student :  ");
    scanf("%d",&n);
struct student E1[n];
int i;
printf("enter the employeeid employeename employeesalary :\n");
for(i=0;i<n;i++)
E1[i]=input();

for(i=0;i<n;i++)
display(E1[i]);
return 0;	
}
