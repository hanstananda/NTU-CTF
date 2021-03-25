typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef enum Elf_ProgramHeaderType {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_TLS=7
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef ulong size_t;




void _DT_INIT(void)

{
  __gmon_start__();
  return;
}



void FUN_00400500(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void errx(void)

{
  errx();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



void FUN_00400590(int param_1,undefined *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  undefined8 uStack8;
  
  if (param_1 != 2) {
    pcVar2 = "./top-secret key";
    errx(1);
    param_2 = pcVar2;
  }
  strncpy(&DAT_006042c0,*(char **)(param_2 + 8),0x43);
  FUN_004027f0();
  FUN_00402830();
  FUN_00402870();
  FUN_004028c0();
  FUN_00402910();
  FUN_00402940();
  FUN_00402980();
  FUN_004029c0();
  FUN_00402a00();
  FUN_00402a40();
  FUN_00402a70();
  FUN_00402ab0();
  FUN_00402af0();
  FUN_00402b20();
  FUN_00402b50();
  FUN_00402b90();
  FUN_00402bc0();
  FUN_00402bf0();
  FUN_00402c40();
  FUN_00402c80();
  FUN_00402cc0();
  FUN_00402cf0();
  FUN_00402d40();
  FUN_00402d90();
  FUN_00402dd0();
  FUN_00402e10();
  FUN_00402e60();
  FUN_00402ea0();
  FUN_00402ee0();
  FUN_00402f10();
  FUN_00402f50();
  FUN_00402f90();
  FUN_00402fd0();
  FUN_00403010();
  FUN_00403050();
  FUN_00403090();
  FUN_004030e0();
  FUN_00403120();
  FUN_00403160();
  FUN_004031a0();
  FUN_004031d0();
  FUN_00403210();
  FUN_00403250();
  FUN_00403290();
  FUN_004032d0();
  FUN_00403320();
  FUN_00403350();
  FUN_00403390();
  FUN_004033d0();
  FUN_00403410();
  FUN_00403440();
  auVar3 = FUN_00400830();
  uVar1 = uStack8;
  uStack8 = SUB168(auVar3,0);
  __libc_start_main(FUN_00400590,uVar1,register0x00000020,FUN_00403490,FUN_00403500,
                    SUB168(auVar3 >> 0x40,0),&uStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(FUN_00400590,in_stack_00000000,&stack0x00000008,FUN_00403490,FUN_00403500,
                    param_3,auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00400775)
// WARNING: Removing unreachable block (ram,0x0040077f)

void FUN_00400760(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_00604280 == '\0') {
    FUN_00400760();
    DAT_00604280 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004007c3)
// WARNING: Removing unreachable block (ram,0x0040081a)
// WARNING: Removing unreachable block (ram,0x004007cd)

void _INIT_0(void)

{
  return;
}



void FUN_00400830(void)

{
  puts("Congratulations!You succeeded.");
                    // WARNING: Subroutine does not return
  exit(0);
}



void FUN_00400850(ulong param_1)

{
  printf("Decrypt failed: wrong pass %d\n",param_1 & 0xffffffff);
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined8 FUN_00400870(void)

{
  ushort *puVar1;
  ushort **ppuVar2;
  
  ppuVar2 = __ctype_b_loc();
  puVar1 = *ppuVar2;
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c0 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0);
  }
  if ((*(byte *)(puVar1 + DAT_006042c0) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(1);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c1 * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(2);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c1 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(3);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c2 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(4);
  }
  if ((*(byte *)(puVar1 + DAT_006042c2) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(5);
  }
  if ((*(byte *)(puVar1 + DAT_006042c3) & 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(6);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c3 * 2 + 1) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(7);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c4 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(8);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c4 * 2 + 1) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(9);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c5 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(10);
  }
  if ((*(byte *)(puVar1 + DAT_006042c5) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c6 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xc);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c6 * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd);
  }
  if ((*(byte *)(puVar1 + DAT_006042c7) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c7 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xf);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c8 * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x10);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c8 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x11);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042c9 * 2 + 1) & 1) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x12);
  }
  if ((*(byte *)(puVar1 + DAT_006042c9) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x13);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ca * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x14);
  }
  if ((*(byte *)(puVar1 + DAT_006042ca) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x15);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042cb * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x16);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042cb * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x17);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042cc * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x18);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042cc * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x19);
  }
  if ((*(byte *)(puVar1 + DAT_006042cd) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x1a);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042cd * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x1b);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ce * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x1c);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ce * 2 + 1) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x1d);
  }
  if ((*(byte *)(puVar1 + DAT_006042cf) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x1e);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042cf * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x1f);
  }
  if ((*(byte *)(puVar1 + DAT_006042d0) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x20);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d0 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x21);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d1 * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x22);
  }
  if ((*(byte *)(puVar1 + DAT_006042d1) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x23);
  }
  if ((*(byte *)(puVar1 + DAT_006042d2) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x24);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d2 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x25);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d3 * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x26);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d3 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x27);
  }
  if ((*(byte *)(puVar1 + DAT_006042d4) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x28);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d4 * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x29);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d5 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x2a);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d5 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x2b);
  }
  if ((*(byte *)(puVar1 + DAT_006042d6) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x2c);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d6 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x2d);
  }
  if ((*(byte *)(puVar1 + DAT_006042d7) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x2e);
  }
  if ((*(byte *)(puVar1 + DAT_006042d7) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x2f);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d8 * 2 + 1) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x30);
  }
  if ((*(byte *)(puVar1 + DAT_006042d8) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x31);
  }
  if ((*(byte *)(puVar1 + DAT_006042d9) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x32);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042d9 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x33);
  }
  if ((*(byte *)(puVar1 + DAT_006042da) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x34);
  }
  if ((*(byte *)(puVar1 + DAT_006042da) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x35);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042db * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x36);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042db * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x37);
  }
  if ((*(byte *)(puVar1 + DAT_006042dc) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x38);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042dc * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x39);
  }
  if ((*(byte *)(puVar1 + DAT_006042dd) & 4) != 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x3a);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042dd * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x3b);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042de * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x3c);
  }
  if ((*(byte *)((long)puVar1 + (ulong)DAT_006042de * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x3d);
  }
  if ((*(byte *)(puVar1 + DAT_006042df) & 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x3e);
  }
  if ((*(byte *)(puVar1 + DAT_006042df) & 4) == 0) {
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e0 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x40);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e0 * 2 + 1) & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x41);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e1 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x42);
    }
    if ((*(byte *)(puVar1 + DAT_006042e1) & 8) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x43);
    }
    if ((*(byte *)(puVar1 + DAT_006042e2) & 8) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x44);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e2 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x45);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e3 * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x46);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e3 * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x47);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e4 * 2 + 1) & 4) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x48);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e4 * 2 + 1) & 8) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x49);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e5 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x4a);
    }
    if ((*(byte *)(puVar1 + DAT_006042e5) & 4) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x4b);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e6 * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x4c);
    }
    if ((*(byte *)(puVar1 + DAT_006042e6) & 4) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x4d);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e7 * 2 + 1) & 2) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x4e);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e7 * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x4f);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e8 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x50);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e8 * 2 + 1) & 4) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x51);
    }
    if ((*(byte *)(puVar1 + DAT_006042e9) & 8) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x52);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042e9 * 2 + 1) & 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x53);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ea * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x54);
    }
    if ((*(byte *)(puVar1 + DAT_006042ea) & 4) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x55);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042eb * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x56);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042eb * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x57);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ec * 2 + 1) & 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x58);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ec * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x59);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ed * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x5a);
    }
    if ((*(byte *)(puVar1 + DAT_006042ed) & 8) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x5b);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ee * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x5c);
    }
    if ((*(byte *)(puVar1 + DAT_006042ee) & 8) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x5d);
    }
    if ((*(byte *)((long)puVar1 + (ulong)DAT_006042ef * 2 + 1) & 4) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x5e);
    }
    if ((*(byte *)(puVar1 + DAT_006042ef) & 4) == 0) {
      if ((*(byte *)(puVar1 + DAT_006042f0) & 8) == 0) {
                    // WARNING: Subroutine does not return
        FUN_00400850(0x60);
      }
      if ((*(byte *)((long)puVar1 + (ulong)DAT_006042f0 * 2 + 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_00400850(0x61);
      }
      if ((*(byte *)(puVar1 + DAT_006042f1) & 4) != 0) {
                    // WARNING: Subroutine does not return
        FUN_00400850(0x62);
      }
      if ((*(byte *)((long)puVar1 + (ulong)DAT_006042f1 * 2 + 1) & 1) == 0) {
        if ((*(byte *)((long)puVar1 + (ulong)DAT_006042f2 * 2 + 1) & 4) != 0) {
                    // WARNING: Subroutine does not return
          FUN_00400850(100);
        }
        if ((*(byte *)(puVar1 + DAT_006042f2) & 8) == 0) {
          return 1;
        }
                    // WARNING: Subroutine does not return
        FUN_00400850(0x65);
      }
                    // WARNING: Subroutine does not return
      FUN_00400850(99);
    }
                    // WARNING: Subroutine does not return
    FUN_00400850(0x5f);
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x3f);
}



// WARNING: Removing unreachable block (ram,0x004019a9)
// WARNING: Removing unreachable block (ram,0x0040189b)
// WARNING: Removing unreachable block (ram,0x00401a67)

void FUN_004013e0(void)

{
  if (DAT_006042d1 < DAT_006042c0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x66);
  }
  if (DAT_006042db < DAT_006042c1) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x67);
  }
  if (DAT_006042ea < DAT_006042c2) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x68);
  }
  if (DAT_006042c3 < DAT_006042ce) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x69);
  }
  if (DAT_006042cd < DAT_006042c5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x6b);
  }
  if (DAT_006042ec < DAT_006042c6) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x6c);
  }
  if (DAT_006042c7 < DAT_006042e5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x6d);
  }
  if (DAT_006042d2 < DAT_006042c8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x6e);
  }
  if (DAT_006042e7 < DAT_006042c9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x6f);
  }
  if (DAT_006042ca < DAT_006042cf) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x70);
  }
  if (DAT_006042cb < DAT_006042e0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x71);
  }
  if (DAT_006042f0 < DAT_006042cc) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x72);
  }
  if (DAT_006042cd < DAT_006042ee) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x73);
  }
  if (DAT_006042df < DAT_006042ce) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x74);
  }
  if (DAT_006042ca < DAT_006042cf) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x75);
  }
  if (DAT_006042d0 < DAT_006042d5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x76);
  }
  if (DAT_006042d1 < DAT_006042c6) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x77);
  }
  if (DAT_006042d2 < DAT_006042dd) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x78);
  }
  if (DAT_006042d3 < DAT_006042e8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x79);
  }
  if (DAT_006042da < DAT_006042d4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x7a);
  }
  if (DAT_006042e6 < DAT_006042d5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x7b);
  }
  if (DAT_006042d6 < DAT_006042e2) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x7c);
  }
  if (DAT_006042e4 < DAT_006042d8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x7e);
  }
  if (DAT_006042d9 < DAT_006042f1) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x7f);
  }
  if (DAT_006042da < DAT_006042c7) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x80);
  }
  if (DAT_006042db < DAT_006042e9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x81);
  }
  if (DAT_006042dc < DAT_006042c8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x82);
  }
  if (DAT_006042dd < DAT_006042cc) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x83);
  }
  if (DAT_006042de < DAT_006042c9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x84);
  }
  if (DAT_006042c3 < DAT_006042df) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x85);
  }
  if (DAT_006042d0 < DAT_006042e0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x86);
  }
  if (DAT_006042d9 <= DAT_006042e1) {
    if (DAT_006042d6 < DAT_006042e2) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x88);
    }
    if (DAT_006042e3 < DAT_006042d3) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x89);
    }
    if (DAT_006042e3 < DAT_006042e4) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x8a);
    }
    if (DAT_006042e5 < DAT_006042d4) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x8b);
    }
    if (DAT_006042e6 < DAT_006042ed) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x8c);
    }
    if (DAT_006042eb < DAT_006042e7) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x8d);
    }
    if (DAT_006042c1 < DAT_006042e8) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x8e);
    }
    if (DAT_006042ef < DAT_006042e9) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x8f);
    }
    if (DAT_006042ea < DAT_006042d8) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x90);
    }
    if (DAT_006042eb < DAT_006042de) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x91);
    }
    if (DAT_006042ec < DAT_006042dc) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x92);
    }
    if (DAT_006042c2 < DAT_006042ed) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x93);
    }
    if (DAT_006042ee < DAT_006042c0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x94);
    }
    if (DAT_006042e1 < DAT_006042ef) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x95);
    }
    if (DAT_006042f0 < DAT_006042c5) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x96);
    }
    if (DAT_006042cb < DAT_006042f1) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0x97);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x87);
}



void FUN_00401a90(void)

{
  if (DAT_006042c2 < DAT_006042c0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x99);
  }
  if (DAT_006042c1 < DAT_006042cf) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x9a);
  }
  if (DAT_006042e6 < DAT_006042c2) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x9b);
  }
  if (DAT_006042c3 < DAT_006042e7) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x9c);
  }
  if (DAT_006042d8 < DAT_006042c4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x9d);
  }
  if (DAT_006042c5 < DAT_006042ce) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x9e);
  }
  if (DAT_006042c6 < DAT_006042ed) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0x9f);
  }
  if (DAT_006042c7 < DAT_006042ee) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa0);
  }
  if (DAT_006042c7 < DAT_006042c8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa1);
  }
  if (DAT_006042c9 < DAT_006042df) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa2);
  }
  if (DAT_006042ca < DAT_006042f1) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa3);
  }
  if (DAT_006042d0 < DAT_006042cb) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa4);
  }
  if (DAT_006042cc < DAT_006042c0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa5);
  }
  if (DAT_006042cd < DAT_006042cc) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa6);
  }
  if (DAT_006042d7 < DAT_006042ce) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa7);
  }
  if (DAT_006042c6 < DAT_006042cf) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa8);
  }
  if (DAT_006042ec < DAT_006042d0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xa9);
  }
  if (DAT_006042d1 < DAT_006042dd) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xaa);
  }
  if (DAT_006042d2 < DAT_006042c5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xab);
  }
  if (DAT_006042d3 < DAT_006042c4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xac);
  }
  if (DAT_006042e5 < DAT_006042d4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xad);
  }
  if (DAT_006042d1 < DAT_006042d5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xae);
  }
  if (DAT_006042d6 < DAT_006042d9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xaf);
  }
  if (DAT_006042d7 < DAT_006042e8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb0);
  }
  if (DAT_006042d8 < DAT_006042c8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb1);
  }
  if (DAT_006042c1 < DAT_006042d9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb2);
  }
  if (DAT_006042da < DAT_006042d4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb3);
  }
  if (DAT_006042db < DAT_006042cd) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb4);
  }
  if (DAT_006042dc < DAT_006042c9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb5);
  }
  if (DAT_006042d2 < DAT_006042dd) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb6);
  }
  if (DAT_006042dc < DAT_006042de) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xb7);
  }
  if (DAT_006042df <= DAT_006042e9) {
    if (DAT_006042d3 < DAT_006042e0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xb9);
    }
    if (DAT_006042e1 < DAT_006042de) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xba);
    }
    if (DAT_006042e2 < DAT_006042e0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xbb);
    }
    if (DAT_006042e3 < DAT_006042ef) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xbc);
    }
    if (DAT_006042d5 < DAT_006042e4) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xbd);
    }
    if (DAT_006042f0 < DAT_006042e5) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xbe);
    }
    if (DAT_006042d6 < DAT_006042e6) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xbf);
    }
    if (DAT_006042ca < DAT_006042e7) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc0);
    }
    if (DAT_006042eb < DAT_006042e8) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc1);
    }
    if (DAT_006042cb < DAT_006042e9) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc2);
    }
    if (DAT_006042e3 < DAT_006042ea) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc3);
    }
    if (DAT_006042eb < DAT_006042e2) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc4);
    }
    if (DAT_006042ec < DAT_006042e4) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc5);
    }
    if (DAT_006042da < DAT_006042ed) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xc6);
    }
    if (DAT_006042e1 < DAT_006042ee) {
                    // WARNING: Subroutine does not return
      FUN_00400850(199);
    }
    if (DAT_006042ef <= DAT_006042f2) {
      if (DAT_006042f0 < DAT_006042ea) {
                    // WARNING: Subroutine does not return
        FUN_00400850(0xc9);
      }
      if (DAT_006042f1 <= DAT_006042db) {
        if (DAT_006042c3 <= DAT_006042f2) {
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_00400850(0xcb);
      }
                    // WARNING: Subroutine does not return
      FUN_00400850(0xca);
    }
                    // WARNING: Subroutine does not return
    FUN_00400850(200);
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0xb8);
}



// WARNING: Removing unreachable block (ram,0x00402727)

void FUN_00402140(void)

{
  if (DAT_006042d9 < DAT_006042c0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xcc);
  }
  if (DAT_006042d6 < DAT_006042c1) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xcd);
  }
  if (DAT_006042c2 < DAT_006042e4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xce);
  }
  if (DAT_006042c3 < DAT_006042e0) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xcf);
  }
  if (DAT_006042e7 < DAT_006042c4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd0);
  }
  if (DAT_006042c5 < DAT_006042d8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd1);
  }
  if (DAT_006042e1 < DAT_006042c6) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd2);
  }
  if (DAT_006042c7 < DAT_006042c2) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd3);
  }
  if (DAT_006042ca < DAT_006042c8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd4);
  }
  if (DAT_006042f0 < DAT_006042c9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd5);
  }
  if (DAT_006042ca < DAT_006042c4) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd6);
  }
  if (DAT_006042eb < DAT_006042cb) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd7);
  }
  if (DAT_006042cc < DAT_006042e5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd8);
  }
  if (DAT_006042cd < DAT_006042cc) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xd9);
  }
  if (DAT_006042ec < DAT_006042ce) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xda);
  }
  if (DAT_006042dc < DAT_006042cf) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xdb);
  }
  if (DAT_006042d0 < DAT_006042dd) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xdc);
  }
  if (DAT_006042d1 < DAT_006042d3) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xdd);
  }
  if (DAT_006042d2 < DAT_006042c7) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xde);
  }
  if (DAT_006042d3 < DAT_006042e9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xdf);
  }
  if (DAT_006042cd < DAT_006042d5) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe1);
  }
  if (DAT_006042e3 < DAT_006042d6) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe2);
  }
  if (DAT_006042d7 < DAT_006042ee) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe3);
  }
  if (DAT_006042c6 < DAT_006042d8) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe4);
  }
  if (DAT_006042c5 < DAT_006042d9) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe5);
  }
  if (DAT_006042da < DAT_006042c1) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe6);
  }
  if (DAT_006042db < DAT_006042e2) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe7);
  }
  if (DAT_006042dc < DAT_006042cb) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe8);
  }
  if (DAT_006042dd < DAT_006042de) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xe9);
  }
  if (DAT_006042da < DAT_006042de) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xea);
  }
  if (DAT_006042c3 < DAT_006042df) {
                    // WARNING: Subroutine does not return
    FUN_00400850(0xeb);
  }
  if (DAT_006042e0 <= DAT_006042db) {
    if (DAT_006042e1 < DAT_006042e6) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xed);
    }
    if (DAT_006042d2 < DAT_006042e2) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xee);
    }
    if (DAT_006042f2 < DAT_006042e3) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xef);
    }
    if (DAT_006042d0 < DAT_006042e4) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf0);
    }
    if (DAT_006042e5 < DAT_006042e8) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf1);
    }
    if (DAT_006042e6 < DAT_006042cf) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf2);
    }
    if (DAT_006042e7 < DAT_006042df) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf3);
    }
    if (DAT_006042ea < DAT_006042e8) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf4);
    }
    if (DAT_006042d7 < DAT_006042e9) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf5);
    }
    if (DAT_006042ea < DAT_006042d5) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf6);
    }
    if (DAT_006042eb < DAT_006042ce) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf7);
    }
    if (DAT_006042ec < DAT_006042c9) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf8);
    }
    if (DAT_006042ed < DAT_006042c8) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xf9);
    }
    if (DAT_006042ef < DAT_006042ee) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xfa);
    }
    if (DAT_006042ef < DAT_006042c0) {
                    // WARNING: Subroutine does not return
      FUN_00400850(0xfb);
    }
    if (DAT_006042d1 <= DAT_006042f0) {
      if (DAT_006042f1 < DAT_006042ed) {
                    // WARNING: Subroutine does not return
        FUN_00400850(0xfd);
      }
      if (DAT_006042f2 < DAT_006042f1) {
                    // WARNING: Subroutine does not return
        FUN_00400850(0xfe);
      }
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_00400850(0xfc);
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0xec);
}



void FUN_004027f0(void)

{
  if (DAT_006042c0 == (byte)(((DAT_006042de ^ DAT_006042e6) - DAT_006042c8) + DAT_006042c6)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0xff);
}



void FUN_00402830(void)

{
  if (DAT_006042c1 == (byte)(DAT_006042d3 ^ DAT_006042d4 ^ DAT_006042e6 ^ DAT_006042ea)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x100);
}



void FUN_00402870(void)

{
  if (DAT_006042c2 ==
      (char)((((DAT_006042e4 + DAT_006042e3) - DAT_006042d3) - DAT_006042c3) - DAT_006042ec)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x101);
}



void FUN_004028c0(void)

{
  if (DAT_006042c3 == (byte)((DAT_006042e9 + DAT_006042ca * -2 ^ DAT_006042d1) + DAT_006042d3)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x102);
}



void FUN_00402910(void)

{
  if (DAT_006042c4 == (char)(DAT_006042e1 - DAT_006042d5)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x103);
}



void FUN_00402940(void)

{
  if (DAT_006042c5 == (DAT_006042e7 ^ DAT_006042c8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x104);
}



void FUN_00402980(void)

{
  if (DAT_006042c6 == (byte)((DAT_006042d9 + DAT_006042ca) - DAT_006042e7 ^ DAT_006042ce)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x105);
}



void FUN_004029c0(void)

{
  if (DAT_006042c7 == (byte)((DAT_006042c1 ^ DAT_006042cf) + DAT_006042e0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x106);
}



// WARNING: Removing unreachable block (ram,0x00402a26)

void FUN_00402a00(void)

{
  return;
}



void FUN_00402a40(void)

{
  if (DAT_006042c9 == (DAT_006042c7 ^ DAT_006042d8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x108);
}



void FUN_00402a70(void)

{
  if (DAT_006042ca == (byte)(((DAT_006042d1 ^ DAT_006042f1) - DAT_006042c4) + DAT_006042e0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x109);
}



void FUN_00402ab0(void)

{
  if (DAT_006042cb == (byte)(((DAT_006042e6 ^ DAT_006042ea) - DAT_006042d1) - DAT_006042c8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x10a);
}



void FUN_00402af0(void)

{
  if (DAT_006042cc == (char)(DAT_006042c8 + DAT_006042ce)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x10b);
}



void FUN_00402b20(void)

{
  if (DAT_006042cd == (char)(DAT_006042d4 + DAT_006042ed)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x10c);
}



void FUN_00402b50(void)

{
  if (DAT_006042ce == (byte)((DAT_006042d9 - DAT_006042f0 ^ DAT_006042d4) + DAT_006042c9)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x10d);
}



void FUN_00402b90(void)

{
  if (DAT_006042cf == (char)(DAT_006042d2 - DAT_006042df)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x10e);
}



void FUN_00402bc0(void)

{
  if (DAT_006042d0 == (DAT_006042ee ^ DAT_006042d8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x10f);
}



void FUN_00402bf0(void)

{
  if (DAT_006042d1 ==
      (byte)(DAT_006042f2 ^ DAT_006042ce ^ DAT_006042ef + DAT_006042c2 + DAT_006042cd)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x110);
}



void FUN_00402c40(void)

{
  if (DAT_006042d2 == (char)((DAT_006042ec + DAT_006042e4 + DAT_006042c0) - DAT_006042c3)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x111);
}



void FUN_00402c80(void)

{
  if (DAT_006042d3 == (byte)(((DAT_006042de ^ DAT_006042e9) - DAT_006042d9) - DAT_006042dc)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x112);
}



void FUN_00402cc0(void)

{
  if (DAT_006042d4 == (DAT_006042ec ^ DAT_006042d9)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x113);
}



void FUN_00402cf0(void)

{
  if (DAT_006042d5 ==
      (byte)((DAT_006042d5 ^ DAT_006042e7 ^ DAT_006042d6 + DAT_006042dc) + DAT_006042d9)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x114);
}



void FUN_00402d40(void)

{
  if (DAT_006042d6 ==
      (byte)(((DAT_006042ec - DAT_006042c4) - DAT_006042cc ^ DAT_006042df) - DAT_006042de)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x115);
}



void FUN_00402d90(void)

{
  if (DAT_006042d7 == (byte)(DAT_006042e0 - DAT_006042ce ^ DAT_006042e7)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x116);
}



void FUN_00402dd0(void)

{
  if (DAT_006042d8 == (byte)(DAT_006042d5 ^ DAT_006042d2 ^ DAT_006042c0 ^ DAT_006042d5)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x117);
}



void FUN_00402e10(void)

{
  if (DAT_006042d9 ==
      (byte)(((DAT_006042d1 ^ DAT_006042cc) + DAT_006042c4 + DAT_006042d2) - DAT_006042cb)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x118);
}



void FUN_00402e60(void)

{
  if (DAT_006042da == (byte)(DAT_006042d4 + DAT_006042f1 + (DAT_006042ee ^ DAT_006042e0))) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x119);
}



void FUN_00402ea0(void)

{
  if (DAT_006042db == (char)((DAT_006042e7 + DAT_006042d9 + DAT_006042e4) - DAT_006042f0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x11a);
}



void FUN_00402ee0(void)

{
  if (DAT_006042dc == (DAT_006042cf ^ DAT_006042ce)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x11b);
}



void FUN_00402f10(void)

{
  if (DAT_006042dd == (char)((DAT_006042e3 + DAT_006042c1) - DAT_006042ea)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x11c);
}



void FUN_00402f50(void)

{
  if (DAT_006042de == (char)(((DAT_006042c8 - DAT_006042df) - DAT_006042de) - DAT_006042d8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x11d);
}



void FUN_00402f90(void)

{
  if (DAT_006042df == (byte)((DAT_006042d2 + DAT_006042cf) - DAT_006042dd ^ DAT_006042ea)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x11e);
}



void FUN_00402fd0(void)

{
  if (DAT_006042e0 == (char)((DAT_006042cf + DAT_006042c5 + DAT_006042ce) - DAT_006042ec)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x11f);
}



void FUN_00403010(void)

{
  if (DAT_006042e1 == (byte)((DAT_006042ed - DAT_006042cf ^ DAT_006042d4) - DAT_006042e0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x120);
}



void FUN_00403050(void)

{
  if (DAT_006042e2 == (byte)(((DAT_006042e1 ^ DAT_006042c3) - DAT_006042d4) - DAT_006042ca)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x121);
}



void FUN_00403090(void)

{
  if (DAT_006042e3 ==
      (byte)((DAT_006042c1 - DAT_006042ec) + (DAT_006042c6 - DAT_006042eb ^ DAT_006042ec))) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x122);
}



void FUN_004030e0(void)

{
  if (DAT_006042e4 == (byte)((DAT_006042d9 + DAT_006042df) - DAT_006042dc ^ DAT_006042f1)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x123);
}



void FUN_00403120(void)

{
  if (DAT_006042e5 == (byte)(((DAT_006042df ^ DAT_006042e2) - DAT_006042e2) + DAT_006042cb)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x124);
}



void FUN_00403160(void)

{
  if (DAT_006042e6 == (byte)(((DAT_006042e4 ^ DAT_006042db) - DAT_006042c5) + DAT_006042ea)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x125);
}



void FUN_004031a0(void)

{
  if (DAT_006042e7 == (DAT_006042c8 ^ DAT_006042e5)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x126);
}



void FUN_004031d0(void)

{
  if (DAT_006042e8 == (byte)((DAT_006042dc + DAT_006042c7 ^ DAT_006042ec) - DAT_006042ca)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x127);
}



void FUN_00403210(void)

{
  if (DAT_006042e9 == (byte)(DAT_006042da ^ DAT_006042d1 ^ DAT_006042c7 ^ DAT_006042d4)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x128);
}



void FUN_00403250(void)

{
  if (DAT_006042ea == (char)((DAT_006042c1 + DAT_006042f2) - DAT_006042dc)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x129);
}



void FUN_00403290(void)

{
  if (DAT_006042eb == (char)((DAT_006042e1 + DAT_006042ee) - DAT_006042cf)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x12a);
}



void FUN_004032d0(void)

{
  if (DAT_006042ec ==
      (byte)(DAT_006042d5 ^ DAT_006042ed ^ DAT_006042d0 + DAT_006042ea + DAT_006042d8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(299);
}



void FUN_00403320(void)

{
  if (DAT_006042ed == (char)(DAT_006042d6 - DAT_006042e8)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(300);
}



void FUN_00403350(void)

{
  if (DAT_006042ee == (char)(((DAT_006042cc - DAT_006042ee) - DAT_006042c7) - DAT_006042e3)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x12d);
}



void FUN_00403390(void)

{
  if (DAT_006042ef == (byte)((DAT_006042da + DAT_006042cf ^ DAT_006042e7) - DAT_006042cc)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x12e);
}



void FUN_004033d0(void)

{
  if (DAT_006042f0 == (byte)(DAT_006042cf - DAT_006042c8 ^ DAT_006042cb)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x12f);
}



void FUN_00403410(void)

{
  if (DAT_006042f1 == (DAT_006042e5 ^ DAT_006042db)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x130);
}



void FUN_00403440(void)

{
  if (DAT_006042f2 ==
      (byte)(DAT_006042cf ^ DAT_006042d8 ^ DAT_006042d1 + DAT_006042c8 + DAT_006042cd)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00400850(0x131);
}



void FUN_00403490(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _DT_INIT();
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void FUN_00403500(void)

{
  return;
}



void _DT_FINI(void)

{
  return;
}


