#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

// Notes:
// - Buscamos primos hasta 'sqrt(lim)', pues todo número compuesto debajo de lim
// tiene al menos un divisor menor o igual a 'lim' (y por ende un primo divisor)
// - Inner loop starts from i*i since we already know for earlier multiples m of
// i we know that m = i*s with s < i, so we must have already visited it
void criba(vector<bool>& is_prime, int lim){ // O(n log log n)
    is_prime.clear();
    is_prime.resize(lim, true);
    is_prime[0] = false;
    is_prime[1] = false;
    int cota = sqrt(lim);
    for (int i = 2; i <= cota; i++) {
        if (is_prime[i] == true) {
            for (int j = i*i; j < lim; j+=i) {
                is_prime[j] = false;
            }
        }
    }
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
