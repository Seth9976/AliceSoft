// 函数: sub_53fbf0
// 地址: 0x53fbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_410
int32_t eax_1 = data_78c474 ^ &var_410
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x6bca1af3, *(arg2 + 0xbc) - *(arg2 + 0xb8))
int32_t edx_1 = edx s>> 5
int32_t eax_5 = (edx_1 u>> 0x1f) + edx_1
int32_t ebx_2
int32_t* ebx_3

if (arg1 u< eax_5)
    ebx_2 = arg1 * 0x4c
    ebx_3 = ebx_2 + *(arg2 + 0xb8)

if (arg1 u< eax_5 && ebx_2 != neg.d(*(arg2 + 0xb8)))
    if (*(arg2 + 0x1338) != 0)
        sub_52bd90(*(arg2 + 0x12f8) + arg1 * 0x38)
    
    void var_40c
    void* eax_7 = &var_40c
    int32_t __saved_esi
    void* edx_4 = &(&__saved_esi)[ebx_3[0xa] + 4]
    
    if (&var_40c u< edx_4)
        int32_t* ecx_8 = *(arg2 + 0x2b0)
        
        do
            ecx_8 -= 4
            *(arg2 + 0x2b0) = ecx_8
            *eax_7 = *ecx_8
            eax_7 += 4
        while (eax_7 u< edx_4)
    
    void* eax_10
    int32_t edx_5
    eax_10, edx_5 = sub_552a10(ebx_3, arg2 + 0x1dc, &var_410)
    
    if (eax_10 == 0)
        int32_t* eax_11 = sub_53d1c0(eax_10, edx_5, arg2, 0x74daec)
        sub_6b4885(eax_1 ^ &var_410)
        return eax_11
    
    if (sub_53ada0(arg2, var_410) != 0)
        int32_t eax_12 = ebx_3[0xa]
        
        if (eax_12 s> 0)
            int32_t eax_13
            int32_t edx_6
            eax_13, edx_6 = sub_5501a0(eax_12, eax_10, &var_40c)
            
            if (eax_13.b == 0)
                sub_53d1c0(eax_13, edx_6, arg2, 0x74db24)
                int32_t* eax_14
                eax_14.b = 0
                sub_6b4885(eax_1 ^ &var_410)
                return eax_14
        
        int32_t eax_16 = *(arg2 + 0x28c) - *(arg2 + 0x290)
        int32_t ebx_4 = *ebx_3
        **(arg2 + 0xebc) = 1
        *(arg2 + 0xebc) += 4
        **(arg2 + 0x6b4) = eax_16
        *(arg2 + 0x6b4) += 4
        *(arg2 + 0x28c) = *(arg2 + 0x290) + ebx_4
        int32_t eax_18
        eax_18.b = 1
        sub_6b4885(eax_1 ^ &var_410)
        return eax_18
else
    int32_t var_420 = arg1
    sub_53d1c0(eax_5, edx_1, arg2, 0x74dabc)

sub_6b4885(eax_1 ^ &var_410)
return false
