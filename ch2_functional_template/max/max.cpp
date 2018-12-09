#include <iostream>
#include <string>
#include "max.hpp"

int main()
{
    int i = 42;
    std::cout << "max(7,i)" << ::max(7,i) <<std::endl;

    float f1 = 3.4;
    float f2 = 6.4;
    std::cout << "max(f1,f2)" << ::max(f1,f2) <<std::endl;

    std::string s1 = "my";
    std::string s2 = "na";
    std::cout << "max(s1,s2)" << ::max(s1,s2) <<std::endl;
}
