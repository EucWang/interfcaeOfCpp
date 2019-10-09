#include <iostream>
// #include <stdlib.h>
#include "atom.h"

using namespace std;

int main(void) {
    // printf("main() run() begin..\n");
 
    std::cout << "main() run() begin.." <<std::endl;

	std::cout << "----------------------------------" << std::endl;
	Atom * a = new Atom("12312");
	std::cout << "length is " << a->getLength() << ", str is : " << a->getString() << endl;

	std::cout << "----------------------------------" << std::endl;
	Atom* b = new Atom(12312);
	std::cout << "length is " << b->getLength() << ", str is : " << b->getString() << endl;

	//const char* a = Atom_new("12314", 5);
    //const char * a = Atom_string("12314");
    //const char * b = Atom_int(12314);
    //std::cout << "first atom is " << a << "  and it's length is :" <<  Atom_length(a) << std::endl;
    //std::cout << "second atom is " << b  << " and it's length is :" <<  Atom_length(b) << std::endl;
	delete a, b;
    return 0;
}