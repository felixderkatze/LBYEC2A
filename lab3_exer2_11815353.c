#include <stdio.h>
#include <stdlib.h>

main(){
	
int n1, n2, n3, n4, ;
float ave, sum, sum_of_squares;

	printf("Enter First Number: \n");
	scanf("%d", &n1);
	
	printf("Enter Second Number:  \n");
	scanf("%d", &n2);
	
	printf("Enter Third Number: \n");
	scanf("%d", &n3);
	
	printf("Enter Fourth Number: \n");
	scanf("%d", &n4);
	
	sum=(n1+n2+n3+n4);
	ave=(n1+n2+n3+n4)/4.0;	
	sum_of_squares=(n1*n1)+(n2*n2)+(n3*n3)+(n4*n4);
	
	printf("Sum: %d\n", sum);
	printf("Average: %.2f\n", ave);
	printf("sum of the Squares: %.2f\n", sum_of_squares);
	
	
	getch();
	return 0;
}
