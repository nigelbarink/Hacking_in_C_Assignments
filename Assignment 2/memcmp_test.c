#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_array(int *array, size_t size);

int main ( int argc , char **argv )
{

	// Test cases
	int *test1 = malloc(3 * sizeof(int));
	int *test1_2 = malloc(3 * sizeof(int));
	
	*(test1) = *(test1_2) = 1;
	*(test1 + 1) = *(test1_2 + 1) = 2;
	*(test1 + 2) = *(test1_2 + 2) = 3; 
	
	int result;


	result  = memcmp(test1, test1_2, 0 );	

	printf ("Result should: 0 got %d\n", result);

	result = memcmp(test1, test1_2, 3);
	
	printf("Result should: 0 got %d\n", result);

	*(test1 + 2) = 5;  	
	printf("Array 1:");
	print_array(test1,  3); 
	printf("Array 2:");
	print_array(test1_2, 3);


	result = memcmp(test1, test1_2, 3);
	
	printf("Result should: 0 got %d\n", result);

	free (test1);
	free(test1_2);
}

void print_array(int *array, size_t size){
	for( int i =0; i < size; i++){
		printf( "%d\n", *(array+i));
	}
}
