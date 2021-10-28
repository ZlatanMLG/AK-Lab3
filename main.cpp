#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

/*
Lab 3
IV-91
Valentyn Zhelepa
Made with respect
*/

int main(int argc, char* argv[]) {

	const char* short_options = "hvs::f:";

	const struct option long_options[] = {
		{"help",no_argument,NULL,'h'},
		{"version",no_argument,NULL,'v'},
		{"size",optional_argument,NULL,'s'},
		{"file",required_argument,NULL,'f'},
		{NULL,0,NULL,0}
	};

	int rez;
	int check_h = 1;
	int check_v = 1;
	int check_s = 1;
	int check_f = 1;
	int option_index;

	opterr=0;
	while ((rez = getopt_long(argc, argv, short_options,
		long_options, &option_index)) != -1) {

		switch (rez) {
		case 'h': {
			if (check_h > 0){
				printf("You`ve used help option.\nUnfortunatelly program is help-less :(\nTry -h or --help.\n\n");
			}
			check_h--;
			break;
		};
		case 'v': {
			if (check_v > 0){
				printf("You`ve used version option.\nCurrent version = 1.0.0.\nTry -v or --version.\n\n");
			}
			check_v--;
			break;
		};
		case 's': {
			if (check_s > 0){
				if (optarg != NULL)
					printf("You`ve used size option with value %s\nTry -s or --size.\n\n", optarg);
				else
					printf("You`ve used size option without value\nTry -s or --size.\n\n");
			}
			check_s--;
			break;
		};

		case 'f': {
			if (check_f > 0){
				printf("You`ve used file option (value is needed).\nFile = %s\nTry -f or --file.\n\n", optarg);
			}
			check_f--;
			break;
		};
		case '?': default: {
			printf("Error.\nError code: 404.\nYou`ve used unknown option or didn`t clarify value for the existing one.\n\n");
			break;
		};
		};
	};
	return 0;
};