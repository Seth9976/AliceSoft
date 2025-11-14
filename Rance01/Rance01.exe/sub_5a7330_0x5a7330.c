// 函数: sub_5a7330
// 地址: 0x5a7330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx

if (arg1 != 0)
    ecx = sub_5a4830(ecx, arg2, arg1)

if (arg3 != 0)
    sub_5a4830(ecx, arg2, arg3)

sub_5a5860(arg2)
int32_t ecx_1 = arg2[0xb].d

if (ecx_1 != 0)
    int32_t eax = *(arg2 + 0x268)
    
    if (eax == 0)
        __free_base(ecx_1)
    else
        eax(arg2, ecx_1)

int32_t ecx_2 = *(arg2 + 0x26c)

if (ecx_2 != 0)
    int32_t eax_1 = *(arg2 + 0x268)
    
    if (eax_1 == 0)
        __free_base(ecx_2)
    else
        eax_1(arg2, ecx_2)

int32_t ecx_3 = arg2[0x2b].d

if (ecx_3 != 0)
    int32_t eax_2 = *(arg2 + 0x268)
    
    if (eax_2 == 0)
        __free_base(ecx_3)
    else
        eax_2(arg2, ecx_3)

int32_t ecx_4 = *(arg2 + 0x2a8)

if (ecx_4 != 0)
    int32_t eax_3 = *(arg2 + 0x268)
    
    if (eax_3 == 0)
        __free_base(ecx_4)
    else
        eax_3(arg2, ecx_4)

int32_t ecx_5 = *(arg2 + 0x1f8)

if (ecx_5 != 0)
    int32_t eax_4 = *(arg2 + 0x268)
    
    if (eax_4 == 0)
        __free_base(ecx_5)
    else
        eax_4(arg2, ecx_5)

int32_t ecx_6 = *(arg2 + 0x1fc)

if (ecx_6 != 0)
    int32_t eax_5 = *(arg2 + 0x268)
    
    if (eax_5 == 0)
        __free_base(ecx_6)
    else
        eax_5(arg2, ecx_6)

if ((*(arg2 + 0x23c) & 0x1000) != 0)
    int32_t ecx_7 = *(arg2 + 0x128)
    
    if (ecx_7 != 0)
        int32_t eax_6 = *(arg2 + 0x268)
        
        if (eax_6 == 0)
            __free_base(ecx_7)
        else
            eax_6(arg2, ecx_7)

*(arg2 + 0x23c) &= 0xffffefff

if ((*(arg2 + 0x23c) & 0x2000) != 0)
    int32_t ecx_8 = *(arg2 + 0x1a4)
    
    if (ecx_8 != 0)
        int32_t eax_7 = *(arg2 + 0x268)
        
        if (eax_7 == 0)
            __free_base(ecx_8)
        else
            eax_7(arg2, ecx_8)

*(arg2 + 0x23c) &= 0xffffdfff

if ((*(arg2 + 0x23c) & 8) != 0)
    int32_t ecx_9 = arg2[0x20].d
    
    if (ecx_9 != 0)
        int32_t eax_8 = *(arg2 + 0x268)
        
        if (eax_8 == 0)
            __free_base(ecx_9)
        else
            eax_8(arg2, ecx_9)

*(arg2 + 0x23c) &= 0xfffffff7

if (arg2 != 0xffffff88)
    void* eax_9 = *(arg2 + 0x94)
    
    if (eax_9 != 0)
        int32_t ecx_10 = *(arg2 + 0x9c)
        
        if (ecx_10 != 0)
            int32_t eax_10 = *(eax_9 + 0x34)
            
            if (eax_10 != 0)
                ecx_10(arg2[0xa].d, eax_10)
            
            (*(arg2 + 0x9c))(arg2[0xa].d, *(arg2 + 0x94))
            *(arg2 + 0x94) = 0

int32_t ecx_12 = *(arg2 + 0x1cc)

if (ecx_12 != 0)
    int32_t eax_13 = *(arg2 + 0x268)
    
    if (eax_13 == 0)
        __free_base(ecx_12)
    else
        eax_13(arg2, ecx_12)

int32_t ebp_1 = *(arg2 + 0x4c)
int32_t var_54_13 = 0x2c4
void var_40
__builtin_memcpy(&var_40, arg2, 0x40)
int128_t* ecx_13 = *(arg2 + 0x268)
int32_t esi_6 = *(arg2 + 0x44)
int32_t edi_2 = *(arg2 + 0x48)
int128_t* result = sub_6bc670(arg2, 0, var_54_13)
*(arg2 + 0x44) = esi_6
*(arg2 + 0x48) = edi_2
__builtin_memcpy(arg2, &var_40, 0x40)
*(arg2 + 0x4c) = ebp_1
*(arg2 + 0x268) = ecx_13
return result
