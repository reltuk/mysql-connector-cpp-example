#include <iostream>

#include <mysqlx/xdevapi.h>
using namespace ::mysqlx;

int main(int argc, char **argv) {
	std::cout << "Hello, world!" << std::endl;
	const char   *url = (argc > 1 ? argv[1] : "mysqlx://root@127.0.0.1");
	Session sess(url);
}
