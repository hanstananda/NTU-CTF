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

typedef unsigned short    undefined2;
typedef unsigned long long    undefined8;

int main() {
    int iVar1;
    long in_FS_OFFSET;
    unsigned int cnt;
    unsigned char local_118 [64];
    char local_d8 [64];
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined2 local_68;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined2 local_28;
    long local_20;
    
    local_20 = *(long *)(in_FS_OFFSET + 0x28);
    local_98 = 0xfd872ac7ca737102;
    local_90 = 0x4915f12bf9f82dcb;
    local_88 = 0xa7ef0d4c54003c10;
    local_80 = 0x9399ccf74d02a843;
    local_78 = 0x2ac6f818989688d7;
    local_70 = 0x9f51ebca33584c85;
    local_68 = 0xe7;
    local_58 = 0x92d46893b5010a61;
    local_50 = 0xa6bde59d58f4eb4;
    local_48 = 0xfc993a3238355027;
    local_40 = 0xeda7b28d7054d179;
    local_38 = 0x419fbb499bd4cfbb;
    local_30 = 0x935ae3903f554688;
    local_28 = 0xb9;
    fgets(local_d8,50,stdin);
    cnt = 0;
    while(1) {
        strlen((char *)&local_98);
        if (48 < cnt) break;
        local_118[(int)cnt] =
            (unsigned char)cnt ^
            *(unsigned char *)((long long)&local_98 + (long long)(int)cnt) ^
            *(unsigned char *)((long long)&local_58 + (long long)(int)cnt) ^ 0x13;
        cnt = cnt + 1;
    }
    printf("%s\n",local_d8);
    printf("%s\n",local_118);
    iVar1 = memcmp(local_d8,local_118,0x31);
    if (iVar1 == 0) {
        puts("No, that\'s not right.");
    }
    else {
        puts("Correct! You entered the flag.");
    }
    return 0;
}