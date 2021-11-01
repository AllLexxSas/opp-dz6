#include <iostream>
#include <limits>


std::ostream& endll(std::ostream &o)
{
	o << std::endl << std::endl;
	std::cin.clear(); // на случай, если предыдущий ввод завершился с ошибкой
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return o;
}

int main()
{
	int a;


	while (!(std::cin >> a) || std::cin.get() != '\n')
	{
		std::cout << "not\n";
		std::cin.clear();
		std::cin.sync();
	}
	std::cout << a << "\n" << endll;

	return 0;
}
