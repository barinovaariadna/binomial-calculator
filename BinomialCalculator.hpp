class BinomialCalculator
{
    public:
        int calculate(int n, int k);
        unsigned long calculate_recursively(unsigned long n, unsigned long k);
    private:
        int calculate_factorial(int n);
};