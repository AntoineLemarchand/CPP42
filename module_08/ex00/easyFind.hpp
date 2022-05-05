#pragma once
#include<algorithm>

template<typename T>
typename T::iterator easyfind(T& t, int toFind)
{
	typename T::iterator ret = find(t.begin(), t.end(), toFind);

	if (ret == t.end() && *t.end() != toFind)
		throw std::exception();
	return (ret);
}
