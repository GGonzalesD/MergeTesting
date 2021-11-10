#include <iostream>

void sayHello(std::string name){
	std::cout << "Hello " << name << std::endl;
}

int main(int args, const char **kargs){
	std::cout << "Hello World!" << std::endl;
	std::cout << "New Change" << std::endl;
	std::cout << "New Change ToMorrow" << std::endl;

	sayHello("Poggers");
}
