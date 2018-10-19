#ifndef CREATEONE_H
#define CREATEONE_H

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

using namespace std;


class CreatePush : public Create {
	
	Operations* make(list<string> arguments, Context *stack) override {
		return new PUSH();
	}
};



class CreatePop : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		POP *operation = new POP();
		return operation;
	}
};

class CreatePlus : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		PLUS *operation = new PLUS();
		return operation;
	}
};

class CreateMinus : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		MINUS *operation = new MINUS();
		return operation;
	}
};

class CreateDivide : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		DIVIDE *operation = new DIVIDE();
		return operation;
	}
};

class CreateMultiply : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		MULTIPLY *operation = new MULTIPLY();
		return operation;
	}
};

class CreateSqrt : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		SQRT *operation = new SQRT();
		return operation;
	}
};

class CreatePrint : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
	PRINT *operation = new PRINT();
	return operation;
	}
};

class CreateDefine : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		DEFINE *operation = new DEFINE();
		return operation;
	}
};

class CreateComment : public Create {
	Operations* make(list<string> arguments, Context *stack) override {
		COMMENT *operation = new COMMENT();
		return operation;
	}
};


#endif // !CREATEONE_H
