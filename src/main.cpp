#include <iostream>

int main()
{
	std::cout<<"Hello\n";
	
	if (!PRODUCTION_BUILD)
	{
		std::cout<<"Extra Debug info\n";
		//...
	}
	
	return 0;
}