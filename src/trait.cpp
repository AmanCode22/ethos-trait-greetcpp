#include <iostream>
#include <string>

extern "C" {
    void greet(const char* name) {
        if (name) {
            std::string name_str(name);
            std::cout << "Hello, " << name_str << std::endl;
        }
    }
}
