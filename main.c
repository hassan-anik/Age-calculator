#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int present_date, present_month,present_year, birth_date,birth_month,birth_year;
	int month[]= {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter present date: ");
	scanf("%d",&present_date);
	printf("Enter present month: ");
	scanf("%d",&present_month);
	printf("Enter present year: ");
	scanf("%d",&present_year);
	printf("Enter birth date: ");
	scanf("%d",&birth_date);
	printf("Enter birth month: ");
	scanf("%d",&birth_month);
	printf("Enter birth year: ");
	scanf("%d",&birth_year);
	if(present_date < birth_date)
    {
        present_date = present_date+month[birth_month-1];
        present_month = present_month-1;
    }
    if(present_month < birth_month)
    {
        present_month = present_month + 12;
        present_year = present_year-1;
    }
    int f_date = present_date - birth_date;
    int f_month = present_month - birth_month;
    int f_year = present_year- birth_year;
    printf("Your age: %d years %d months %d days", f_year,f_month,f_date);
	return 0;
}
