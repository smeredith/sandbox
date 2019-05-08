#include <array>

template<size_t values>
constexpr std::array<bool, values> findPrimes()
{
    std::array<bool, values> primes{};
    primes.fill(true);

    primes[0] = false;
    primes[1] = false;
    primes[2] = true;

    size_t n = 2;
    while (n < values) {
        for (size_t nonPrime = n * n; nonPrime < values; nonPrime += n) {
            primes[nonPrime] = false;
        }
        ++n;
        while ((n < values) && (primes[n] == false)) {
            ++n;
        }
    }

    return primes;
}

