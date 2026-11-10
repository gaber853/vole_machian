#include "RegisterFile.h"
#include "VoleException.h"
#include <iomanip>
#include <iostream>
using namespace std;

uint8_t RegisterFile::get(uint8_t reg) const {
    if (reg > 0x0F) throw InvalidRegisterException("Register index [0,F]");
    return registers[reg];
}
void RegisterFile::set(uint8_t reg, uint8_t value) {
    if (reg > 0x0F) throw InvalidRegisterException("Register index [0,F]");
    registers[reg] = value;
}
void RegisterFile::clear() { registers.fill(0); }
void RegisterFile::display() const {
    cout << "\nREGISTERS\n";
    for (int i = 0; i < 16; ++i) {
        cout << 'R' << uppercase << hex << i << " = "
             << setw(2) << setfill('0') << static_cast<int>(registers[i]);
        cout << ((i % 4 == 3) ? '\n' : '\t');
    }
    cout << dec;
}
