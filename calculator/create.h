#ifndef CREATE_H
#define CREATE_H

#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<list>
#include<map>
#include<vector>
#include "context.h"
#include "operations.h"
#include"CreateOne.h"

using namespace std;

class Create {

public:

	static map<string, Create*> operations;

	Operations* factory_metod(list<string> arguments, Context *stack) {

		string name = *arguments.begin();
		arguments.remove(*(arguments.begin()));

		return (operations[name])->make(arguments, stack);
	}


	virtual Operations* make(list<string> arguments, Context *stack) {}
};


#endif