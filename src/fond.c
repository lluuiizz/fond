#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//	Define the type of expressions that the user can search. All of them will be
//	explained in an fond --help
static const char *EXPRESSIONS[] = {"/", "/'", "/s/", "/'s/", "/`s/", "/`/"};

#define CHECK_ARGS_COUNTER(args) (args > 1) ? true : false

void usage(void);

int main (int argc, char **argv) {

	if ( CHECK_ARGS_COUNTER(argc) ) {
		printf("It's valid!!!\n");
	}	else {
		usage();
	}

	return 0;
}


void usage(void) {
	printf("This is the HELPER. NEED TO DO YET!\n");
}
