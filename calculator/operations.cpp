#include "operations.h"

bool PUSH::is_number(string val) {
	for (auto cur = val.begin(); cur != val.end(); ++cur) {
		if ((*cur != '.') || (*cur < '0') && (*cur > '9'))
			return 0;
	}
	return 1;
}

void PUSH::abstract_operation(list<string> arguments, Context *stack) {
		if (is_number(*(arguments.begin())))
			stack->push(stof(*(arguments.begin())));
		else
			stack->push(stack->find_val(*(arguments.begin())));

	}

bool POP::is_number(string val) { return 1; }

void POP::abstract_operation(list<string> arguments, Context *stack) {
		stack->pop();
	}

bool PLUS::is_number(string val) { return 1; }

void PLUS::abstract_operation(list<string> arguments, Context *stack) {
		float first = stack->top();
		stack->pop();
		float second = stack->top();
		stack->pop();
		stack->push(first + second);
}

bool MINUS::is_number(string val) { return 1; }

void MINUS::abstract_operation(list<string> arguments, Context *stack) {
		float first = stack->top();
		stack->pop();
		float second = stack->top();
		stack->pop();
		stack->push(first - second);
	}

bool MULTIPLY::is_number(string val) { return 1; }

void MULTIPLY::abstract_operation(list<string> arguments, Context *stack) {
	float first = stack->top();
	stack->pop();
	float second = stack->top();
	stack->pop();
	stack->push(first * second);
}


bool DIVIDE::is_number(string val) { return 1; }

void DIVIDE::abstract_operation(list<string> arguments, Context *stack) {
		float first = stack->top();
		stack->pop();
		float second = stack->top();
		stack->pop();
		stack->push(first / second);
}

bool SQRT::is_number(string val) { return 1; }

void SQRT::abstract_operation(list<string> arguments, Context *stack) {
		stack->push(sqrt(stack->top()));
}

bool PRINT::is_number(string val) { return 1; }

void PRINT::abstract_operation(list<string> arguments, Context *stack) {
		cout << stack->top();
}

bool DEFINE::is_number(string val) { return 1; }

void DEFINE::abstract_operation(list<string> arguments, Context *stack) {
		stack->define_value(*(arguments.begin()), stof(*(++(arguments.begin()))));
}

bool COMMENT::is_number(string val) { return 1; }

void COMMENT::abstract_operation(list<string> arguments, Context *stack) {

}