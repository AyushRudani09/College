#include <stdio.h>
#include <string.h>
struct Employee_Details
{
	int Employee_id;
	char Name[100];
	char Designation[100];
	int Salary;
};
int main()
{
	struct Employee_Details e1;

	e1.Employee_id=1;
	strcpy(e1.Name,"Rano Rana Ni Rite");
	strcpy(e1.Designation,"Mevad");
	e1.Salary=100000;

	printf("Employee ID is:->%d\n Employee Name:->%s\n Employee Designation is:->%s\n Employee Salary is:->%d",e1.Employee_id,e1.Name,e1.Designation,e1.Salary);
	return 0;
}