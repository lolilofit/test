#ifndef CALC_H
#define CALC_H

#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<list>
#include<map>
#include<vector>
#include "Context.h"
#include "Operations.h"
#include "exeptions.h"

	class Create {

	public:

		static const map<string, Create*> operations;
		
		Operations* factory_metod(list<string> &arguments, Context &stack);

		virtual Operations* make(list<string> arguments, Context &stack) { return (new Base()); };

		virtual void catch_ecxeption(list<string> arguments, Context &stack) {};
	};

	
	
	class CreatePush : public Create {

		Operations* make(list<string> arguments, Context &stack) override;

		void catch_ecxeption(list<string> arguments, Context &stack) override;
	};


	class CreatePop : public Create {
		Operations* make(list<string> arguments, Context &stack) override;

		void catch_ecxeption(list<string> arguments, Context &stack) override;
	};
	

	class CreatePlus : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
		void catch_ecxeption(list<string> arguments, Context &stack) override;
	};

	class CreateMinus : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
	};

	class CreateDivide : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
	};

	class CreateMultiply : public Create {
		Operations* make(list<string> arguments, Context &stack) override {
			MULTIPLY *operation = new MULTIPLY();
			return operation;
		}
	};

	class CreateSqrt : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
	};

	class CreatePrint : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
	};

	class CreateDefine : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
	};

	class CreateComment : public Create {
		Operations* make(list<string> arguments, Context &stack) override;
	};


#endif 
