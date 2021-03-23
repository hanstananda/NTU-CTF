#!/usr/bin/env python3

def get_flag():
    from binascii import a2b_base64
    with open('data/flag', 'r') as f, open('data/flag.mp2', 'wb') as outf:
        outf.write(a2b_base64(f.read()))

def main():
    print("Python distribution .whl is also zip")

if __name__ == '__main__':
    get_flag()
    main()
