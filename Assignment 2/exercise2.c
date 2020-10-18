#include <stdio.h>
#include <stdbool.h>

int main (int argc , char **args){
	// How many bytes does the bool type use?
	bool test = true;
	printf("Size of bool in bytes: %d\n", sizeof(test));
	
	// Hex of a boolean when its value is set to true
	printf("Value of bool (State: True): 0x%08x\n", test);
	
	// Hex of a boolean when its value is set to false 
	test = false ;
	printf("Value of bool (state: False): 0x%08x\n", test);

	test = 255;
	if(test){
		printf("Bool with a value of 255 is interpreted as true\n");
	}
	else{
		printf("Bool with a value of 255 is interpreted as false\n");
	}
	test = -125;
	if(test){
		printf("Bool with a value of -125 is interpreted as true\n");
	}
	else{
		printf("Bool with a value of -125 is interpreted as false\n");
	}
	test = 0;
	if(test){
		printf("Bool with a value of 0 is interpreted as true\n");
	}
	else{
		printf("Bool with a value of 0 is interpreted as false\n");
	}
}
