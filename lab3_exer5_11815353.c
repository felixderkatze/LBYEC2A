#include <stdio.h>
#include <stdlib.h>

main()
{
float us, chi, eu, pou;

	printf("Input US Dollar: ");
	scanf("%f", &us);
	
	chi=(us*6.94);
	eu=(us/1.10);
	pou=(us*0.76);
	
	printf("Chinese Yuan: %.2f\n", chi);
	printf("Euro Dollar: %.2f\n", eu);
	printf("British Pound: %.2f\n", pou);
	
	return 0;
}
