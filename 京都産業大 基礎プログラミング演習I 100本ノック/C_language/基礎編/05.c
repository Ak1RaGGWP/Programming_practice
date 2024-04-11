#include <stdio.h>

int main(void){

	//1つ目の数字、2つ目の数字、和、差、積、商
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

	 
	printf("和: %d\n", sum); 
	printf("差: %d\n", diff);
	printf("積: %d\n", multi);
	printf("商: %d, 余り: %d\n", quot, remain);
	
	return 0;
}
