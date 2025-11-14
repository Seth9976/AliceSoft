// 函数: sub_59d980
// 地址: 0x59d980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax = arg1[1]
int128_t* ebx = *arg1

if (ebx != eax)
    void* esi_2 = 0
    sub_6b49d0(ebx, eax, esi_2)
    arg1[1] = esi_2 + ebx

int32_t result = *arg1

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
