#include <stdio.h>

#include <swift.h>

#include "main.h"

using namespace std;
using namespace swift;

const char* ADDRESS_1 = "127.0.0.1:8080";

int main(int argc, char *argv[])
{
	fprintf(stdout,"Started main program!\n");
	LibraryInit();
	Address address = Address(ADDRESS_1);
	Listen(address);
	int swarm_id = Open("/home/vincent/Downloads/tutorial.pdf");
	fprintf(stdout,"Swarm ID: %d\n",swarm_id);
	fprintf(stdout,"Done!\n");
}
