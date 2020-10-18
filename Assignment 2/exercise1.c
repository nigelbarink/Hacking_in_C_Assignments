#include <stdio.h>

void print_memory_layout (char *data, int size );

int main (void)
{
	short i = 0x1234;
	char x = -127;
	long sn1 = 1489156464;
	long sn2 = 1541654916;
	int y[2] = {0x11223344,0x44332211};

	printf("Size in bytes of i: %d\n", sizeof (i));
	printf("Size in bytes of x: %d\n", sizeof(x));
	printf("Size in bytes of sn1: %d\n", sizeof(sn1));
	printf("Size in bytes of sn2: %d\n", sizeof(sn2));
	printf("Size in bytes of y: %d\n", sizeof(y));
	
	// Print memory layout
	printf( "Address\t\tContent (hex)\tContent(dec)\n");
	print_memory_layout((char *)&i , sizeof(i));
	print_memory_layout((char *)&x , sizeof(x));
	print_memory_layout((char *)&sn1, sizeof(sn1));
	print_memory_layout((char *)&sn2, sizeof(sn2));
	print_memory_layout((char *)&sn1, sizeof(y));

}

void print_memory_layout (char *data , int size){
	for( int i = 0 ; i < size ; i++ ){	
		printf("0x%08x\t0x%08x\t\%d\n", &data[i], data[i],data[i]);
	}
}	
