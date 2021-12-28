#include <iostream>
#include <string>

std::string TransformString(std::string inputString) {
    char prevSymbol = '0';
    std::string response = "";
    for (int i = 0; i < inputString.size(); i++) {
        if (prevSymbol == inputString[i]) { 
            response += '0';
        } else {
            response += '1';
        }
        prevSymbol = inputString[i];
    }
    return response;
}

int main(int args, char** argv) {
    std::cout << TransformString("001") << std::endl;
    std::cout << TransformString("011010") << std::endl;
    return 0;
}