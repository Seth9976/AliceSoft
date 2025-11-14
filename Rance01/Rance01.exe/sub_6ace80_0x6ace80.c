// 函数: sub_6ace80
// 地址: 0x6ace80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* result = arg2

if (arg1 != result)
    void* edi_1 = &arg1[0xa]
    
    if (edi_1 != result)
        do
            int32_t ecx_1 = *(edi_1 + 4)
            int32_t edx_1 = *(edi_1 + 8)
            int32_t eax_3 = *edi_1
            void* ebp_1 = edi_1 + 8
            int32_t eax_4 = *(edi_1 + 0xc)
            void* esi_1 = edi_1
            int128_t* var_28
            sub_6b05e0(&var_28, edi_1 + 0x10)
            int32_t* eax_5
            eax_5.b = *(edi_1 + 0x20)
            char var_18_1 = eax_5.b
            int32_t var_14_1 = *(edi_1 + 0x24)
            int32_t var_4 = 0
            int32_t ecx_3
            ecx_3.b = arg1[8].b
            
            if (eax_5.b != 0 || ecx_3.b != 1)
                while (true)
                    ecx_3.b = *(ebp_1 - 0x10)
                    ebp_1 -= 0x28
                    
                    if (eax_5.b != 0)
                        break
                    
                    if (ecx_3.b != 1)
                        break
                    
                    *esi_1 = *(ebp_1 - 8)
                    *(esi_1 + 4) = *(ebp_1 - 4)
                    *(esi_1 + 8) = *ebp_1
                    *(esi_1 + 0xc) = *(ebp_1 + 4)
                    sub_4b55f0(esi_1 + 0x10, ebp_1 + 8)
                    *(esi_1 + 0x20) = *(ebp_1 + 0x18)
                    *(esi_1 + 0x24) = *(ebp_1 + 0x1c)
                    eax_5.b = var_18_1
                    esi_1 = ebp_1 - 8
                
                *(esi_1 + 4) = ecx_1
                *esi_1 = eax_3
                *(esi_1 + 8) = edx_1
                *(esi_1 + 0xc) = eax_4
                sub_4b55f0(esi_1 + 0x10, &var_28)
                int32_t* eax_14
                eax_14.b = var_18_1
                *(esi_1 + 0x20) = eax_14.b
                *(esi_1 + 0x24) = var_14_1
            else
                int128_t* var_54_2 = arg2
                sub_6adc50(edi_1, arg2, edi_1 + 0x28, arg1)
                *arg1 = eax_3
                arg1[1] = ecx_1
                arg1[3] = eax_4
                arg1[2] = edx_1
                sub_4b55f0(&arg1[4], &var_28)
                arg1[8].b = 0
                arg1[9] = var_14_1
            
            int32_t var_4_1 = 0xffffffff
            int128_t* esi_2 = var_28
            int128_t* result_1
            result = result_1
            
            if (esi_2 != result)
                result = sub_6b49d0(esi_2, result, nullptr, eax_2)
            
            if (esi_2 != 0)
                int128_t* var_54_6 = esi_2
                result = sub_6b4d5b()
            
            edi_1 += 0x28
        while (edi_1 != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
