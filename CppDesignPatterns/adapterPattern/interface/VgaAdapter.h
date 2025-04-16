#ifndef VGA_ADAPTER_H
#define VGA_ADAPTER_H

#include "DisplayAdapter.h"
#include "../adapter/Vga.h"

class VgaAdapter : public DisplayAdapter {
private:
    Vga* vga;
    bool highQuality;
public:
    VgaAdapter(Vga* vga, bool highQuality) : vga(vga), highQuality(highQuality) {}
    void display() override {
        vga->connectWithVgaCable(highQuality);
    }
};

#endif