#include "Memory.h"
#include <iomanip>
#include <iostream>
using namespace std;

uint8_t Memory::get(uint8_t address) const { return cells[address]; }
void Memory::set(uint8_t address, uint8_t value) { cells[address] = value; }
void Memory::clear() { cells.fill(0); }

void Memory::display() const {
    cout << "\nMEMORY (HEX)\n     ";
    for (int col = 0; col < 16; ++col)
        cout << uppercase << hex << setw(2) << setfill('0') << col << "  ";
    cout << '\n';
    for (int row = 0; row < 16; ++row) {
        cout << setw(2) << row * 16 << " : ";
        for (int col = 0; col < 16; ++col)
            cout << setw(2) << static_cast<int>(cells[row * 16 + col]) << "  ";
        cout << '\n';
    }
    cout << dec;
}
