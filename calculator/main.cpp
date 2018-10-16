#include<iostream>
#include<fstream>
#include<string>
#include<stack>

using namespace std;

class Operations {
	Calc *p;
 public:
	 virtual void abstract_operation() = 0;
};

class Pop : public Operations {
public:
	void abstract_operation() {
	  
	}
};

class Push : public Operations {
public:
	void abstract_operation() {}
};

class Calc {
	stack <float> st;
    public:
		virtual Operations *set_operation() = 0;
		void call(string operation, ifstream &in) {
			string operand, num;

			if (operation == "PUSH") {
				if (!in.eof())
					getline(in, operand, ' ');
			}

			if (operation == "DEFINE") {
				if (!in.eof())
					getline(in, num, ' ');
				float number = stof(num);

				if (!in.eof())
					getline(in, operand, ' ');
			}

			//if(operation == "SQRT")


			//if(operation == "PRINT")

		}
};

class PushDef : public Calc {
    public:
		Operations *set_operation() {
			
		}
};

void read(ifstream &in) {
	string operation;

	while (!in.eof()) {
		getline(in, operation, ' ');
		//call(operation, in);
	}

}

int main(int argc, const char *argv[]) {
	ifstream in;
	
	if (argc == 2) {
		in.open(argv[1]);
	}


	 
	return 0;
}