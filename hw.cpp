#include <iostream>
// #include <hm.cpp>


double mulIt(double num) {
    return (num * 2);
}

int sumM(int, int);
void incMWithPtr(int* x);
void incMWithRef(int& x);

int main() {
    int a {10} ;
    float fa {12.2};
    int z {00};
    double da {12.23};
    char ca {'A'};
    bool ab {1};
    int unint {};
    std::cout << "HW!" << std::endl;
    std::cout << (a * a) << '\n' << fa << '\n' << da  << '\n' << ca  << '\n' << ab << std::endl;
    std::cout << "UNINT:" << unint << '\n' ;
    std::cout <<"\n Z VAR: " << z;
    std::cout << "\n" << mulIt(a) << "\n" << sumM(1,8);
    incMWithPtr(&z);
    std::cout <<"\n Z VAR inc_ptr: " << z;
    z = 12;
    std::cout <<"\n Z VAR: " << z;
    incMWithRef(z);
    std::cout <<"\n Z VAR inc_ref:" << z;
    // std::cout <<"\n Z VAR: " << z;
    7;
    'a';
    std::cin.get();
}

