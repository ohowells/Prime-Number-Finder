#include <iostream>
#include <math.h>

bool IsPrime(const int& n)
{
    if (n < 2) return false;

    double n_2 = sqrt(n);
    for (auto i = 2; i <= n_2; i++)
        if (!(n % i)) return false;

    return true;
}

int main(void)
{
    int num = 25;
    std::cout << "Is " << num << " a prime number?";
    if (IsPrime(num))
        std::cout << "\nYes.";
    else
        std::cout << "\nNo.";

    std::cout << std::endl;

    return 0;
}
