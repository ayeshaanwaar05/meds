#include <stdio.h>
#include <stdint.h>
#include <string.h>

uint8_t store_byte_data[4];
uint8_t store_byte_expected_data[4] = {0xEF, 0xBE, 0xAD, 0xDE};

uint16_t store_half_word_data[2];
uint16_t store_half_word_expected_data[2] = {0xBEEF, 0xDEAD};

uint32_t store_word_data[1];
uint32_t store_word_expected_data[1] = {0xDEADBEEF};

uint64_t store_double_word_data[1];
uint64_t store_double_word_expected_data[1] = {0x0123456789ABCDEF};
const char* store_byte_test() {
    uint8_t* ptr = store_byte_data;
    ptr[0] = 0xEF;
    ptr[1] = 0xBE;
    ptr[2] = 0xAD;
    ptr[3] = 0xDE;

    for (int i = 0; i < 4; i++) {
        if (ptr[i] != store_byte_expected_data[i]) {
            printf("store_byte_test mismatch at index %d: got 0x%X, expected 0x%X\n", i, ptr[i], store_byte_expected_data[i]);
            return "FAIL";
        }
    }
    return "PASS";
}
const char* store_half_word_test() {
    uint16_t* ptr = store_half_word_data;
    ptr[0] = 0xBEEF;
    ptr[1] = 0xDEAD;

    for (int i = 0; i < 2; i++) {
        if (ptr[i] != store_half_word_expected_data[i]) {
            printf("store_half_word_test mismatch at index %d: got 0x%X, expected 0x%X\n", i, ptr[i], store_half_word_expected_data[i]);
            return "FAIL";
        }
    }
    return "PASS";
}
const char* store_word_test() {
    uint32_t* ptr = store_word_data;
    ptr[0] = 0xDEADBEEF;

    if (ptr[0] != store_word_expected_data[0]) {
        printf("store_word_test mismatch: got 0x%X, expected 0x%X\n", ptr[0], store_word_expected_data[0]);
        return "FAIL";
    }
    return "PASS";
}

const char* store_double_word_test() {
    uint64_t* ptr = store_double_word_data;
    ptr[0] = 0x0123456789ABCDEF;

    if (ptr[0] != store_double_word_expected_data[0]) {
        printf("store_double_word_test mismatch: got 0x%lX, expected 0x%lX\n", ptr[0], store_double_word_expected_data[0]);
        return "FAIL";
    }
    return "PASS";
}

int main() {
    printf("store_byte_test: %s\n", store_byte_test());
    printf("store_half_word_test: %s\n", store_half_word_test());
    printf("store_word_test: %s\n", store_word_test());
    printf("store_double_word_test: %s\n", store_double_word_test());
    return 0;
}
