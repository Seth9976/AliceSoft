// 函数: sub_70c3c0
// 地址: 0x70c3c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xfffffffe
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_50 = edi
int32_t eax_1 = data_78c474
int32_t var_c_1 = 0x7714a8 ^ eax_1
int32_t __saved_ebp
int32_t var_54 = eax_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_54
int32_t* lpAddress = *(arg1 + 8)
int32_t* lpAddress_1 = lpAddress

if ((lpAddress.b & 3) == 0)
    struct _TEB* Self = fsbase->NtTib.Self
    void* StackLimit = Self->NtTib.StackLimit
    
    if (lpAddress u< StackLimit || lpAddress u>= Self->NtTib.StackBase)
        int32_t edi_2 = *(arg1 + 0xc)
        
        if (edi_2 == 0xffffffff)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        int32_t ebx_1 = 0
        int32_t eax_4 = 0
        int32_t* lpAddress_2 = lpAddress
        
        do
            int32_t esi_1 = *lpAddress_2
            
            if (esi_1 != 0xffffffff && esi_1 u>= eax_4)
                goto label_70c408
            
            if (lpAddress_2[1] != 0)
                ebx_1 = 1
            
            eax_4 += 1
            lpAddress_2 = &lpAddress_2[3]
        while (eax_4 u<= edi_2)
        
        if (ebx_1 == 0)
        label_70c474:
            void* i = lpAddress & 0xfffff000
            int32_t esi_2 = 0
            int32_t ebx_2
            int16_t* edi_3
            
            while (true)
                if (esi_2 s>= data_797ca0)
                    goto label_70c5c1
                
                ebx_2 = *((esi_2 << 3) + &data_797ca8)
                edi_3 = *((esi_2 << 3) + &data_797cac)
                
                if (ebx_2 == i)
                    break
                
                esi_2 += 1
            
            int32_t var_8_1 = 0
            int32_t eax_7
            int32_t edx
            eax_7, edx = sub_6c0980(edi_3)
            
            if (eax_7 != 0 && sub_70c300(lpAddress_1, edx, edi_2, edi_3, lpAddress_1) != 0
                    && sub_6c09c0(edi_3, *(arg1 + 4) - edi_3) != 0)
                int32_t var_8_2 = 0xfffffffe
                
                if (esi_2 s<= 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
                
                int32_t temp0_1 = data_797ca4
                data_797ca4 = 1
                
                if (temp0_1 != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
                
                bool cond:1_1
                
                if (*((esi_2 << 3) + &data_797ca8) == i)
                    cond:1_1 = esi_2 s<= 0
                else
                    int32_t ecx_7 = data_797ca0
                    esi_2 = ecx_7 - 1
                    
                    if (esi_2 s< 0)
                    label_70c54a:
                        
                        if (ecx_7 s< 0x10)
                            ecx_7 += 1
                            data_797ca0 = ecx_7
                        
                        esi_2 = ecx_7 - 1
                        cond:1_1 = esi_2 s<= 0
                    else
                        int32_t temp1_1
                        
                        do
                            if (*((esi_2 << 3) + &data_797ca8) == i)
                                ebx_2 = *((esi_2 << 3) + &data_797ca8)
                                edi_3 = *((esi_2 << 3) + &data_797cac)
                                break
                            
                            temp1_1 = esi_2
                            esi_2 -= 1
                        while (temp1_1 - 1 s>= 0)
                        cond:1_1 = esi_2 s<= 0
                        
                        if (esi_2 s< 0)
                            goto label_70c54a
                
                if (not(cond:1_1))
                    int32_t eax_13 = 0
                    
                    if (esi_2 s>= 0)
                        do
                            int32_t ecx_8 = *((eax_13 << 3) + &data_797ca8)
                            int16_t* edx_3 = *((eax_13 << 3) + &data_797cac)
                            *((eax_13 << 3) + &data_797ca8) = ebx_2
                            *((eax_13 << 3) + &data_797cac) = edi_3
                            ebx_2 = ecx_8
                            edi_3 = edx_3
                            eax_13 += 1
                        while (eax_13 s<= esi_2)
                
                goto label_70c6ed
            
            int32_t var_8_3 = 0xfffffffe
            lpAddress = lpAddress_1
        label_70c5c1:
            MEMORY_BASIC_INFORMATION buffer
            
            if (VirtualQuery(lpAddress, &buffer, 0x1c) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 1
            
            if (buffer.Type != 0x1000000)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0xffffffff
            
            int16_t* AllocationBase_1 = buffer.AllocationBase
            void* eax_16 = sub_6c0980(AllocationBase_1)
            
            if (eax_16 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0xffffffff
            
            if ((buffer.Protect.b & 0xcc) == 0)
            label_70c634:
                
                if (sub_70c300(eax_16, lpAddress_1, edi_2, AllocationBase_1, lpAddress_1) != 0
                        && sub_6c09c0(AllocationBase_1, *(arg1 + 4) - AllocationBase_1) != 0)
                    int32_t temp0_2 = data_797ca4
                    data_797ca4 = 1
                    
                    if (temp0_2 != 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    
                    int32_t edi_5 = data_797ca0
                    int32_t eax_20 = edi_5
                    
                    if (edi_5 s> 0)
                        void* ecx_16 = &(&data_797ca0)[edi_5 * 2]
                        
                        while (*ecx_16 != i)
                            eax_20 -= 1
                            ecx_16 -= 8
                            
                            if (eax_20 s<= 0)
                                break
                    
                    if (eax_20 != 0)
                        (&data_797ca4)[eax_20 * 2] = buffer.AllocationBase
                    else
                        int32_t esi_3 = eax_20 + 0xf
                        
                        if (edi_5 s<= 0xf)
                            esi_3 = edi_5
                        
                        void* i_2 = i
                        void* AllocationBase = buffer.AllocationBase
                        
                        if (esi_3 s>= 0)
                            void** eax_21 = &data_797ca8
                            int32_t i_3 = esi_3 + 1
                            int32_t i_1
                            
                            do
                                void* i_4 = *eax_21
                                void* AllocationBase_2 = eax_21[1]
                                *eax_21 = i_2
                                eax_21[1] = AllocationBase
                                i_2 = i_4
                                AllocationBase = AllocationBase_2
                                eax_21 = &eax_21[2]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            edi_5 = data_797ca0
                        
                        if (edi_5 s< 0x10)
                            data_797ca0 = edi_5 + 1
                    
                label_70c6ed:
                    data_797ca4
                    data_797ca4 = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
            else
                eax_16 = sub_6c09c0(AllocationBase_1, lpAddress_1 - AllocationBase_1)
                
                if (eax_16 != 0 && (*(eax_16 + 0x24) & 0x80000000) == 0)
                    goto label_70c634
        else
            int32_t eax_5 = *(arg1 - 8)
            
            if (eax_5 u>= StackLimit && eax_5 u< arg1)
                goto label_70c474

label_70c408:
fsbase->NtTib.ExceptionList = ExceptionList
return 0
