// 6. Write a function to sort employees according to their names [refer structure from
// question 1]
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
	printf("\n%d %s %f", E.Eid, E.Ename, E.Esalary);
}

void sort_by_name(struct employee e[], int N)
{
	int r, i,j;
	struct employee temp;
	for (r = 1; r <= N - 1; r++)
	{
		for (i = 0; i <= N - 1 - r; i++)
		{
          
			for(j=0;j<20;j++)
               {
                 if (e[i].Ename[j] > e[i + 1].Ename[j])
				
			{
				temp = e[i];
				e[i] = e[i + 1];
				e[i + 1] = temp;
			}
               }
            
		}
	}
}
int main()
{
	struct employee E1[3];
	int i;
	printf("enter the 10 employeeid employeename employeesalary :\n");
	for (i = 0; i < 3; i++)
		E1[i] = input();

	for (i = 0; i < 3; i++)
		sort_by_name(E1, 3);

	// for(i=0;i<3;i++)
	// printf("%d ",E1[i].Esalary);

	for (i = 0; i < 3; i++)
		display(E1[i]);
	return 0;
}
