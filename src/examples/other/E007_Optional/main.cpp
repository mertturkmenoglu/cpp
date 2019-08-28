#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <optional>
#include <vector>

std::optional<std::vector<std::string>> readFromFile(const std::string& path) {
    std::ifstream stream(path);
    std::vector<std::string> lines;

    if (stream.is_open()) {
        while (stream) {
            std::string tmp;
            stream >> tmp;
            lines.push_back(tmp);
        }
        stream.close();

        return lines;
    }

    return {};
}

int main() {
    std::string path = "PATH_TO_INPUT_FILE";
    auto content = readFromFile(path);

    if (content) {
        std::copy(content.value().begin(), content.value().end(),
                std::ostream_iterator<std::string>(std::cout, "\n"));
    } else {
        std::cout << "File could not opened" << std::endl;
    }

    return 0;
}