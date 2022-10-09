//3. Write a function to display employee data. [ Refer structure from question 1 ]

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
	printf("enter the employeeid employeename employeesalary :\n");
	scanf("%d",&b.Eid);
	fflush(stdin);
	fgets(b.Ename,20,stdin);
b.Ename[strlen(b.Ename)-1]='\0';
	scanf("%f",&b.Esalary);
	
	return b;
}
void display(struct employee E)
{
		
	printf("%d %s %f",E.Eid,E.Ename,E.Esalary);
}
int main()
{
struct employee E1[5];
int i;
for(i=0;i<5;i++)
E1[i]=input();

for(i=0;i<5;i++)
display(E1[i]);
return 0;	
}
