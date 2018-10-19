#include "context.h"

void Context::define_value(string name, float value) {
	defined_arg.insert(pair<string, float>(name, value));
}

float Context::find_val(string name) {
	return defined_arg[name];
}

void Context::push(float value) {
	st.push(value);
}

void Context::pop() {
	st.pop();
}

float Context::top() {
	return st.top();
}