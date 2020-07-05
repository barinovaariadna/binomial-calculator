#include "BinomialCalculator.hpp"

int BinomialCalculator::calculate_factorial(int n) 
{
	int result = 1;
	for (int i = 1; i <= n; i++) 
		result *= i;

	return result;
}

int BinomialCalculator::calculate(int n, int k) 
{
	if (n < k)
		return 0;

	return calculate_factorial(n) / calculate_factorial(k) * calculate_factorial(n - k);
}

unsigned long BinomialCalculator::calculate_recursively(unsigned long n, unsigned long k)
{
    if(n < k)
        return 0;

    else if (k == 0 || k == n)
        return 1;

    else if (k == 1 || k == n-1)
        return n;

    else if (k + k < n)
       return (calculate_recursively(n - 1, k - 1) * n) / k;
   
    else   
       return (calculate_recursively(n - 1, k) * n) / (n - k);         
}