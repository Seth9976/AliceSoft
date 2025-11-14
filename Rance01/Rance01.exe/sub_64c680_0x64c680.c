// 函数: sub_64c680
// 地址: 0x64c680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg3 - 1)
int32_t result = (eax_1 - edx) s>> 1

while (arg5 s< arg3)
    int32_t* esi_1 = arg4 + result * 0x28
    
    if (*esi_1 s>= *arg6)
        break
    
    __builtin_memcpy(arg4 + arg3 * 0x28, esi_1, 0x28)
    arg3 = result
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = sx.q(result - 1)
    result = (eax_4 - edx_3) s>> 1

__builtin_memcpy(arg4 + arg3 * 0x28, arg6, 0x28)
return result
