#include <iostream>
#include <string>
#include <cmath>


using std::cout;using std::endl;using std::cin;
using std::string;

// Will return true if the n-th bit is 1, else false
bool get_bit(const uint64_t x, const uint8_t n){
    return ((x >> n) & 1ull);
}
void print_bits(const uint64_t x) {
    for (ssize_t n = sizeof(x)*8 -1; n >= 0 ; n--){
        cout << get_bit(x, n);
        if (n % 8 == 0) {
            cout << " ";
        }
    }


}




int main() {

    const string subject = "Programming";
    uint16_t val = 3;
    string nam = "lucs";

    // Brace initialization
    float pi{3.14159};  // Initializes the variable "pi" with the value 3.14159
    int zero{};        // Zero initialization

    //int err{3.14};   // Error
    uint64_t t = 10ull;

    int someArray[10]{84, 23, 45, 12, 45,
                      34, 85, 93, 15, 61};
    int *poin = &someArray[0];
    /*
    for (int i = 0; i < 10; i++) {
        cout << poin << " has value " << *poin << endl;
        poin++;
    }*/

    cout << gcd(75,25) << endl;






    return 0;
}

// Literals
/*
 *  Integers: 0, 1, 2, 3, ...
 *  Float: 0.1, 0.95, 0.35, ...
 *  String: " "
 *  Boolean: 1 or 0
 *
 */
// Fixed-width integers
/*
 * It guarantees to have the same size in any architecture
 *
 * int8_t  --> [-2^7, 2^7 -1],  1B signed
 * uint8_t --> [0, 2^8],        1B unsigned
 * int16_t --> [-2^15, 2^15 -1], 2B signed
 * uint16_t --> [0, 2^16], 2B unsigned
*/

// Bitwise
/* A bitwise operation takes two non-negative numbers and apply the operation bit by bit
 * 5 << 2 = 20
 * (x << k) = x * 2^k
 * (x >> k) = floor( x / 2^k )
*/

// Arrays
/*
 * 
 *
 *
 *
 *
*/

// Literals
/*
 *
 * printf("%lld", 1LL); // correct, because 1LL has type long long
 * printf("%lld", 1);   // undefined behavior, because 1 has type int
 */



// Types
/* long long = 64 bits, 8 bytes
 * long = long int
 * long long = long long int
 *
 * An unsigned integer(uint) has a range of 0 to 4294967295
 * if we declare
 * uint x = 4294967298  --> it will store "2"
 * uint x = -1   --> It will return the largest possible value to uint

long i = 0xffff;
long j = 0xffffUL;
Here the values on the right must be converted to signed longs (32bit -> 64bit)
The "0xffff", an int, would converted to a long using sign extension, resulting in a negative value (0xffffffff)
The "0xffffUL", an unsigned long, would be converted to a long, resulting in a positive value (0x0000ffff)
 */

// Functions
/*
 * When an array is passed into a function(argument), c++ does not copy the array. Actually
 * The array itself(the original) is passed. Thus, functions directly change the value of an
 * array.
 */

/*
 * Stack memory - It is limited, usually 16-64mb
 * When there's no memory on the stack = Stack over flow
 *
 * Heap memory - Dynamic memory
 *
 *
 *
 * int *a = new int(5);  // "We ask our os to give us 4 bytes and initialize with 7"
 * delete a;
 */