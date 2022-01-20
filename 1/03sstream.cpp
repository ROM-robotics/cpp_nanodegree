#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string a("199 2 3");
    std::istringstream mystream(a);
    int n; int m; int o;
    mystream >> n;
    mystream >> m;
    mystream >> o;
    std::cout << n << std::endl;
    std::cout << m << std::endl;
    std::cout << o << std::endl;
    return 0;
}