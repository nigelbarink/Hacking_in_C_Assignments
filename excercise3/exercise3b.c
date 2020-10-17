#include <stdio.h>
#include <stdlib.h>

int main (int argc , char** argv ){
	
	// Open file for reading 
	// We are opening a device file for reading ,
	// which is like reading from a file but the file is not necessarily an actual file on disk.
	// instead it could be some sort of external device or a simple piece of software returning bytes to us
	FILE* fp = fopen("/dev/urandom", "r");	
	if( !fp){
		perror("File opening failed!");	
		return EXIT_FAILURE;
	}

	while ( 1 ){
		char random =  fgetc(fp);	
		if ( random == 42 ){
			break;
		}
		printf("Read 0x%x %u %d from /dev/urandom\n", random, random , random);
	//	getchar();	

	}
	fclose(fp);
}
