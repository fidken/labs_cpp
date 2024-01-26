#include <iostream>
#include <fstream>
#include <string>
#include "func.hpp"
//dddddahyjfytjfyuyjutdhfhnyfhntжестьвообщевсЄ лив € нпк глушу

void insertInTXT() {

}

void getTime() {

}

int checkSerNumb() {
    std::ifstream in("history.txt");
    std::string line;
    std::string lastLine;
    std::string serNumb;
    char check;

    if (!in.is_open()) {
        throw std::runtime_error("‘айл пропащий");
    }
    while (std::getline(in, line)) {
        if (!line.empty()) {
            lastLine = line;
        }
    }
    while (!lastLine.empty()) {
        for (int n = 0; n < lastLine.length(); n++) {
            try {
            check = lastLine[n];
            if (isdigit(check)) {
                serNumb.push_back(lastLine[n]);
            }
            else if (check == '-') {
                return std::stoi(serNumb);
            }
            else {
                throw std::runtime_error("err");
            }
            }
            catch(...) {
                std::cout << "Serial number corrupted!" << std::endl;
            }
        }
    }
    return std::stoi(serNumb);
}


//номер_запуска - год - мес€ц - день - час - минута - секунда