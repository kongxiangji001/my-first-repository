#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
main()
{
	int n;
	scanf("%d",&n);
	int i = n;
	int fact = 1;
	for( n; n > 1; n-- ){
		fact *= n;
	}
	printf("%d£¡= %d\n.", i , fact);
	
	return 0;
}
