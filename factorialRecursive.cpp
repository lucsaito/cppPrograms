//
// Created by Lucas on 07/10/20.
//

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}