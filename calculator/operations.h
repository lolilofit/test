#ifndef OPERATIONS_H
#define OPERATIONS_H

#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<list>
#include<map>
#include<vector>
#include "context.h"


using namespace std;

class Operations {
public:
	virtual void abstract_operation(list<string> arguments, Context *stack) = 0;
	virtual bool is_number(string val) = 0;
};

class PUSH : public Operations {

	bool is_number(string val);

public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class POP : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class PLUS : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class MINUS : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class MULTIPLY : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class DIVIDE : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class SQRT : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class PRINT : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class DEFINE : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

class COMMENT : public Operations {
	bool is_number(string val);
public:
	void abstract_operation(list<string> arguments, Context *stack);
};

#endif // !1
