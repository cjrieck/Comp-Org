# Authors: Evan Chessman & Clayton Rieck
# Lab 1 Problem 1

    .data
prompt: .asciiz "Please enter a number: "
    .text

    .globl main
main:
    li    $v0, 4
    la    $a0, prompt
    syscall

    li    $v0, 5
    syscall

    add   $a0, $v0, 0
    li    $v0, 1
    syscall

    li    $v0, 10
    syscall
