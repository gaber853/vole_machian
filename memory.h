#pragma once
#include <array>
#include <cstdint>

class Memory {
private:
    std::array<uint8_t, 256> cells{};
public:
    uint8_t get(uint8_t address) const;
    void set(uint8_t address, uint8_t value);
    void clear();
    void display() const;
};
