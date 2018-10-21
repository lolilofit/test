#include "Operations.h"



void Base::abstract_operation(list<string> arguments, Context &stack) {}

bool Operations::is_number(string val) {
	for (auto cur = val.begin(); cur != val.end(); ++cur) {
		if ((*cur != '.') &&( (*cur < '0') || (*cur > '9')))
			return 0;
	}
	return 1;
}

void PUSH::abstract_operation(list<string> arguments, Context &stack) {

	if (is_number(*(arguments.begin())))
		stack.push(stof(*(arguments.begin())));
	else
		stack.push(stack.find_val(*(arguments.begin())));
	

}



void POP::abstract_operation(list<string> arguments, Context &stack) {
	stack.pop();
}



void PLUS::abstract_operation(list<string> arguments, Context &stack) {
	float first = stack.top();
	stack.pop();
	float second = stack.top();
	stack.pop();
	stack.push(first + second);
}


void MINUS::abstract_operation(list<string> arguments, Context &stack) {
	float first = stack.top();
	stack.pop();
	float second = stack.top();
	stack.pop();
	stack.push(first - second);
}



void MULTIPLY::abstract_operation(list<string> arguments, Context &stack) {
	float first = stack.top();
	stack.pop();
	float second = stack.top();
	stack.pop();
	stack.push(first * second);
}



void DIVIDE::abstract_operation(list<string> arguments, Context &stack) {
	float first = stack.top();
	stack.pop();
	float second = stack.top();
	stack.pop();
	stack.push(first / second);
}



void SQRT::abstract_operation(list<string> arguments, Context &stack) {
	stack.push(sqrt(stack.top()));
}


void PRINT::abstract_operation(list<string> arguments, Context &stack) {
	cout << stack.top();
}


void DEFINE::abstract_operation(list<string> arguments, Context &stack) {
	stack.define_value(*(arguments.begin()), stof(*(++(arguments.begin()))));
}


void COMMENT::abstract_operation(list<string> arguments, Context &stack) {

}