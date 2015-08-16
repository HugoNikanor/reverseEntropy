#include <iostream>
#include <cstdlib>
#include <string.h>
#include <ctype.h>

#include <stdio.h>

int main(int argc, char* argv[]) {
	if(argc == 4) {
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < strlen(argv[i]); j++) {
				argv[i][j] = toupper(argv[i][j]);
			}
		}
		if(
			strcmp(argv[1], "ENTROPY")  == 0 &&
			strcmp(argv[2], "BE")       == 0 &&
			strcmp(argv[3], "REVERSED") == 0 
		) {
			std::cout <<
			"THERE IS AS YET INSUFFICIENT DATA FOR A MEANINGFUL ANSWER"
			<< std::endl;
		}
	}

	return EXIT_SUCCESS; //Let there be light
}
