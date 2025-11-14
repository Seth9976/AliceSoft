// 函数: sub_4dd6c0
// 地址: 0x4dd6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t i_4 = (arg1 - arg2) s>> 2
int32_t i_2 = (ebp - arg2) s>> 2
int32_t i_1 = i_2
int32_t i_3 = i_4

if (i_4 != 0)
    int32_t i
    
    do
        i = mods.dp.d(sx.q(i_1), i_3)
        i_1 = i_3
        i_3 = i
    while (i != 0)

if (i_1 s< i_2 && i_1 s> 0)
    void* ebx_1 = &arg2[i_1]
    
    do
        int32_t* ecx_2 = ebx_1 + (i_4 << 2)
        int32_t* esi = ebx_1
        
        if (ecx_2 == ebp)
            ecx_2 = arg2
        
        do
            int32_t edx_3 = *esi
            *esi = *ecx_2
            ebp = arg3
            *ecx_2 = edx_3
            int32_t edx_6 = (ebp - ecx_2) s>> 2
            esi = ecx_2
            
            if (i_4 s>= edx_6)
                ecx_2 = &arg2[i_4 - edx_6]
            else
                ecx_2 = &ecx_2[i_4]
        while (ecx_2 != ebx_1)
        
        i_1 -= 1
        ebx_1 -= 4
    while (i_1 s> 0)

return i_1
