#ifndef HDMI_H
#define HDMI_H

#include <iostream>

class Hdmi {
public:
    void connectWithHdmiCable(int resolution) {
        std::cout << "Displaying via HDMI with resolution: " << resolution << "p" << std::endl;
    }
};

#endif