//2. Write a function to take input employee data from the user. [ Refer structure from
//question 1 ]

#include<stdio.h>
#include<string.h>
struct employee
{
	int Eid;
	char Ename[20];
	float Esalary;
};
struct employee input()
{
	struct employee b;
	printf("enter the employeeid employeename employeesalary :");
	scanf("%d",&b.Eid);
	fflush(stdin);
	fgets(b.Ename,20,stdin);
	b.Ename[strlen(b.Ename)-1]='0';
	scanf("%f",&b.Esalary);
	return b;
}
int main()
{
struct employee E1;
E1=input();
return 0;	
}
