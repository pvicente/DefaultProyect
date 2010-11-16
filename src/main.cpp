#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <getopt.h>
#include <stdint.h>
#include <string>

int main( int argc, char **argv )
{
	int opt = 0;
	while((opt = getopt(argc, argv, "p:h:")) != -1)
	{
		switch (opt)
		{
			case 'p':
				break;
			case 'h':
				break;
			default:
				puts("Usage:");
				puts("");
				exit(EXIT_FAILURE);
				break;
		};
	}


	int res = EXIT_SUCCESS;

	try
	{
		res = EXIT_SUCCESS;
	}
	catch (std::bad_alloc& ba )
	{
		res = EXIT_FAILURE;
	}

	exit(res);
}

