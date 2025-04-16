#ifndef HDMI_ADAPTER_H
#define HDMI_ADAPTER_H

#include "DisplayAdapter.h"
#include "../adapter/Hdmi.h"

class HdmiAdapter : public DisplayAdapter {
private:
    Hdmi* hdmi;
    int resolution;
public:
    HdmiAdapter(Hdmi* hdmi, int resolution) : hdmi(hdmi), resolution(resolution) {}
    void display() override {
        hdmi->connectWithHdmiCable(resolution);
    }
};

#endif