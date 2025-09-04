#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
   
    // Check if n is less than 2
    if (n < 2) {
        return false;
    }

    // Check if n is 2 (the only even prime number)
    if (n == 2) {
        return true;
    }

    // If n is even and greater than 2, it's not prime
    if (n % 2 == 0) {
        return false;
    }

    // Check divisibility from 3 to the square root of n (only odd numbers)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }    
    }

    return true;  // n is prime
}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    int original = n;
    int reversed = 0;
   
    // Reverse the digits of the number
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    // Compare the reversed number with the original
    return original == reversed;

}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
   
    // A number is a prime palindrome if it is both prime and palindrome
    return isPrime(n) && isPalindrome(n);
}
