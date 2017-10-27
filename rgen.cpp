#include <unistd.h>
#include <iostream>

int main(int argc, char* argv[]) {
	int c;
	int sk = 10;
	int nk = 5;
	int lk = 5;
	int ck = 20;          

	opterr = 0;

	// expected options are '-a', '-b', and '-c value'
	while ((c = getopt(argc, argv, "s:n:l:c:")) != -1) {
		switch (c)
		{
		case 's':
			sk = atoi(optarg);
			break;
		case 'n':
			nk = atoi(optarg);
			break;
		case 'l':
			lk = atoi(optarg);
			break;
		case 'c':
			ck = atoi(optarg);
			break;
		}
	}

	std::cout << "sk = " << sk << " "
		<< "nk = " << nk << " "
		<< "lk = " << lk << " "
		<< "ck = " << ck << std::endl;

	return 0;
}