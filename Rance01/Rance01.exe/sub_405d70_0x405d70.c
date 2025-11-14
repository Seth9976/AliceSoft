// 函数: sub_405d70
// 地址: 0x405d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[4]

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int32_t esi = arg2[4]
int32_t edi = esi

if (esi u>= ebx)
    edi = ebx

if (arg2[5] u>= 0x10)
    arg2 = *arg2

int32_t result = sub_402320(arg1, arg2, arg1, edi)

if (result == 0)
    if (esi u< ebx)
        int32_t eax
        eax.b = false
        return 0xffffff00
    
    result.b = esi != ebx

result.b = result == 0
return result
