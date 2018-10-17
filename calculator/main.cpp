#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<list>
#include<map>
#include<vector>

using namespace std;

//exeptions 

class Operations {
public:
	virtual void abstract_operation() = 0;
};

class Push : Operations {};

class Context {
	list <string> arg;
	stack <float> st;

	void push() {}

	void pop() {}

	void pick() {}
};


class Calculator {
	map<string, void (*)()> operations;

	void search_op() {}

public:
	void define_new(string name, void(*func)()) {}

	void read(ifstream &in) {
		string operation, arg;

		while (!in.eof()) {
			getline(in, operation);
			for(auto cur = operation.begin(); cur != operation.end(); ++cur) {
				if (*cur == ' ')

			}
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
