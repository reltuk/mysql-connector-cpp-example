#include <iostream>

#include "mysql_driver.h"

int main(int argc, char **argv) {
	std::cout << "Hello, world!" << std::endl;

	sql::mysql::MySQL_Driver *driver;
	sql::Connection *con;

	driver = sql::mysql::get_mysql_driver_instance();
	con = driver->connect("tcp://127.0.0.1:3306", "user", "password");

	delete con;
}
