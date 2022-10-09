// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.
#include<stdio.h>
#include<string.h>
struct student
{
	int s_rollno;
	char s_name[20];
	int chem_marks, maths_marks, phy_marks;
};
struct student input()
{
	struct student b;
	
	scanf("%d",&b.s_rollno);
	fflush(stdin);
	fgets(b.s_name,20,stdin);
b.s_name[strlen(b.s_name)-1]='\0';
	scanf("%d",&b.chem_marks);
    scanf("%d",&b.maths_marks);
    scanf("%d",&b.phy_marks);
	
	return b;
}
void display(struct student E)
{
		
	printf("\n%d %s %d %d %d %d",E.s_rollno,E.s_name,E.chem_marks,E.maths_marks,E.phy_marks,
    ((E.chem_marks + E.maths_marks + E.phy_marks)/300)*100);
}
int main()
{
struct student E1[2];
int i;
printf("enter the employeeid employeename employeesalary :\n");
for(i=0;i<2;i++)
E1[i]=input();

for(i=0;i<2;i++)
display(E1[i]);
return 0;	
}