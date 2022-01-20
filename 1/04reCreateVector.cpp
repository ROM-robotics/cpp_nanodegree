#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

void PrintBoard( std::vector<std::vector<int>> b);
std::vector<int> ParseLine(std::string line);
std::vector<std::vector<int>> ReadBoard(std::string path);

int main()
{
    std::string path("board.board");
    std::vector<std::vector<int>> board;
    board = ReadBoard(path);
    PrintBoard(board);
    return 0;
}

void PrintBoard( std::vector<std::vector<int>> b)
{
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<b[1].size();j++)
        {
            std::cout<<b[i][j];
        }
        std::cout<< "\n";
    }
}
std::vector<int> ParseLine(std::string line)
{
    std::istringstream line_stream(line);
    int n; 
    char c;
    std::vector<int> row;
    while(line_stream >> n >> c) 
    { 
        row.push_back(n);
    }
    return row;
}
std::vector<std::vector<int>> ReadBoard(std::string path)
{
    std::ifstream myfile(path); 
    std::string str_;
    std::vector<std::vector<int>> grid;
    if(myfile)
    {
        while(getline(myfile, str_))
        {
            std::vector<int> test;
            test = ParseLine(str_);
            grid.push_back(test);
        }
    }
    else { std::cout<< "Error" << std::endl; }
    return grid;
}
