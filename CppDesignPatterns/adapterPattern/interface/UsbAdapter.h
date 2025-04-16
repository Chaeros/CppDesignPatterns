#ifndef USB_ADAPTER_H
#define USB_ADAPTER_H

#include "DisplayAdapter.h"
#include "../adapter/Usb.h"
#include <string>

class UsbAdapter : public DisplayAdapter {
private:
    USB* usb;
    std::string data;
public:
    UsbAdapter(USB* usb, const std::string& data) : usb(usb), data(data) {}
    void display() override {
        usb->connectWithUsbCable(data);
    }
};

#endif