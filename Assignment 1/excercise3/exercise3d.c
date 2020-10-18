#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main (int argc , char** argv){
	uint16_t number;
	FILE* urandomFile = fopen( "/dev/urandom" , "r");
	if( !urandomFile ){
		perror("Could not open file for reading...");
		return EXIT_FAILURE;
	}	

	while(1){
		fread( &number, sizeof(uint16_t), 1, urandomFile);
		if( number == 42){
			break;
		}
		printf( "0x%x %u %d\n" , number, number, number );
	
	}
	fclose(urandomFile);


}


