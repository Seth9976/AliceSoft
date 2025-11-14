// 函数: sub_6590e0
// 地址: 0x6590e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_50
int32_t eax_1 = data_78c474 ^ &var_50
int32_t ecx = *(arg1 + 0x98)
int32_t* result = *(arg1 + 0x9c)

if (ecx != result)
    result = ((result - ecx) & 0xfffffff0) + ecx - 0x10
    int32_t* ecx_1 = *result
    
    if (ecx_1 != result[1] && *ecx_1 != 0)
        int32_t* ecx_2 = *(arg1 + 0x98)
        
        if (*(*ecx_2 + ((ecx_2[1] - *ecx_2) s>> 2 << 2) - 4) != 0)
            int32_t* esi_1 = *result
            void var_40
            int32_t ecx_6 = arg2 - *sub_6592a0(arg1, &var_40)
            int32_t var_4c
            int32_t ebx_1 = *sub_65e6a0(&var_4c, *esi_1)
            int32_t eax_7 = *(arg1 + 0x98)
            int32_t ebx_2 = ebx_1 + ecx_6
            WINDOWPLACEMENT lpwndpl
            GetWindowPlacement(
                *(**(((*(arg1 + 0x9c) - eax_7) & 0xfffffff0) + eax_7 - 0x10) + 0x34), &lpwndpl)
            
            if (*(arg1 + 0x2c) + lpwndpl.rcNormalPosition.left u> arg2)
                int32_t eax_11 = *(arg1 + 0x98)
                int32_t* eax_13 = sub_65e660(&var_4c, 
                    **(((*(arg1 + 0x9c) - eax_11) & 0xfffffff0) + eax_11 - 0x10))
                ebx_2 = *(arg1 + 0x2c) + *eax_13
            
            int32_t* eax_14 = *(arg1 + 0x98)
            void* esi_5 =
                &sub_65e6a0(&var_4c, *(*eax_14 + ((eax_14[1] - *eax_14) s>> 2 << 2) - 4))[1]
            int32_t* eax_18 = sub_6592a0(arg1, &var_40)
            int32_t* eax_19 = *(arg1 + 0x98)
            int32_t esi_8 = *esi_5 - eax_18[1] + arg3
            GetWindowPlacement(*(*(*eax_19 + ((eax_19[1] - *eax_19) s>> 2 << 2) - 4) + 0x34), 
                &lpwndpl)
            
            if (*(arg1 + 0x30) + lpwndpl.rcNormalPosition.top u> arg3)
                int32_t* eax_21 = *(arg1 + 0x98)
                esi_8 = sub_65e660(&var_4c, *(*eax_21 + ((eax_21[1] - *eax_21) s>> 2 << 2) - 4))[1]
                    + *(arg1 + 0x30)
            
            sub_658f70(((*(arg1 + 0x9c) - *(arg1 + 0x98)) s>> 4) - 1, arg1, ebx_2)
            int32_t* eax_25 = *(arg1 + 0x98)
            sub_659030(arg1, ((eax_25[1] - *eax_25) s>> 2) - 1, esi_8)
            result = sub_6593c0(arg1)

sub_6b4885(eax_1 ^ &var_50)
return result
