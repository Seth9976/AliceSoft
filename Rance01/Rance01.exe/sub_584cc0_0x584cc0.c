// 函数: sub_584cc0
// 地址: 0x584cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(*arg2 + 0x10))()
int32_t eax_3 = (*(*arg2 + 0x14))()
**(arg1 + 0x3c) = arg4
void* ebx = arg1 + 0xc
*(*(arg1 + 0x3c) + 4) = eax_1
*(*(ebx + 0x30) + 8) = eax_3
(*(***(arg1 + 4) + 0x10))(arg2, 0, 0, arg3, 0, 0, eax_1, eax_3)
int32_t i = 0

if (*(ebx + 8) s> 0)
    int32_t ecx_6 = *(ebx + 4)
    
    do
        int32_t eax_5 = 0
        
        if (ecx_6 s> 0)
            do
                *(*(*ebx + (i << 2)) + (eax_5 << 2)) = fconvert.s(float.t(0))
                ecx_6 = *(ebx + 4)
                eax_5 += 1
            while (eax_5 s< ecx_6)
        
        i += 1
    while (i s< *(ebx + 8))

long double x87_r7_2 = fconvert.t(arg5)
arg5 = fconvert.s(x87_r7_2 * x87_r7_2)
int32_t i_2 = 0

if ((*(arg1 + 0x158) - *(arg1 + 0x154)) s/ 0x7c s> 0)
    arg3 = 0
    int32_t i_1
    
    do
        unimplemented  {fld st0, dword [esp+0x28]}
        void* eax_10 = *(arg1 + 0x154) + arg3
        unimplemented  {fild st0, dword [eax+0x74]}
        unimplemented  {fmul st0, st1}
        *(arg1 + 0x78) = fconvert.s(unimplemented  {fstp dword [ebp+0x78], st0})
        unimplemented  {fstp dword [ebp+0x78], st0}
        unimplemented  {fild st0, dword [eax+0x78]}
        unimplemented  {fmul st0, st1}
        *(arg1 + 0x7c) = fconvert.s(unimplemented  {fstp dword [ebp+0x7c], st0})
        unimplemented  {fstp dword [ebp+0x7c], st0}
        unimplemented  {fld st0, dword [eax+0x4]}
        int32_t edx_9 = *(arg1 + 0x30)
        float var_4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
        unimplemented  {fstp dword [esp+0x14], st0}
        unimplemented  {fld st0, dword [ebp+0x164]}
        arg4 = neg.d(*(eax_10 + 0xc))
        unimplemented  {fild st0, dword [esp+0x24]}
        void* ecx_13 = arg1 + 0x2c
        unimplemented  {fmulp st2, st0}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        arg4 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
        unimplemented  {fstp dword [esp+0x24], st0}
        unimplemented  {fsub st0, dword [esp+0x24]}
        arg4 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
        unimplemented  {fstp dword [esp+0x24], st0}
        unimplemented  {fld st0, dword [eax]}
        int32_t eax_11 = *ecx_13
        *(arg1 + 0x6c) = fconvert.s(unimplemented  {fstp dword [ebp+0x6c], st0})
        unimplemented  {fstp dword [ebp+0x6c], st0}
        unimplemented  {fld st0, dword [esp+0x14]}
        *(arg1 + 0x70) = fconvert.s(unimplemented  {fstp dword [ebp+0x70], st0})
        unimplemented  {fstp dword [ebp+0x70], st0}
        unimplemented  {fld st0, dword [esp+0x24]}
        *(arg1 + 0x74) = fconvert.s(unimplemented  {fstp dword [ebp+0x74], st0})
        unimplemented  {fstp dword [ebp+0x74], st0}
        
        if (eax_11 != edx_9)
            arg4 = eax_11
            int32_t eax_12 = edx_9
            
            if (edx_9 != edx_9)
                do
                    int32_t edi_1 = arg4
                    arg4 += 0x64
                    int32_t esi_1 = eax_12
                    eax_12 += 0x64
                    __builtin_memcpy(edi_1, esi_1, 0x64)
                while (eax_12 != edx_9)
            
            ecx_13 = arg1 + 0x2c
            *(ecx_13 + 4) = arg4
        
        int32_t esi_2 = *(arg1 + 0x154) + arg3 + 0x10
        int32_t edx_12 = *(ecx_13 + 4)
        int32_t eax_14
        
        if (esi_2 u< edx_12)
            eax_14 = *ecx_13
        
        if (esi_2 u< edx_12 && eax_14 u<= esi_2)
            if (*(ecx_13 + 4) == *(arg1 + 0x34))
                sub_580890(arg1 + 0x2c)
            
            esi_2 = (esi_2 - eax_14) s/ 0x64 * 0x64 + *(arg1 + 0x2c)
        else if (edx_12 == *(ecx_13 + 8))
            sub_580890(ecx_13)
        
        int32_t edi_2 = *(arg1 + 0x30)
        
        if (edi_2 != 0)
            __builtin_memcpy(edi_2, esi_2, 0x64)
        
        *(arg1 + 0x30) += 0x64
        int32_t eax_17 = *(ebx + 0x40)
        int32_t edx_15 = *(ebx + 0x44)
        
        if (eax_17 != edx_15)
            arg4 = eax_17
            int32_t eax_18 = edx_15
            
            if (edx_15 != edx_15)
                do
                    int32_t edi_3 = arg4
                    arg4 += 0x1c
                    int32_t esi_8 = eax_18
                    eax_18 += 0x1c
                    __builtin_memcpy(edi_3, esi_8, 0x1c)
                while (eax_18 != edx_15)
            
            *(ebx + 0x44) = arg4
        
        int32_t* ecx_16 = *(ebx + 0x50)
        int32_t* edx_16 = *(ebx + 0x54)
        
        if (ecx_16 != edx_16)
            int32_t* eax_19 = edx_16
            
            if (edx_16 != edx_16)
                do
                    *ecx_16 = *eax_19
                    ecx_16[1] = eax_19[1]
                    ecx_16[2] = eax_19[2]
                    ecx_16[3] = eax_19[3]
                    ecx_16[4] = eax_19[4]
                    eax_19 = &eax_19[5]
                    ecx_16 = &ecx_16[5]
                while (eax_19 != edx_16)
            
            *(ebx + 0x54) = ecx_16
        
        sub_57ede0(ebx)
        sub_57f330(ebx)
        unimplemented  {call 0x57f330}
        sub_57f710(ebx)
        unimplemented  {call 0x57f710}
        sub_57f920(ebx, arg2)
        unimplemented  {call 0x57f920}
        arg3 += 0x7c
        i_1 = i_2 + 1
        i_2 = i_1
    while (i_1 s< (*(arg1 + 0x158) - *(arg1 + 0x154)) s/ 0x7c)

int32_t result
result.b = 1
return result
