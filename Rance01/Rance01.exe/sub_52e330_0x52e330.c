// 函数: sub_52e330
// 地址: 0x52e330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ad3a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg4
int32_t* esi = arg3
int32_t* var_5c = esi

if (esi != result)
    int32_t* edi_1 = &esi[0xe]
    int32_t* var_60_1 = edi_1
    
    if (edi_1 != result)
        do
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            sub_401180(&var_48, 0xffffffff, edi_1, 0)
            int32_t var_4 = 0
            int32_t eax_5 = edi_1[7]
            int32_t* var_28
            sub_52dfc0(&var_28, &edi_1[8])
            int32_t ecx_2 = edi_1[0xc]
            int32_t edx = edi_1[0xd]
            int32_t var_4_1 = 1
            int32_t eax_8
            uint32_t edx_1
            eax_8, edx_1 = __allmul(esi[0xc], esi[0xd], 0x3e8, 0)
            uint32_t ebp_1 = data_797dec
            int32_t ebx_1 = data_797de8
            uint32_t eax_9
            int32_t edx_2
            eax_9, edx_2 = __alldiv(eax_8, edx_1, ebx_1, ebp_1)
            int32_t eax_11
            uint32_t edx_4
            eax_11, edx_4 = __allmul(ecx_2, edx, 0x3e8, 0)
            uint32_t eax_12
            int32_t ecx_4
            int32_t edx_5
            eax_12, ecx_4, edx_5 = __alldiv(eax_11, edx_4, ebx_1, ebp_1)
            
            if (edx_5 s< edx_2 || (edx_5 s<= edx_2 && eax_12 u<= eax_9))
                void* esi_1 = &edi_1[0xc]
                
                while (true)
                    esi_1 -= 0x38
                    int32_t eax_17
                    uint32_t edx_8
                    eax_17, edx_8 = __allmul(ecx_2, edx, 0x3e8, 0)
                    uint32_t eax_18
                    int32_t edx_9
                    eax_18, edx_9 = __alldiv(eax_17, edx_8, ebx_1, ebp_1)
                    int32_t eax_19
                    uint32_t edx_11
                    eax_19, edx_11 = __allmul(*esi_1, *(esi_1 + 4), 0x3e8, 0)
                    uint32_t eax_20
                    int32_t edx_12
                    eax_20, edx_12 = __alldiv(eax_19, edx_11, ebx_1, ebp_1)
                    
                    if (edx_9 s< edx_12)
                        break
                    
                    if (edx_9 s<= edx_12 && eax_18 u<= eax_20)
                        break
                    
                    sub_401180(edi_1, 0xffffffff, esi_1 - 0x30, 0)
                    edi_1[7] = *(esi_1 - 0x14)
                    sub_52d8c0(&edi_1[8], esi_1 - 0x10)
                    ebp_1 = data_797dec
                    edi_1[0xc] = *esi_1
                    edi_1[0xd] = *(esi_1 + 4)
                    edi_1 = esi_1 - 0x30
                    ebx_1 = data_797de8
                
                sub_401180(edi_1, 0xffffffff, &var_48, 0)
                edi_1[7] = eax_5
                sub_52d8c0(&edi_1[8], &var_28)
                esi = var_5c
                edi_1[0xc] = ecx_2
                edi_1[0xd] = edx
                edi_1 = var_60_1
            else
                esi = var_5c
                void* var_80_4 = &edi_1[0xc]
                sub_52ec20(edi_1, edx_5, &edi_1[0xe], esi)
                sub_401180(esi, 0xffffffff, &var_48, 0)
                esi[7] = eax_5
                sub_52d8c0(&esi[8], &var_28)
                esi[0xc] = ecx_2
                esi[0xd] = edx
            
            int32_t var_4_2 = 2
            int32_t* ebx_3 = var_28
            int32_t var_24
            
            if (ebx_3 != 0)
                if (ebx_3 != var_24)
                    do
                        (**ebx_3)(0)
                        ebx_3 = &ebx_3[4]
                    while (ebx_3 != var_24)
                    
                    ebx_3 = var_28
                
                int32_t* var_80_10 = ebx_3
                sub_6b4d5b()
            
            result = 0
            int32_t var_4_3 = 0xffffffff
            var_28 = nullptr
            var_24 = 0
            int32_t var_20_1 = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_80_11 = var_48.d
                result = sub_6b4d5b()
            
            edi_1 = &edi_1[0xe]
            var_60_1 = edi_1
        while (edi_1 != arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
