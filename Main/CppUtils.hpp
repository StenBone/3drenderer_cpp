#include <iostream>
/** Rule of 5, required if you are manually managing memory.  */
/** 
Utility class taken from Rule 9 of Jason Turner's "C++ Best Practices" book and 
"Murach's C++ Programing" by Mary Delamater and Joel Murach. 
*/
class RAIIPrinter {
private:
	int* elements = nullptr;
	const int size = 10;
public:
	// default constructor
	RAIIPrinter() { 
		std::cout << "RAIIPrinter()" << std::endl; 
		elements = new int[size];
	}
	// copy constructor
	RAIIPrinter(const RAIIPrinter& to_copy) { 
		std::cout << "RAIIPrinter(const RAIIPrinter&)" << std::endl; 
		elements = new int[size];
		for (int i = 0; i < size; i++) { // deep copy
			elements[i] = to_copy.elements[i];
		}
	}
	// copy assignment operator
	RAIIPrinter& operator=(const RAIIPrinter& to_copy) { // R = R
		std::cout << "RAIIPrinter &operator=(const RAIIPrinter &)" << std::endl;
		auto temp = new int[size];
		for (int i = 0; i < size; i++) { // deep copy
			temp[i] = to_copy.elements[i];
		}
		delete[] elements; // delete old
		elements = temp;
		return *this;
	}
	// move constructor
	RAIIPrinter(RAIIPrinter&& to_move) { // rvalue reference declarator(&&)
		std::cout << "RAIIPrinter(RAIIPrinter &&)" << std::endl;
		elements = to_move.elements;
		to_move.elements = nullptr;
	}
	// move assignment operator
	RAIIPrinter &operator=(RAIIPrinter&& to_move) {
		std::cout << "RAIIPrinter &operator=(RAIIPrinter &&)" << std::endl;
		delete[] elements;
		elements = to_move.elements;
		to_move.elements = nullptr;
		return *this;
	}
	// destructor
	~RAIIPrinter() {
		std::cout << "~RAIIPrinter()" << std::endl;
		delete[] elements;
	} // Destructor, if required then Rule of 5 applies
};