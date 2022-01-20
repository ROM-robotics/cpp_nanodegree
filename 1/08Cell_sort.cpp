#include <iostream>
#include <vector>
#include <algorithm>
bool Compare( const int a, const int b)
{
    return a > b;
}
void CellSort(std::vector<int> *o)
{
    std::sort(o->begin(), o->end(), Compare);
}
int main()
{
    std::vector<int> list = {1,4,5,6,3,8,2,9,0};
    for(int i=0;i<list.size();i++) { std::cout<< list[i];} std::cout<< std::endl;

    CellSort(&list);
    for(int i=0;i<list.size();i++) { std::cout<< list[i];} std::cout<< std::endl;
}