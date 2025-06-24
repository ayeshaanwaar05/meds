.section .text
.globl _start

_start:
    # Load num
    la a0, num
    ld a0, 0(a0)

    call factorial

    # Store result
    la t0, result
    sd a0, 0(t0)

    j write_tohost

# uint64_t factorial(uint64_t n)
factorial:
    addi sp, sp, -16
    sd ra, 8(sp)
    sd a0, 0(sp)

    li t0, 1
    bge a0, t0, recurse
    li a0, 1
    j end_factorial

recurse:
    addi a0, a0, -1
    call factorial
    ld t1, 0(sp)
    mul a0, a0, t1

end_factorial:
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

write_tohost:
    li t5, 0x80001000
    li x1, 1
    sw x1, 0(t5)
    j write_tohost

.section .data
num:    .dword 5
result: .dword 0

.align 12
.section ".tohost", "aw", @progbits
.align 4
.global tohost
tohost: .dword 0

.align 4
.global fromhost
fromhost: .dword 0


