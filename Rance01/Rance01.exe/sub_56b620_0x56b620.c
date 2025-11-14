// 函数: sub_56b620
// 地址: 0x56b620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx_1 = *(arg1 + 4)
int32_t eax

if (ecx_1 != 0)
    if (arg2 == 0)
        int32_t edx_1
        edx_1.b = *ecx_1 != 0
        *arg3 = edx_1
        int32_t* eax_5
        eax_5.b = 1
        return eax_5
    
    if (arg2 == 1)
        int32_t edx
        edx.b = ecx_1[1] != 0
        *arg3 = edx
        int32_t* eax_4
        eax_4.b = 1
        return eax_4
    
    if (arg2 == 2)
        eax.b = ecx_1[2] != (arg2 - 2).b
        *arg3 = eax
        eax.b = 1
        return eax

eax.b = 0
return eax
