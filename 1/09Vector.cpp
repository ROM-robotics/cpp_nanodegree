#include <iostream>
#include <vector>
enum class State { kEmpty, kObstacle, kClosed, kPath, kStart, kFinish };
int main()
{
    std::vector<int> list = {1,2,3,4,5,6,7,8,9};
    std::vector<State> state; state.push_back(State::kFinish);

    std::cout<< list.size() << std::endl;
    std::cout<< state.size()<< std::endl;

    std::vector<std::vector<int>> list2; 
    list2.push_back(list); list2.push_back(list); list2.push_back(list);
    std::cout<<"======================"<<std::endl;
    std::vector<std::vector<State>> state2;
    state2.push_back(state); state2.push_back(state); state2.push_back(state);

    std::cout<< list2.size() << std::endl;
    std::cout<< state2.size()<< std::endl;

    std::cout<< list2[0].size() << std::endl;
    std::cout<< state2[0].size()<< std::endl;

    return 0;
}