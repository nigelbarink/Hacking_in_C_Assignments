#include<stdlib.h>

// implementation of memcmp 

int memcmp ( void *a, void *b, size_t n){
	unsigned int i;
	for ( i = 0; i < n ; i++) {
		char *a1 = a + i;
		char *b1 = b + i;
	
		char return_value = *a1 - *b1;
		if( return_value != 0)
			return (int)return_value;	
	}

	return 0;
}
