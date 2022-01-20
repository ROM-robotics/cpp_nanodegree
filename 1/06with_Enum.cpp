#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
enum class State { kEmpty, kObstacle };
void PrintBoard( std::vector<std::vector<State>> b);
std::vector<State> ParseLine(std::string line);
std::vector<std::vector<State>> ReadBoard(std::string path);
std::string cellString(State state);
int main()
{
    auto board = ReadBoard("board.board");
    PrintBoard(board);
    return 0;
}

void PrintBoard( std::vector<std::vector<State>> b)
{
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<b[1].size();j++)
        {
            std::cout<< cellString(b[i][j]);
        }
        std::cout<< "\n";
    }
}
std::vector<State> ParseLine(std::string line)
{
    std::istringstream line_stream(line);
    int n; 
    char c;
    std::vector<State> row;
    while(line_stream >> n >> c) 
    { 
        switch (n)
        {
        case 0:
            row.push_back(State::kEmpty);
            break;
        case 1:
            row.push_back(State::kObstacle);
            break;         
        }
    }
    return row;
}
std::vector<std::vector<State>> ReadBoard(std::string path)
{
    std::ifstream myfile(path); 
    std::string str_;
    std::vector<std::vector<State>> grid;
    if(myfile)
    {
        while(getline(myfile, str_))
        {
            std::vector<State> test;
            test = ParseLine(str_);
            grid.push_back(test);
        }
    }
    else { std::cout<< "Error" << std::endl; }
    return grid;
}
std::string cellString(State state)
{
    switch(state)
    {
        case State::kObstacle:
            return "⛰ ";
            break;
        default: return "  ";
    }
}