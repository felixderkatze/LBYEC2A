#include <stdio.h>
#include <stdlib.h>

main()
{

char name[28];

	printf("Hello, What's your name?");
	scanf("%s", &name);
	
	printf("Hello %s, have a nice day!", name);
	return 0;
}
