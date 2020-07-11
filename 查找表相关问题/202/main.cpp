#include <iostream>

// 快慢指针
int bitSquareSum(int n) {
    int sum = 0;
    while(n > 0)
    {
        int bit = n % 10;
        sum += bit * bit;
        n = n / 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n, fast = n;
    do{
        slow = bitSquareSum(slow);
        fast = bitSquareSum(fast);
        fast = bitSquareSum(fast);
    }while(slow != fast);

    return slow == 1;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
