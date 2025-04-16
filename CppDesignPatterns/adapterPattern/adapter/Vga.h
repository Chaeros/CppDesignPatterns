#ifndef VGA_H
#define VGA_H

#include <iostream>

class Vga {
public:
    void connectWithVgaCable(bool highQuality) {
        std::cout << "Displaying via VGA with high quality: " << (highQuality ? "true" : "false") << std::endl;
    }
};

#endif