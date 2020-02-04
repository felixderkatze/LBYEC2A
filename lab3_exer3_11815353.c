#include <stdio.h>
#include <stdlib.h>

main()
{
float lby, eng, math, stat, gpa;

	printf("LBYEC2A grade: ");
	scanf("%f", &lby);
	
	printf("ENGCAL1 grade: ");
	scanf("%f", &eng);

	printf("FNDMATH grade: ");
	scanf("%f", &math);
	
	printf("FNDSTAT grade: ");
	scanf("%f", &stat);
	
	gpa=(lby+eng+math+stat)/4;
	
	printf("GPA: %.2f", gpa);

	return 0;
}
