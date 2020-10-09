#include <stdio.h>
#include <string.h>


int main ( int argc, char** args ){
	/*
	* About this program:
	* Reads a genome file and checks if its contents is valid.
	* If the content is invalid the program exits with -1 otherwise the program exits with 0 
	*/
	

	if( argc != 2){
		printf("Program use: ./a.out <filePath> );
	} else {

		string arg1 = args[1];
		string arg2 = args[2];

		printf("Argument 1 : %s , Argument 2 : %s \n", args[0], args[1]);
		
		FILE* genomeFile = fopen(arg1, 'r' );
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
		
		



		fclose (genomeFile);
		exit(0);

	}

}
