typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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

typedef struct basic_ostream<char,std::char_traits<char>> basic_ostream<char,std::char_traits<char>>, *Pbasic_ostream<char,std::char_traits<char>>;

struct basic_ostream<char,std::char_traits<char>> { // PlaceHolder Class Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Class Structure
};

typedef long __time_t;

typedef __time_t time_t;

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void _DT_INIT(void)

{
  __gmon_start__();
  return;
}



void FUN_00401020(void)

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

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::endl_char_std__char_traits_char__(basic_ostream *param_1)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,FuncDef0 *param_1)

{
  operator__(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __thiscall std::ios_base::Init::_Init(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00401100(void)

{
  std::ios_base::Init::Init((Init *)&DAT_004041d1);
  __cxa_atexit(std::ios_base::Init::_Init,&DAT_004041d1,&DAT_00404088);
  return;
}



void _INIT_1(void)

{
  FUN_00401100();
  return;
}



void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(FUN_00401380,in_stack_00000000,&stack0x00000008,FUN_004015c0,FUN_00401620,
                    param_3,auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00401180(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040119d)
// WARNING: Removing unreachable block (ram,0x004011a7)

void FUN_00401190(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004011df)
// WARNING: Removing unreachable block (ram,0x004011e9)

void FUN_004011c0(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_004041d0 == '\0') {
    FUN_00401190();
    DAT_004041d0 = 1;
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004011df)
// WARNING: Removing unreachable block (ram,0x004011e9)

void _INIT_0(void)

{
  return;
}



undefined8 FUN_00401240(uint param_1)

{
  sleep(param_1);
  if (param_1 == 0) {
    puts("The trick does not work.");
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return 0x6a;
}



undefined8 FUN_00401290(uint param_1)

{
  sleep(param_1);
  if (param_1 == 0) {
    puts("The trick does not work.");
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return 0x73;
}



int FUN_004012e0(uint param_1,char param_2)

{
  sleep(param_1);
  if (param_1 == 0) {
    puts("The trick does not work.");
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return (int)(char)(param_2 + '@');
}



undefined8 FUN_00401330(uint param_1)

{
  time_t tVar1;
  time_t tVar2;
  
  tVar1 = time((time_t *)0x0);
  sleep(param_1);
  tVar2 = time((time_t *)0x0);
  if (1 < tVar2 - (int)tVar1) {
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return 0;
}



undefined4 FUN_00401380(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  time_t tVar3;
  undefined8 uVar4;
  basic_ostream *this;
  uint local_3c;
  byte local_38 [28];
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_18 = param_2;
  local_10 = param_1;
  tVar3 = time((time_t *)0x0);
  srand((uint)tVar3);
  iVar2 = rand();
  local_1c = iVar2 % 1000 + 100;
  printf("Init...Estimate %d seconds needed.\nDone.\n");
  sleep(local_1c);
  tVar3 = time((time_t *)0x0);
  uVar1 = local_1c;
  if (tVar3 % 0x15180 == 0) {
    local_38[0] = 0x66;
    local_38[1] = 0x1a;
    local_38[2] = 0x5d;
    local_38[3] = 99;
    local_38[4] = 0x1a;
    local_38[5] = 0x4a;
    uVar4 = FUN_00401330(local_1c);
    iVar2 = FUN_004012e0(uVar1,(char)uVar4);
    local_38[6] = (byte)iVar2;
    local_38[7] = 0x53;
    iVar2 = FUN_004012e0(local_1c,'\0');
    local_38[8] = (byte)iVar2;
    iVar2 = FUN_004012e0(local_1c,'\0');
    local_38[9] = (byte)iVar2;
    local_38[10] = 0x31;
    local_38[11] = 0x46;
    local_38[12] = 0x3f;
    local_38[13] = 0x29;
    iVar2 = FUN_004012e0(local_1c,'\0');
    local_38[14] = (byte)iVar2;
    iVar2 = FUN_004012e0(local_1c,'\x03');
    local_38[15] = (byte)iVar2;
    local_38[16] = 0x31;
    local_38[17] = 0x1a;
    iVar2 = FUN_004012e0(local_1c,-1);
    local_38[18] = (byte)iVar2;
    local_38[19] = 0x4a;
    local_38[20] = 0x28;
    local_38[21] = 0x6f;
    iVar2 = FUN_004012e0(local_1c,'\x01');
    local_38[22] = (byte)iVar2;
    local_38[23] = 0x70;
    local_38[24] = 0x24;
    local_38[25] = 0x5d;
    uVar4 = FUN_00401240(local_1c);
    local_38[1] = (byte)uVar4;
    uVar4 = FUN_00401290(local_1c);
    local_38[4] = (byte)uVar4;
    uVar4 = FUN_00401290(local_1c);
    local_38[17] = (char)uVar4;
    local_3c = 0;
    while (local_3c < 0x1a) {
      local_38[local_3c] = local_38[local_3c] + (char)(local_3c << 1);
      local_38[local_3c] = local_38[local_3c] ^ (byte)local_3c;
      local_38[local_3c] = local_38[local_3c] - (byte)local_3c;
      local_3c = local_3c + 1;
    }
    if (local_1c == 0) {
      puts("The trick does not work.");
      local_c = 0;
    }
    else {
      puts("Win!\n");
      this = std::operator__((basic_ostream *)std::cout,(char *)local_38);
      std::basic_ostream<char,std::char_traits<char>>::operator__
                ((basic_ostream_char_std__char_traits_char__ *)this,
                 std::endl_char_std__char_traits_char__);
      local_c = 0;
    }
  }
  else {
    puts("You have to run this at exactly the midnight of Singapore to get the flag.\n");
    local_c = 1;
  }
  return local_c;
}



void FUN_004015c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2);
  return;
}



void FUN_00401620(void)

{
  return;
}



void _DT_FINI(void)

{
  return;
}


