// gcc -z execstack -fPIE -pie -z now chall1.c -o chall1

int main() {
    char buf[512];
    read(0, buf, 512);
    ((void(*)(void))buf)();
}
