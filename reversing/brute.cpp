// Input Output
#include <cstdio>
#include <cstdlib>
#include <iostream>
// Datastructures
#include <cstring>
#include <bitset>
#include <queue>
#include <map>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <stack>
#include <utility>
#include <queue>
// Others
#include <cmath>
#include <numeric>      // std::iota
#include <algorithm>
#include <time.h>
// Define
#define mp make_pair
#define ff first
#define fi first
#define ss second
#define se second
#define pb push_back
#define eb emplace_back
#define rep(x,a,b,c) for(int x=a;x<=b;x+=c)
#define repp(x,a,b) rep(x,a,b,1)
#define rev(x,a,b,c) for(int x=a;x>=b;x-=c)
#define revv(x,a,b) rev(x,a,b,1)

using namespace std;
typedef unsigned char   undefined;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned int    uint;

const char DAT_00012008[100]={0x7a, 0x2e, 0x6e, 0x68, 0x1d, 0x65, 0x16, 0x7c, 0x6d, 0x43, 0x6f, 0x36,
0x63, 0x62, 0x14, 0x47, 0x43, 0x63, 0x40, 0x63, 0x58, 0x01, 0x58, 0x33, 0x62, 0x3f, 0x53, 0x30, 0x6d, 0x17};

void FUN_000106bd(int param_1,uint param_2,undefined4 param_3)

{
  int in_GS_OFFSET;
  uint local_18;
  unsigned char local_14 [4];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14[0] = (unsigned char)((uint)param_3 >> 0x18);
  local_14[1] = (char)((uint)param_3 >> 0x10);
  local_14[2] = (char)((uint)param_3 >> 8);
  local_14[3] = (char)param_3;
  local_18 = 0;
  while (local_18 < param_2) {
    *(unsigned char *)(local_18 + param_1) = *(unsigned char *)(local_18 + param_1) ^ local_14[local_18 & 3];
    local_18 = local_18 + 1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    // FUN_00010b20(); // Seems this funciton does nothing??!!!
  }
  return;
}

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

undefined4 FUN_000108c4(char *param_1,uint param_2)

{
  char *__dest;
  char *__dest_00;
  uint local_18;
  
  __dest = (char *)calloc(param_2 + 1,1);
  strncpy(__dest,param_1,param_2);
  FUN_000107c2((int)__dest,param_2,-1);
  __dest_00 = (char *)calloc(param_2 + 1,1);
  strncpy(__dest_00,DAT_00012008,param_2);
  FUN_000107c2((int)__dest_00,param_2,-1);
  printf("checking solution...\n");
//   printf("dest=%s\n",__dest);
//   printf("dest00=%s\n",__dest_00);
  local_18 = 0;
  while( true ) {
      printf("param_2=%d\n",param_2);
    if (param_2 <= local_18) {
      return 1;
    }
    if (__dest[local_18] != __dest_00[local_18]) break;
    local_18 = local_18 + 1;
    printf("%d\n",local_18);
  }
  return 0xffffffff;
}


undefined4 FUN_000109af(undefined1 param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  
  pcVar1 = (char *)calloc(512,1);
  printf("input the flag: ");
  fgets(pcVar1,512,stdin);
  sVar2 = strnlen(DAT_00012008,0x200);
  pcVar1 = FUN_0001082b(pcVar1,sVar2);
  printf("%s\n",pcVar1);
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


int main() {
    FUN_000109af(0);
    return 0;
}