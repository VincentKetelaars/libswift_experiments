#include <swift.h>

#include "main.h"

using namespace std;
using namespace swift;

int main(int argc, char *argv[])
{
	LibraryInit();
	Address* address = Address("127.0.0.1:8080");
	Listen(address)
}
