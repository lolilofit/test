#include "module1.h"

namespace Module1
{
	std::string getMyName()
	{
		std::string name = "John";
		return name;
	}
	namespace Module3
	{
		std::string getMyName()
		{
			std::string name = "Peter";
			return name;
		}
	}
}
