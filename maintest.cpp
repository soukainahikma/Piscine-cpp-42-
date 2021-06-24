#include <iostream>
#include <sstream>
#include <vector>
int main()
{
std::string input;
std::cin >>input;
std::istringstream ss(input);
std::string token;
std::vector <int> result;

while(std::getline(ss, token, ','))
    result.push_back(stoi(token));
    // std::cout << token << '\n';
for(int i = 0; i < result.size(); i++) {
        std::cout << result[i] << "\n";
    }
}


/*  */