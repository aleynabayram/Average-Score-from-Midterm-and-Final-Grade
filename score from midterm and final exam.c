/*The code finds your average grade from your midterm and final score*/

#include<stdio.h>

int main(){
	
	float midterm_mark;
	float final_mark;
	float final_percentage;
	float midterm_percentage;
	float result;
	
	printf("Please enter your midterm percentage:% ");
	scanf("%f",&midterm_percentage);
	
	printf("Please enter your midterm mark:");
	scanf("%f",&final_mark);
	
	printf("Please enter your final percentage:% ");
	scanf("%f",&final_percentage);
	
	printf("Please enter your midterm mark: ");
	scanf("%f",&midterm_mark);
	
	result= ((midterm_percentage*midterm_mark)+(final_percentage*final_mark))/100;
	
	printf("Your average grade is:%.3f",result);
	
	return 0;
	
}
