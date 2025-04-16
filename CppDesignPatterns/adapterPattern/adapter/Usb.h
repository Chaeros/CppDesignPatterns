#ifndef USB_H
#define USB_H

#include <iostream>
#include <string>

class USB {
public:
    void connectWithUsbCable(const std::string& data) {
        std::cout << "Displaying via USB with data: " << data << std::endl;
    }
};

#endif