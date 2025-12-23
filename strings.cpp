#include <iostream>
#include <string>

int main()
{
    std::string name{"Alex"};
    name = "John";
    std::cout << name << std::endl;

    std::cout << "Enter your name: ";
    std::string inputName{};
    std::getline(std::cin >> std::ws, inputName);
    std::cout << "Your name is " << inputName << "!" << '\n';

    return 0;
}
