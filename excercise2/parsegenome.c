#include <stdio.h>
#include <string.h>


int main ( int argc, char** args ){
	if( argc != 2){
		printf("Program use: ./a.out <filePath> );
	} else {

		string arg1 = args[1];
		string arg2 = args[2];

		printf("Argument 1 : %s , Argument 2 : %s \n", args[0], args[1]);
		
		FILE* genomeFile = fopen(arg1, 'r' );
		//TODO: check file 		


		fclose (genomeFile);

	}

}
