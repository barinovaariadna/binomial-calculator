#include "BinomialCalculator.cpp"
#include <iostream>

int main() 
{
    BinomialCalculator calculator;

    int n = 3, k = 2;
    std::cout << "Started naïve calculation for n = " << n << ", k = " << k << "... ";
    int binomial_coefficient = calculator.calculate(n, k);
    std::cout << "Binomial coefficient: " << binomial_coefficient << std::endl;

    n = 103, k = 5;
    std::cout << "Started calculating recursively for n = " << n << ", k = " << k << "... ";
    auto res = calculator.calculate_recursively(n, k);
    std::cout << "Binomial coefficient: " << res << std::endl;
}