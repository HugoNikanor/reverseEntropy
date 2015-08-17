#include <iostream>
#include <cstdlib>
#include <string.h>
#include <ctype.h>

#include <stdio.h>

int main(int argc, char* argv[]) {
	if(argc == 4) {
		if(
			strcasecmp(argv[1], "ENTROPY")  == 0 &&
			strcasecmp(argv[2], "BE")       == 0 &&
			strcasecmp(argv[3], "REVERSED") == 0 
		) {
			std::cout <<
			"THERE IS AS YET INSUFFICIENT DATA FOR A MEANINGFUL ANSWER"
			<< std::endl;
		}
	}

	return EXIT_SUCCESS; //Let there be light
}
