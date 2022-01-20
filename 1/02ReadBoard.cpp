#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void ReadBoard(std::string path);
int main()
{
    std::string path("board.board");
    ReadBoard(path);
    return 0;
}

void ReadBoard(std::string path)
{
    std::ifstream myFile(path);
    std::string str_;
    if(myFile)
    {
       while(std::getline(myFile, str_)) {std::cout<<str_<<std::endl;};
    }
    else { std::cout<<"Error"<< std::endl; }
}