// 函数: sub_6af3a0
// 地址: 0x6af3a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_5c
int32_t eax_1 = data_78c474 ^ &var_5c
int32_t result = *(arg1 + 0x98)
int32_t ecx_2 = (*(arg1 + 0x9c) - result) s>> 4

if (ecx_2 != 0)
    int32_t ecx_3 = ecx_2 << 4
    
    if (((*(result + ecx_3 - 0xc) - *(result + ecx_3 - 0x10)) & 0xfffffffc) != 0
            && **(result + ecx_3 - 0x10) != 0)
        int32_t* result_1 = result
        int32_t edx_6 = (result_1[1] - *result_1) s>> 2
        
        if (*(*result_1 + (edx_6 << 2) - 4) != 0)
            int32_t* esi_2 = *(result + ecx_3 - 0x10)
            void var_40
            int32_t ecx_5 = arg2 - *sub_6af540(arg1, &var_40)
            int32_t var_4c
            int32_t ebx_2 = *sub_65e6a0(&var_4c, *esi_2) + ecx_5
            WINDOWPLACEMENT lpwndpl
            GetWindowPlacement(*(**(ecx_3 + *(arg1 + 0x98) - 0x10) + 0x34), &lpwndpl)
            
            if (*(arg1 + 0x2c) + lpwndpl.rcNormalPosition.left u> arg2)
                int32_t* eax_7 = sub_65e660(&var_4c, **(ecx_3 + *(arg1 + 0x98) - 0x10))
                ebx_2 = *(arg1 + 0x2c) + *eax_7
            
            void* esi_8 = &sub_65e6a0(&var_4c, *(**(arg1 + 0x98) + (edx_6 << 2) - 4))[1]
            int32_t* eax_11 = sub_6af540(arg1, &var_40)
            int32_t esi_11 = *esi_8 - eax_11[1] + arg3
            GetWindowPlacement(*(*(**(arg1 + 0x98) + (edx_6 << 2) - 4) + 0x34), &lpwndpl)
            
            if (*(arg1 + 0x30) + lpwndpl.rcNormalPosition.top u> arg3)
                esi_11 =
                    sub_65e660(&var_4c, *(**(arg1 + 0x98) + (edx_6 << 2) - 4))[1] + *(arg1 + 0x30)
            
            sub_6af230(ecx_2 - 1, arg1, ebx_2)
            sub_6af2f0(arg1, edx_6 - 1, esi_11)
            result = sub_6af660(arg1)

sub_6b4885(eax_1 ^ &var_5c)
return result
