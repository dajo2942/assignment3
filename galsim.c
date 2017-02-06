#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "graphics.h"
#include "file_operations.h"

void read_from_file(char* filename, N_stars)
{

	FILE* file;
	file = fopen(filename, "r"); // opens file with read rights
	if(!file)
	{
		printf("Invalid filename, couldn't open file\n");
		break;
	}
	//get filesize 
	fseek(filename, 0L, SEEK_END);
	size_t filesize = ftell(filename); 
	//
	fseek(filename, 0L, SEEK_SET);

}


int main(int argc, char* argv[])
{
	int N_stars = atoi(argv[2]); // Number of stars
	char* input_file = argv[3]; // Filename 
	int N_time = atoi(argv[4]); // Number of time steps
	double dt = atof(argv[5]); // time step
	int gfx = atoi(argv[6]); // 1 if graphics is wanted, zero otherwhise
	if (argc !=6)
	{
		printf("Illegal input, 5 inputs expected. Only %d inputs given!\n", arg);
		return -1;
	}

	/*
	FILE* file; 
	file = fopen(input_file, "r"); // opens the file with read rights
	if (!file)
	{
		printf("Invalid filename, file couldn't open\n");
		return -1;
	}
	*/

}