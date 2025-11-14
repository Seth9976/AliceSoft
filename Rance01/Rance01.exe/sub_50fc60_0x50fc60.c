// 函数: sub_50fc60
// 地址: 0x50fc60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax_2 = arg1[1]
int128_t* ebx = *arg1

if (ebx != eax_2)
    void* esi_2 = 0
    sub_6b49d0(ebx, eax_2, esi_2)
    arg1[1] = esi_2 + ebx

arg1[8] = 0
char* eax

if (arg1[9] u< 0x10)
    eax = &arg1[4]
else
    eax = arg1[4]

*eax = 0

if (arg1[9] u>= 0x10)
    int32_t var_c_2 = arg1[4]
    sub_6b4d5b()

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t result = *arg1

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
