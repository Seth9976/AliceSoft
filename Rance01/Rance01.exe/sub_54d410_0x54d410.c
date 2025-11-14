// 函数: sub_54d410
// 地址: 0x54d410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_40c
int32_t eax_1 = data_78c474 ^ &var_40c
int32_t* eax_2 = *(arg1 + 0x28c)
int32_t ecx = *eax_2
*(arg1 + 0x28c) = &eax_2[1]
char result
int32_t entry_ebx

if (ecx s< 0)
    sub_53d0e0(arg1, "delegate", ecx, arg4, arg3, arg2, entry_ebx)
    result = 0
else
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = muls.dp.d(0x6bca1af3, *(arg1 + 0xdc) - *(arg1 + 0xd8))
    int32_t edx_4 = edx_3 s>> 5
    
    if (ecx s>= (edx_4 u>> 0x1f) + edx_4)
        sub_53d0e0(arg1, "delegate", ecx, arg4, arg3, arg2, entry_ebx)
        result = 0
    else
        int32_t esi_1 = ecx * 0x4c
        void* esi_2 = esi_1 + *(arg1 + 0xd8)
        
        if (esi_1 != neg.d(*(arg1 + 0xd8)))
            void* eax_8 = &var_40c
            int32_t __saved_edi
            void* edx_6 = &(&__saved_edi)[*(esi_2 + 0x28) + 4]
            
            if (&var_40c u< edx_6)
                int32_t* ecx_2 = *(arg1 + 0x2b0)
                
                do
                    ecx_2 -= 4
                    *(arg1 + 0x2b0) = ecx_2
                    *eax_8 = *ecx_2
                    eax_8 += 4
                while (eax_8 u< edx_6)
            
            *(arg1 + 0x2b0) -= 4
            int32_t ebp_1 = **(arg1 + 0x2b0)
            int32_t eax_11
            
            if (ebp_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                eax_11 = *(*(arg1 + 0x1e4) + (ebp_1 << 2))
            
            if (ebp_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && eax_11 != 0)
                int32_t var_420_2 = eax_11
                
                if (sub_551e70() != 0)
                    sub_55ed20(&var_40c, *(esi_2 + 0x28), arg1 + 0x2a4, &var_40c)
                    **(arg1 + 0x2b0) = ebp_1
                    *(arg1 + 0x2b0) += 4
                    **(arg1 + 0x2b0) = 0
                    *(arg1 + 0x2b0) += 4
                    
                    if (sub_54e130(arg1, *(esi_2 + 0x20)) != 0)
                        result = 1
                    else
                        sub_53d0e0(arg1, 0x751398, arg4, arg3, arg2, entry_ebx, var_40c)
                        result = 0
                else
                    sub_53d0e0(arg1, "gcDelegate", arg4, arg3, arg2, entry_ebx, var_40c)
                    result = 0
            else
                sub_53d0e0(arg1, 0x751340, ebp_1, arg4, arg3, arg2, entry_ebx)
                result = 0
        else
            sub_53d0e0(arg1, "delegate", ecx, arg4, arg3, arg2, entry_ebx)
            result = 0
sub_6b4885(eax_1 ^ &var_40c)
return result
