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

// Typedef
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;

// const
const double EPS = 1e-9;
const double PI = acos(-1);
const int MOD = 1e9+7;
const int OO = 2e9;
const ll INF = (ll)9e18;

// Additional typedef for long long
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vll;
typedef vector<vector<pii>> vvii;

typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned int uint;


undefined8 FUN_00401240(uint param_1)

{
//   sleep(param_1);
  if (param_1 == 0) {
    puts("The trick does not work.");
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return 0x6a;
}



undefined8 FUN_00401290(uint param_1)

{
//   sleep(param_1);
  if (param_1 == 0) {
    puts("The trick does not work.");
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return 0x73;
}


int FUN_004012e0(uint param_1,char param_2)

{
//   sleep(param_1);
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
//   sleep(param_1);
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
//   basic_ostream *this;
  uint local_3c;
  unsigned char local_38 [28];
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_18 = param_2;
  local_10 = param_1;
//   tVar3 = time((time_t *)0x0);
  srand((uint)tVar3);
  iVar2 = rand();
  local_1c = iVar2 % 1000 + 100;
//   printf("Init...Estimate %d seconds needed.\nDone.\n");
//   sleep(local_1c);
//   tVar3 = time((time_t *)0x0);
  uVar1 = local_1c;
  time_t now = time(0);
  time_t midnight = now / 86400 * 86400;
  tVar3 = midnight;
  if (tVar3 % 86400 == 0) {
    local_38[0] = 0x66;
    local_38[1] = 0x1a;
    local_38[2] = 0x5d;
    local_38[3] = 99;
    local_38[4] = 0x1a;
    local_38[5] = 0x4a;
    uVar4 = FUN_00401330(local_1c);
    iVar2 = FUN_004012e0(uVar1,(char)uVar4);
    local_38[6] = (unsigned char)iVar2;
    local_38[7] = 0x53;
    iVar2 = FUN_004012e0(local_1c,'\0');
    local_38[8] = (unsigned char)iVar2;
    iVar2 = FUN_004012e0(local_1c,'\0');
    local_38[9] = (unsigned char)iVar2;
    local_38[10] = 0x31;
    local_38[11] = 0x46;
    local_38[12] = 0x3f;
    local_38[13] = 0x29;
    iVar2 = FUN_004012e0(local_1c,'\0');
    local_38[14] = (unsigned char)iVar2;
    iVar2 = FUN_004012e0(local_1c,'\x03');
    local_38[15] = (unsigned char)iVar2;
    local_38[16] = 0x31;
    local_38[17] = 0x1a;
    iVar2 = FUN_004012e0(local_1c,-1);
    local_38[18] = (unsigned char)iVar2;
    local_38[19] = 0x4a;
    local_38[20] = 0x28;
    local_38[21] = 0x6f;
    iVar2 = FUN_004012e0(local_1c,'\x01');
    local_38[22] = (unsigned char)iVar2;
    local_38[23] = 0x70;
    local_38[24] = 0x24;
    local_38[25] = 0x5d;
    uVar4 = FUN_00401240(local_1c);
    local_38[1] = (unsigned char)uVar4;
    uVar4 = FUN_00401290(local_1c);
    local_38[4] = (unsigned char)uVar4;
    uVar4 = FUN_00401290(local_1c);
    local_38[17] = (char)uVar4;
    local_3c = 0;
    while (local_3c < 0x1a) {
      local_38[local_3c] = local_38[local_3c] + (char)(local_3c << 1);
      local_38[local_3c] = local_38[local_3c] ^ (unsigned char)local_3c;
      local_38[local_3c] = local_38[local_3c] - (unsigned char)local_3c;
      local_3c = local_3c + 1;
    }
    if (local_1c == 0) {
      puts("The trick does not work.");
      local_c = 0;
    }
    else {
      puts("Win!\n");
      std::cout<<local_38<<endl;
    //   this = std::operator__((basic_ostream *)std::cout,(char *)local_38);
    //   std::basic_ostream<char,std::char_traits<char>>::operator__
    //             ((basic_ostream_char_std__char_traits_char__ *)this,
    //              std::endl_char_std__char_traits_char__);
      local_c = 0;
    }
  }
  else {
    puts("You have to run this at exactly the midnight of Singapore to get the flag.\n");
    local_c = 1;
  }
  return local_c;
}

int main() {
    FUN_00401380(1,1);
    return 0;
}