#include <stdio.h>

int main(void){

	//1�ڂ̐����A2�ڂ̐����A�a�A���A�ρA��
	int num1, num2, sum, diff, multi, quot, remain;
	
	printf("input 1st number: \n");
	scanf("%d", &num1);

	printf("input 2st number: \n");
	scanf("%d", &num2);


    sum = num1 + num2;
	diff = num1 - num2;
	multi = num1 * num2;
	quot = num1 / num2;
	remain = num1 % num2;

	 
	printf("�a: %d\n", sum); 
	printf("��: %d\n", diff);
	printf("��: %d\n", multi);
	printf("��: %d, �]��: %d\n", quot, remain);
	
	return 0;
}