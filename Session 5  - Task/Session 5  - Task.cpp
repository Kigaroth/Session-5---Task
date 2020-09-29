// Session 5 //

#include <iostream>


void swap(int& a, int& b) {
    int Ptr_Swap = a;
    a = b;
    b = Ptr_Swap;
    return;
}

int main()
{
    int a = 10;
    int* pointera = &a;
    int b = 20;
    int* pointerb = &b;

    std::cout << " a is currently " << *pointera << " " << &pointera << std::endl;
    std::cout << " b is currently " << *pointerb << " " << &pointerb << std::endl;
    std::cout << "\n Let's swap their values!\n" << std::endl;
    swap(a, b);
    std::cout << " a is now " << *pointera << " " << &pointera << std::endl;
    std::cout << " b is now " << *pointerb << " " << &pointerb << std::endl;


}

