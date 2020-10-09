#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char** args ){
	/*
	* About this program:
	* Reads a genome file and checks if its contents is valid.
	* If the content is invalid the program exits with -1 otherwise the program exits with 0 
	*/
	

	if( argc != 2){
		printf("Program use: ./a.out <filePath>");
	} else {


		printf("Argument 1 : %s\n", args[1]);
		
		FILE* genomeFile = fopen(args[1], "r" );
		/*
		* File specification/requirements
		* The file must contain:
		* - 500 lines of 100 character plus the newline character
		* - each line of 100 character only contains characters A, C, G or T
		*/

		// PSUEDO Code 
		// Step 1: Read the amount of bytes 101 characters take.
		// step 2: for the first 100 characters check if equal to A, C, G or T
		// step 3: If not okay close file and program exits (-1)
		// step 4: if okay check if the last byte is a newline
		// step 5: if not okay close file and program exits (-1)
		// step 6: if okay close file and program exits (0)
		
		const int LINESIZE = 101;
		unsigned int A = 0, G = 0, C = 0, T = 0;
		printf("start count: %i , %i , %i , %i\n" , A, C, G, T);
		for ( int i = 0; i < 500 ; i++){
			char line[LINESIZE];
			int bytesRead = fread(line, sizeof *line, LINESIZE, genomeFile);
			if( bytesRead != LINESIZE ){
				printf("Could only read %i bytes", bytesRead);
				goto FAILURE;
			}
		
			for ( int j = 0; j < 100; j++ ) {
				if( line[j] == 'A') {
					A ++;
					continue;
				}
				if( line[j] == 'C' ) {
					C ++;
					continue;
				}
				if( line[j] == 'G' ){
					G ++;
					continue;
				}
				if( line[j] == 'T' ) {
					T ++;
					continue;
				}
				printf("line %i character %i: %s is not valid.",i,j,line[j]);
				goto FAILURE;
			} 				

			if( line[100] != '\n') {
				printf("Read %c instead of newline ", line[100]);
				goto FAILURE;
			}
		}
		
		fclose (genomeFile);

		printf("Counted A's %i\nCounted C's %i\nCounted G's %i\nCounted T's %i\n" ,A ,C ,G ,T);
		exit(0);
		
		FAILURE:
			fclose(genomeFile);
			exit(-1);

	}
}
