#ifndef  CONTEXT_H
#define CONTEXT_H

#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<list>
#include<map>
#include<vector>

using namespace std;


class Context {
	map <string, float> defined_arg;
	stack <float> st;

public:
	void define_value(string name, float value);

	float find_val(string name);

	void push(float value);

	void pop();

	float top();
};

#endif