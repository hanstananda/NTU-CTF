typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
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

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
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
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef enum Elf32_DynTag_x86 {
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
} Elf32_DynTag_x86;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
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
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
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
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _DT_INIT(void)

{
  FUN_00010578();
  return;
}



void FUN_000104d0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
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

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = strnlen(__string,__maxlen);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



void FUN_00010570(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x00010570. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 0x34))();
  return;
}



void FUN_00010578(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x00010578. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 0x38))();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void entry(void)

{
  __libc_start_main(FUN_000109af);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x000105eb)
// WARNING: Removing unreachable block (ram,0x000105f5)

void FUN_000105d0(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_00010660(void)

{
  if (DAT_00012026 == '\0') {
    FUN_00010570();
    FUN_000105d0();
    DAT_00012026 = '\x01';
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x0001063e)
// WARNING: Removing unreachable block (ram,0x00010648)

void FUN_000106b0(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_dx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_000106bd(int param_1,uint param_2,undefined4 param_3)

{
  int in_GS_OFFSET;
  uint local_18;
  byte local_14 [4];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14[0] = (byte)((uint)param_3 >> 0x18);
  local_14[1] = (char)((uint)param_3 >> 0x10);
  local_14[2] = (char)((uint)param_3 >> 8);
  local_14[3] = (char)param_3;
  local_18 = 0;
  while (local_18 < param_2) {
    *(byte *)(local_18 + param_1) = *(byte *)(local_18 + param_1) ^ local_14[local_18 & 3];
    local_18 = local_18 + 1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    FUN_00010b20();
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_00010751(int param_1,int param_2,int param_3)

{
  undefined uVar1;
  uint local_8;
  
  local_8 = 0;
  while (local_8 < (param_2 - param_3) + 1U) {
    uVar1 = *(undefined *)(local_8 + param_1);
    *(undefined *)(local_8 + param_1) = *(undefined *)(param_1 + param_3 + local_8 + -1);
    *(undefined *)(param_3 + local_8 + -1 + param_1) = uVar1;
    local_8 = local_8 + param_3;
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_000107c2(int param_1,uint param_2,int param_3)

{
  uint local_c;
  int local_8;
  
  if (param_3 < 1) {
    local_8 = param_2 - 1;
    while (0 < local_8) {
      FUN_00010751(param_1,param_2,local_8);
      local_8 = local_8 + -1;
    }
  }
  else {
    local_c = 1;
    while (local_c < param_2) {
      FUN_00010751(param_1,param_2,local_c);
      local_c = local_c + 1;
    }
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

char * FUN_0001082b(char *param_1,uint param_2)

{
  uint __n;
  char *__dest;
  uint local_1c;
  
  __n = (param_2 & 0xfffffffc) + 4;
  __dest = (char *)malloc((param_2 & 0xfffffffc) + 5);
  strncpy(__dest,param_1,__n);
  local_1c = 0xabcf00d;
  while (local_1c < 0xdeadbeef) {
    FUN_000106bd((int)__dest,__n,local_1c);
    local_1c = local_1c + 0x1fab4d;
  }
  return __dest;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 FUN_000108c4(char *param_1,uint param_2)

{
  char *__dest;
  char *__dest_00;
  uint local_18;
  
  __dest = (char *)calloc(param_2 + 1,1);
  strncpy(__dest,param_1,param_2);
  FUN_000107c2((int)__dest,param_2,-1);
  __dest_00 = (char *)calloc(param_2 + 1,1);
  strncpy(__dest_00,&DAT_00012008,param_2);
  FUN_000107c2((int)__dest_00,param_2,-1);
  puts("checking solution...");
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return 1;
    }
    if (__dest[local_18] != __dest_00[local_18]) break;
    local_18 = local_18 + 1;
  }
  return 0xffffffff;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 FUN_000109af(undefined1 param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  
  pcVar1 = (char *)calloc(0x200,1);
  printf("input the flag: ");
  fgets(pcVar1,0x200,stdin);
  sVar2 = strnlen(&DAT_00012008,0x200);
  pcVar1 = FUN_0001082b(pcVar1,sVar2);
  FUN_000107c2((int)pcVar1,sVar2,1);
  iVar3 = FUN_000108c4(pcVar1,sVar2);
  if (iVar3 == 1) {
    puts("Correct!");
  }
  else {
    puts("Incorrect.");
  }
  return 0;
}



// WARNING: This is an inlined function

undefined4 __i686_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_00010ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  _DT_INIT();
  iVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[iVar1])(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  return;
}



void FUN_00010b10(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_00010b20(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _DT_FINI(void)

{
  return;
}


