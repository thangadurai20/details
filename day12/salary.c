#include<stdio.h>

int main(){
FILE *fpt;
	
fpt=fopen("emp_ctc.txt","w");

int emp_id,salary,total_days;
char emp_name[30];
//char *name;

printf("id:");
scanf("%d",&emp_id);
printf("salary");
scanf("%d",&salary);
printf("totaldays");
scanf("%d",&total_days);
printf("emp_name: ");
scanf("%s",emp_name);

fprintf(fpt,"emp_id: %d\nsalary: %d\ntotal_days: %d\nemp_name: %s\n",emp_id,salary,total_days,emp_name);
fclose(fpt);

FILE *fpt2;
fpt2=fopen("attn.txt","w");
int present_days;
printf("present_days: ");
scanf("%d",&present_days);
fprintf(fpt2,"emp_id: %d\npresent_days: %d\n",emp_id,present_days);
fclose(fpt2);


FILE *fpt3;

fpt3=fopen("emp_month_sal.txt","w");
int abs=total_days-present_days;
int ded_sal=(salary/total_days)*present_days;

printf("absdays: %d\n",abs);
printf("final_salary: %d\n",ded_sal);
fprintf(fpt3,"absent days: %d\nfinal salary: %d\n",abs,ded_sal);
fclose(fpt3);

return 0;
}
