#include <iostream>

void function(std::string message){
	std::cout << "Msg: " << message << std::endl;
}

int main(int args, const char **kargs){
	std::cout << "Hello World!" << std::endl;
	std::cout << "New Change" << std::endl;
	std::cout << "New Change Today" << std::endl;

	function("Hola");
}
