#pragma once
#include <modbus.h>
#include <iostream>

class ModBus
{
private:
    modbus_t *mb_ctx = modbus_new_tcp("192.168.100.11", 502);

public:
    ModBus();
    void write(uint16_t val);
    uint16_t read();
};
