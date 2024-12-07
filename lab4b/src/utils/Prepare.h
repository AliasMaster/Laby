#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <set>

void Prepare(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    std::string line;
    std::string current_line;
    std::unordered_map<std::string, std::set<std::size_t>> busstops;
    while (std::getline(file, line)) {
        if(line.rfind("LINIA", 0) == 0) {
            current_line = line;
        } else {

            if(line.find('\r') != std::string::npos) {
                line = line.substr(0, line.find('\r'));
            }

            busstops[line].insert(std::stoul(current_line.substr(6)));
        }
    }

    for(const auto& [busstop, lines] : busstops) {
        std::ofstream out("static/bustops/" + busstop + ".txt");
        std::cout << "#" << busstop << std::endl;
        for(const auto& line : lines) {
            out << line << std::endl;
            std::cout << "LINIA " << line << std::endl;
        }
        out.close();
        std::cout << "----------------------" << std::endl;
    }
}