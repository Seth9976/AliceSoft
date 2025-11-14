// 函数: sub_6319b0
// 地址: 0x6319b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = **arg2
int32_t* result = sub_631ac0(esi, *(esi + 4), arg1)
int32_t ecx = arg2[1]

if (0x7fffffe - ecx u< 1)
    sub_6b47bf("list<T> too long")
    noreturn

arg2[1] = ecx + 1
*(esi + 4) = result
*result[1] = result
return result
