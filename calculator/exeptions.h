#ifndef  EXEPTIONS_H
#define EXEPTIONS_H
#include<iostream>

class MyExceptions : std::exception {
public:
	virtual const char* what() const throw() { return "exeption happened"; }
};

class PushEcxeption : public MyExceptions {
public:
	const char* what() const throw() override { return "PUSH Failure"; }
};

class Push_lenght: public PushEcxeption {
	const char* what() const throw() override { return "PUSH bad lenght"; }
};

class Push_argument : public PushEcxeption {
	const char* what() const throw() override { return "PUSH bad argument"; }
};

class PopEcxeption : public MyExceptions {
	const char* what() const throw() override { return "POP failure"; }
};

class Pop_lenght : public PopEcxeption {
	const char* what() const throw() override { return "POP bad lenght"; }
};

class Pop_empty : public PopEcxeption {
	const char* what() const throw() override { return "stack is empty"; }
};

class PlusEcxeption : public MyExceptions {
public:
	const char* what() const throw() override { return "+ Failure"; }
};

class Plus_lenght : public PlusEcxeption {
	const char* what() const throw() override { return "Plus bad lenght"; }
};

class Plus_argument : public PlusEcxeption {
	const char* what() const throw() override { return "Plus bad argument"; }
};

class MinusEcxeption : public MyExceptions {
public:
	const char* what() const throw() override { return "- Failure"; }
};

class Minus_lenght : public MinusEcxeption {
	const char* what() const throw() override { return "Minus bad lenght"; }
};

class Minus_argument : public MinusEcxeption {
	const char* what() const throw() override { return "Minus bad argument"; }
};
#endif 
