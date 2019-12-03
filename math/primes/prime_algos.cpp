#include <vector>
#include <iostream>
#include <cmath>

using namespace std;


// Stolen from KTH notebook

/**
 * Author: Håkan Terelius
 * Date: 2009-08-26
 * License: CC0
 * Source: http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
 * Description: Prime sieve for generating all primes up to a certain limit. isprime$[i]$ is true iff $i$ is a prime.
 * Status: Tested
 * Time: lim=100'000'000 $\approx$ 0.8 s. Runs 30\% faster if only odd indices are stored.
 */

// Tricks:
// - Search for primes up to 'sqrt(lim)' (because every compositve under 'lim' has
// a prime divisor smaller than sqrt(lim))
// - Start inner loop at i*i, since we already visited previous multiples of i
// on earlier primes
const int MAX_PR = 5000000;
bitset<MAX_PR> isprime;
vector<int> sieve(int lim) {
	isprime.set(); isprime[0] = isprime[1] = 0;
	for (int i = 4; i < lim; i += 2) isprime[i] = 0;
	for (int i = 3; i*i < lim; i += 2) if (isprime[i])
		for (int j = i*i; j < lim; j += i*2) isprime[j] = 0;
	vector<int> pr;
	forr(i, 2, lim) if (isprime[i]) pr.push_back(i);
	return pr;
}

int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return b*a/lcm(a,b);
}

// A 'char' can be casted as expected to 'string'
// to_string(char) yields a string with the *number* 'char'
string from_decimal(int n, int b) {
    string chars = "0123456789ABCDEFXXXXXXXX";
    string res = "";
    while(n > 0) {
        res = chars[n % b] + res;
        n /= b;
    }
    return res;
}

// for a to_decimal routine, the sto-family can be used

int main() {
    cout << (char)('0'+10) << "\n";
}
