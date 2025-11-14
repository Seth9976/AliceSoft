// 函数: sub_550ef0
// 地址: 0x550ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c = ebx
int32_t var_4 = 0
int32_t result

if (arg2 s> 0)
    int32_t ecx_8
    
    do
        void* edi_1 = arg1[5]
        int32_t ebx_4
        
        if (*(edi_1 + 0x3c) != 0)
            int32_t eax_7 = *(*(edi_1 + 0x38) + (*(edi_1 + 0x3c) << 2) - 4)
            ebx_4 = 0xffffffff
            *(edi_1 + 0x3c) -= 1
            
            if (*(*(edi_1 + 8) + (eax_7 << 2)) != 0)
                sub_604c90(0x74c954)
            else
                ebx_4 = eax_7
        else
            int32_t eax_1 = *(edi_1 + 0xc)
            int32_t var_8 = 0
            int32_t ecx_1
            
            if (&var_8 u< eax_1)
                ecx_1 = *(edi_1 + 8)
            
            if (&var_8 u>= eax_1 || ecx_1 u> &var_8)
                if (eax_1 == *(edi_1 + 0x10))
                    sub_4307a0(edi_1 + 8)
                
                int32_t* eax_5 = *(edi_1 + 0xc)
                
                if (eax_5 != 0)
                    *eax_5 = 0
                
                *(edi_1 + 0xc) += 4
                ebx_4 = ((*(edi_1 + 0xc) - *(edi_1 + 8)) s>> 2) - 1
            else
                if (eax_1 == *(edi_1 + 0x10))
                    sub_4307a0(edi_1 + 8)
                
                int32_t* eax_3 = *(edi_1 + 0xc)
                
                if (eax_3 == 0)
                    *(edi_1 + 0xc) += 4
                    ebx_4 = ((*(edi_1 + 0xc) - *(edi_1 + 8)) s>> 2) - 1
                else
                    *eax_3 = *(*(edi_1 + 8) + ((&var_8 - ecx_1) s>> 2 << 2))
                    *(edi_1 + 0xc) += 4
                    ebx_4 = ((*(edi_1 + 0xc) - *(edi_1 + 8)) s>> 2) - 1
        
        int32_t* esi_3
        
        if (*(edi_1 + 0x24) != *(edi_1 + 0x28))
            void* eax_12 = *(edi_1 + 0x28)
            esi_3 = *(eax_12 - 4)
            
            if (*(edi_1 + 0x24) != eax_12)
                *(edi_1 + 0x28) = eax_12 - 4
            
            int32_t eax_14 = esi_3[2]
            esi_3[1] = 0
            
            if (eax_14 u> 1)
            label_551057:
                char* eax_17 = *esi_3
                esi_3[1] = 1
                *eax_17 = 0
                void* eax_18 = esi_3[5]
                esi_3[3] = 2
                esi_3[4] = 1
                
                if (*(eax_18 + 0x1c) s>= 0x989680)
                    *(eax_18 + 0x1c) = 1
                
                int32_t ecx_6 = *(eax_18 + 0x1c)
                *(eax_18 + 0x1c) = ecx_6 + 1
                esi_3[6] = ecx_6
                esi_3[7] = 0xffffffff
                esi_3[9] = 0
                esi_3[0xb].w = 0
                esi_3[0xc] = 0xffffffff
                esi_3[0xd] = 0xffffffff
                esi_3[0xe] = 0xffffffff
                esi_3[0xf] = 0xffffffff
                esi_3[0x10].b = 0
                esi_3[0x11] = 0xffffffff
            else
                esi_3[2] = eax_14 + 1
                
                if (eax_14 == 0xffffffff)
                    goto label_551057
                
                int32_t lpMem = *esi_3
                int32_t eax_16
                
                if (lpMem == 0)
                    eax_16 = HeapAlloc(data_797df4, HEAP_NONE, eax_14 + 1)
                else
                    eax_16 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, eax_14 + 1)
                
                *esi_3 = eax_16
                
                if (eax_16 != 0)
                    goto label_551057
                
                sub_54f810(esi_3)
                int32_t* var_1c_3 = esi_3
                sub_6b4d5b()
                esi_3 = nullptr
        else
            int32_t* eax_9
            int32_t ecx_4
            eax_9, ecx_4 = operator new(0x5c)
            
            if (eax_9 == 0)
                esi_3 = nullptr
            else
                esi_3 = sub_54f770(ecx_4, 2, *(edi_1 + 0x20), eax_9)
        
        *(*(edi_1 + 8) + (ebx_4 << 2)) = esi_3
        
        if (ebx_4 s>= 0)
            result = arg1[1]
        
        if (ebx_4 s< 0 || var_4 u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *arg1
        
        *(result + (var_4 << 2)) = ebx_4
        ecx_8 = var_4 + 1
        var_4 = ecx_8
    while (ecx_8 s< arg2)

result.b = 1
return result
