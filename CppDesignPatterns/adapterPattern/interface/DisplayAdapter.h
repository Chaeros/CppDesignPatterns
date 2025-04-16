#ifndef DISPLAY_ADAPTER_H
#define DISPLAY_ADAPTER_H

class DisplayAdapter {
public:
    virtual void display() = 0;
    virtual ~DisplayAdapter() {}
};

#endif