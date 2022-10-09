// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct employee
{
	int Eid;
	char Ename[20];
	float Esalary;
};
struct employee input()
{
	struct employee b;
	scanf("%d", &b.Eid);
	fflush(stdin);
	fgets(b.Ename, 20, stdin);
	b.Ename[strlen(b.Ename) - 1] = '\0';
	scanf("%f", &b.Esalary);
	return b;
}
void display(struct employee E)
{
	
		printf("%d %s %f    ", E.Eid, E.Ename, E.Esalary);
}
void highsalary(struct employee e[], int N)
{
	int i;
	struct employee temp;
	for (i = 0; i < N; i++)
	{
		if (e[i].Esalary < e[i + 1].Esalary)
			
		{
			temp = e[i];
			e[i] = e[i + 1];
			e[i + 1] = temp;
		}
	}
}
int main()
{
	struct employee E1[3];
	int i;
	printf("enter the  10  employeeid employeename employeesalary :\n");
	for (i = 0; i < 3; i++)
		E1[i] = input();
    for(i=0;i<3;i++)
	highsalary(E1, 3);
	
	display(E1[0]);
	return 0;
}
