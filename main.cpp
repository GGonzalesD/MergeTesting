#include <iostream>

void sayHello(std::string name){
	std::cout << "Hello " << name << std::endl;
}

void function(std::string message){
	std::cout << "Msg: " << message << std::endl;
}

int main(int args, const char **kargs){
	std::cout << "Hello Big World!" << std::endl;
	std::cout << "New Change" << std::endl;
	std::cout << "New Change ToMorrow" << std::endl;

	sayHello("Poggers");
	std::cout << "New Change Today" << std::endl;

	function("Hola");
}
