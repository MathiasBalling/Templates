#include "../Header/ModBus.h"

ModBus::ModBus()
{
    if (modbus_connect(mb_ctx) == -1)
    {
        std::cout << ("Modbus: Connection Failed!") << std::endl;
    }
    else
    {
        std::cout << ("Modbus: Connection Success!") << std::endl;
    }
}

void ModBus::write(uint16_t val)
{
    int xx = modbus_write_register(mb_ctx, 128, val);
    if (xx == -1)
    {
        std::cout << ("Modbus: Counldn't set val!") << std::endl;
    }
}

uint16_t ModBus::read()
{
    uint16_t val;
    int xx = modbus_read_registers(mb_ctx, 1, 1, &val);
    if (xx == -1)
    {
        std::cout << ("Modbus: Counldn't get Digital Output!") << std::endl;
        return -1;
    }
    return val;
}
