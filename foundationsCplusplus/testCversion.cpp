#include <iostream>
int main(int argc, char* argv[])
{
    std::cout << __cplusplus << std::endl;
    //echo '#include <iostream>' | g++ -x c++ -dM -E - | sort
    std::cout << (unsigned int)__cplusplus << std::endl;
    return 0;
}