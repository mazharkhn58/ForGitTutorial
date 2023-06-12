#include <bits/stdc++.h>

long long factorial(long long);

int main()
{
	long long n;
	std::cout << "Enter n" << std::endl;
	std::cin >> n;
	long long fact = factorial(n);
	std::cout << fact << std::endl;
	return 0;
}

long long factorial(long long n)
{
	if(n <= 1)
		return 1;
	return factorial(n-1)*n;
}
