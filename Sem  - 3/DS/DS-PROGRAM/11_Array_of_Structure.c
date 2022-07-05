#include <stdio.h>
#include <string.h>

struct STUDENT_DETAILS
{
	int Enrollment_no;
	char Name[100];
	int Sem;
	float CPI;
};
int main()
{
	struct STUDENT_DETAILS std[5];

	for (int i = 0; i < 5; ++i)
	{
		printf("Enter %d Student Enrollment Number:->",i+1);
		scanf("%d",&std[i].Enrollment_no);
		printf("Enter %d Student Name:->",i+1);
		scanf("%s",std[i].Name);
		printf("Enter %d Student Semester:->",i+1);
		scanf("%d",&std[i].Sem);
		printf("Enter %d Student CPI:->",i+1);
		scanf("%f",&std[i].CPI);
	}

	printf("\nStudent Details is:->\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d Student Enrollment Number is:->%d \n %d Student Name is:->%s \n %d Student Semester is:->%d \n %d Student CPI is:->%f",i+1,std[i].Enrollment_no,i+1,std[i].Name,i+1,std[i].Sem,i+1,std[i].CPI);
	}
	return 0;
}