#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<list>
#include<map>
#include<vector>
#include "context.h"
#include "operations.h"
#include "create.h"
#include "CreateOne.h"


using namespace std;


class Calculator {
   
	Context *stack;
	
public:

	void read(ifstream &in) {
		string operation, arg;
		list<string> arguments;
		
		while (!in.eof()) {
			getline(in, operation);
			for (auto cur = operation.begin(); cur != operation.end(); ++cur) {
				if ((*cur == ' ') || (cur++ == operation.end())) {
					arguments.push_back(arg);
					arg.clear();
				}
				else
					arg += *cur;
			}

			Create f;
			(f.factory_metod(arguments, stack))->abstract_operation(arguments, stack);

			arguments.clear();
		}
	}
};


int main(int argc, const char *argv[]) {
	ifstream in;

	if (argc == 2) {
		in.open(argv[1]);
	}


	return 0;
}