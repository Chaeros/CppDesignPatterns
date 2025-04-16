#include "AdapterOperator.h"
#include "adapter/Usb.h"
#include "adapter/Hdmi.h"
#include "adapter/Vga.h"
#include "interface/DisplayAdapter.h"
#include "interface/UsbAdapter.h"
#include "interface/HdmiAdapter.h"
#include "interface/VgaAdapter.h"

#include <vector>
#include <memory>

void adapterPatternRun() {
    USB usb;
    Hdmi hdmi;
    Vga vga;

    std::vector<std::unique_ptr<DisplayAdapter>> adapters;
    adapters.emplace_back(std::make_unique<UsbAdapter>(&usb, "Video Data"));
    adapters.emplace_back(std::make_unique<HdmiAdapter>(&hdmi, 1080));
    adapters.emplace_back(std::make_unique<VgaAdapter>(&vga, true));

    for (auto& adapter : adapters) {
        adapter->display();
    }
}
