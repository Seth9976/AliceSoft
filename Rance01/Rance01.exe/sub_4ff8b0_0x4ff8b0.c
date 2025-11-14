// 函数: sub_4ff8b0
// 地址: 0x4ff8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_44
int32_t var_1c
int32_t var_18
int32_t var_14

if (arg5 s<= arg6)
    int32_t* eax_1 = *(arg1 + 0x10)
    
    if (*eax_1 == 0)
        int32_t eax_2 = eax_1[3]
        
        if (eax_2 s> 0)
            sub_4dd000(eax_2, &var_1c)
            int32_t eax_3 = var_1c
            **(arg1 + 0x10) = eax_3
            *(*(arg1 + 0x10) + 4) = eax_3
            *(*(arg1 + 0x10) + 8) = eax_3
            *(*(arg1 + 0x10) + 0xc) = var_18
    
    int32_t* ecx_3 = *(arg1 + 0x10)
    
    if (arg5 s<= ecx_3[3])
        int32_t ecx_4 = *ecx_3
        ecx_3[1] = ecx_4
        var_44 = 0
        int32_t var_40 = 0
        int32_t var_3c = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = *(arg1 + 0x10)
        arg6 = &var_44
        sub_4dd2c0(&var_14, arg3, ecx_4, arg2)
        int32_t eax_7 = var_14
        
        if (eax_7 != 0)
            int32_t var_34_2 = eax_7
            sub_6b4d5b()
        
        sub_6b49d0(arg2, arg3, ((arg4 - arg3) s>> 2) * 4)
        int32_t* esi_1 = *(arg1 + 0x10)
        int128_t* ecx_5 = *esi_1
        int32_t eax_17 = ((esi_1[1] - ecx_5) s>> 2) * 4
        int128_t* result = arg4 - eax_17
        sub_6b49d0(result, ecx_5, eax_17)
        return result

int32_t* eax_19 = *(arg1 + 0x10)

if (*eax_19 == 0)
    int32_t eax_20 = eax_19[3]
    
    if (eax_20 s> 0)
        sub_4dd000(eax_20, &var_1c)
        int32_t eax_21 = var_1c
        **(arg1 + 0x10) = eax_21
        *(*(arg1 + 0x10) + 4) = eax_21
        *(*(arg1 + 0x10) + 8) = eax_21
        *(*(arg1 + 0x10) + 0xc) = var_18

int32_t* ecx_8 = *(arg1 + 0x10)

if (arg6 s> ecx_8[3])
    if (arg2 != arg3 && arg3 != arg4)
        int32_t* var_34_9 = arg4
        int128_t* var_38_7 = arg2
        sub_4dd6c0(arg3, arg6, ecx_8)
    
    return arg2 + (arg6 << 2)

int32_t ecx_9 = *ecx_8
ecx_8[1] = ecx_9
var_44 = 0
int32_t var_40_1 = 0
int32_t var_3c_3 = 0
int32_t var_38_4 = 0
int32_t var_34_5 = *(arg1 + 0x10)
arg6 = &var_44
sub_4dd2c0(&var_14, arg4, ecx_9, arg3)
int32_t eax_25 = var_14

if (eax_25 != 0)
    int32_t var_34_6 = eax_25
    sub_6b4d5b()

void* eax_26 = (arg3 - arg2) s>> 2 << 2
sub_6b49d0(arg4 - eax_26, arg2, eax_26)
int32_t* esi_3 = *(arg1 + 0x10)
int128_t* ecx_10 = *esi_3
int32_t esi_4 = (esi_3[1] - ecx_10) s>> 2 << 2
sub_6b49d0(arg2, ecx_10, esi_4)
return esi_4 + arg2
