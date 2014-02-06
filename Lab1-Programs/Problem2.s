    .data
prompt:    .asciiz    "Please enter three integers: "
    .text
    .globl main
main:
    li    $v0,    4
    la    $a0,$a1,$a2,    prompt
    syscall
