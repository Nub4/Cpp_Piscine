#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
	
	std::vector<int> vec(std::begin(arr), std::end(arr));
	std::cout << easyfind(vec, 2) << std::endl;
	try{
		std::cout << easyfind(vec, 8) << std::endl;
	}
	catch (std::exception const &e){
		std::cerr << e.what() << std::endl;
	}

	std::list<int> li(std::begin(arr), std::end(arr));
	std::cout << easyfind(li, 2) << std::endl;
	try{
		std::cout << easyfind(li, 8) << std::endl;
	}
	catch (std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}