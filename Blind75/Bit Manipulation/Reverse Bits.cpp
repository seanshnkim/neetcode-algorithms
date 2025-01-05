#include <stdint.h>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t converted_n = 0;
        
        // uint32_t bit1 = n && 1;
        // converted_n |= bit1 << 31;

        // uint32_t bit2 = n && (1 << 1);
        // converted_n |= bit2 << (31 - 2);

        // uint32_t bit3 = n && (1 << 2);
        // converted_n |= bit3 << (31 - 4);

        // uint32_t bit4 = n && (1 << 3);
        // converted_n |= bit4 << (31 - 6);

        for (int i=0; i < 16; i++) {
            uint32_t rightmost_ith_bit1 = n && (1 << i );
            uint32_t rightmost_ith_bit2 = n & (1 << i );
            uint32_t leftmost_ith_bit1  = n && (1 << (31-i));
            uint32_t leftmost_ith_bit2  = n & (1 << (31-i));
            converted_n |= (rightmost_ith_bit2 << (31 - 2*i) );
            converted_n |= (leftmost_ith_bit2  >> (31 - 2*i) );
        }
        return converted_n;
    }
};

int main() {
    Solution sol;
    sol.reverseBits(0b00000000000000000000000000010101);
    return 0;
}