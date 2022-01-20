#include <iostream>
int main()
{
    enum class Color { white, black, blue, red};
    Color mycolor = Color::blue;
    if( mycolor == Color::red) {
        std::cout<< "My car is red." << std::endl;
    }
    else {
        std::cout<< "My car is not red." << std::endl;
    }
    return 0;
}