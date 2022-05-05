#include <iostream>
#include <vector>
#include <cstdlib>
#include <iterator>
#include "Span.hpp"

int	randInt( void )
{
	srand(static_cast<unsigned int>(clock()));
	return ((rand() % ((50000) + 1)));
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "Generating 10000 numbers..." << std::endl;
	Span sp2 = Span(10000);
	std::vector<int> randNum(10000, 0);
	std::generate(randNum.begin(), randNum.end(), randInt);
	std::cout << "Adding..." << std::endl;
	sp2.addNumber(randNum.begin(), randNum.end());
	std::cout << "Analysing..." << std::endl;
	std::cout << "size:" << sp2.getSize() << std::endl;
	std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp2.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << "Generating 50000 numbers..." << std::endl;
	Span sp3 = Span(40000);
	std::vector<int> randNum2(40000, 0);
	std::generate(randNum2.begin(), randNum2.end(), randInt);
	std::cout << "Adding..." << std::endl;
	sp3.addNumber(randNum2.begin(), randNum2.end());
	std::cout << "Analysing..." << std::endl;
	std::cout << "size:" << sp3.getSize() << std::endl;
	std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp3.longestSpan() << std::endl;
	return 0;
}
