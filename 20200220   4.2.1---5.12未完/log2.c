#include <stdio.h>

main()
{
	int x;
	int ret = 0;
	
	x = 128;
	int t = x;
	while ( x > 1 ){
		x /=2;
		ret ++;
	}
	printf("log2 of %d is %d.",t,ret);
	
	return 0;
}
