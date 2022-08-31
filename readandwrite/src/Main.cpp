#include <iostream>

namespace Lib {

	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}

}




int main()
{
	Lib::Print("hej");
}