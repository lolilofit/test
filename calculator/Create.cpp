#include "Create.h"

Operations* Create::factory_metod(list<string> &arguments, Context &stack) {

	string name = *arguments.begin();
	arguments.remove(*(arguments.begin()));
	return operations.at(name)->make(arguments, stack);
}

Operations* CreatePush::make(list<string> arguments, Context &stack) {
	catch_ecxeption(arguments, stack);
	return new PUSH();
}

void CreatePush::catch_ecxeption(list<string> arguments, Context &stack) {
	Operations fun;

	if (arguments.size() != 1) {
		Push_lenght e;
		throw e;
	}

	if ((!fun.is_number(*(arguments.begin())))&&(stack.count(*(arguments.begin())) == 0)) {
		Push_argument err;
		throw err;
	}
}

Operations* CreatePop::make(list<string> arguments, Context &stack) {
	catch_ecxeption(arguments, stack);
	return new POP();
}

void CreatePop::catch_ecxeption(list<string> arguments, Context &stack) {
	if (arguments.size() != 0) {
		Pop_lenght e;
		throw e;
	}

	if (stack.is_empty()) {
		Pop_empty e;
		throw e;
	}
}


Operations* CreatePlus::make(list<string> arguments, Context &stack) {
	catch_ecxeption(arguments, stack);
	return new PLUS();
}

void CreatePlus::catch_ecxeption(list<string> arguments, Context &stack) {
	Operations fun;

	if (arguments.size() != 2) {
		Plus_lenght e;
		throw e;
	}

	if ((!fun.is_number(*(arguments.begin()))) && (stack.count(*(arguments.begin())) == 0)) {
		Plus_argument err_one;
		throw err_one;
	}

	if ((!fun.is_number(*(arguments.begin()++))) && (stack.count(*(arguments.begin()++)) == 0)) {
		Plus_argument err_two;
		throw err_two;
	}
}

Operations* CreateMinus::make(list<string> arguments, Context &stack) {
	catch_ecxeption(arguments, stack);

	return new MINUS();
}

void CreateMinus::catch_ecxeption(list<string> arguments, Context &stack) {
	Operations fun;

	if (arguments.size() != 2) {
		Minus_lenght e;
		throw e;
	}

	if ((!fun.is_number(*(arguments.begin()))) && (stack.count(*(arguments.begin())) == 0)) {
		Minus_argument err_one;
		throw err_one;
	}

	if ((!fun.is_number(*(arguments.begin()++))) && (stack.count(*(arguments.begin()++)) == 0)) {
		Minus_argument err_two;
		throw err_two;
	}
}

Operations* CreateDivide::make(list<string> arguments, Context &stack) {
	catch_ecxeption(arguments, stack);
	return new DIVIDE();
}
//
Operations* CreateSqrt::make(list<string> arguments, Context &stack)  {
	SQRT *operation = new SQRT();
	return operation;
}

Operations* CreatePrint::make(list<string> arguments, Context &stack)  {
	PRINT *operation = new PRINT();
	return operation;
}

Operations* CreateDefine::make(list<string> arguments, Context &stack) {
	DEFINE *operation = new DEFINE();
	return operation;
}

Operations* CreateComment::make(list<string> arguments, Context &stack) {
	COMMENT *operation = new COMMENT();
	return operation;
}
