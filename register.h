#pragma once
#include <array>
#include <cstdint>

class RegisterFile {
private:
    std::array<uint8_t, 16> registers{};
public:
    uint8_t get(uint8_t reg) const;
    void set(uint8_t reg, uint8_t value);
    void clear();
    void display() const;
};
