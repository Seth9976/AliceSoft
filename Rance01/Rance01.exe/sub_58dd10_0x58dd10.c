// 函数: sub_58dd10
// 地址: 0x58dd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2
int32_t* var_4
int32_t arg_8
sub_58de60(arg1 + 0x20, &var_4, &arg_8)
int32_t* ebx = var_4

if (ebx == *(arg1 + 0x24))
    goto label_58de05

void* ebp_1 = *edi
int32_t esi_3 = (edi[1] - ebp_1) s>> 2

if ((ebx[5] - ebx[4]) s>> 2 != esi_3)
    goto label_58de05

int32_t ecx_4 = 0
int32_t** eax

if (esi_3 s< 4)
label_58ddbe:
    
    if (ecx_4 s< esi_3)
        void* edx_2 = ebp_1 + (ecx_4 << 2)
        
        do
            long double x87_r7_5 = fconvert.t(*(edx_2 + ebx[4] - ebp_1))
            long double x87_r6_5 = fconvert.t(*edx_2)
            x87_r6_5 - x87_r7_5
            eax.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                break
            
            ecx_4 += 1
            edx_2 += 4
        while (ecx_4 s< esi_3)
        
    label_58ddf3:
        
        if (ecx_4 s< esi_3)
            edi = arg2
        label_58de05:
            int32_t* ecx_6 = **(*(arg1 + 8) + 0x1c)
            int32_t edx_4 = *edi
            int32_t eax_8
            int32_t ecx_7
            eax_8, ecx_7 = (*(*ecx_6 + 0x1b4))(ecx_6, arg_8, edx_4, (edi[1] - edx_4) s>> 2 u>> 2)
            
            if (eax_8 s< 0)
                eax_8.b = 0
                return eax_8
            
            int32_t var_28_2 = ecx_7
            void* var_2c_2 = arg1 + 0x20
            sub_4b55f0(sub_4fc890(arg1 + 0x20, &arg_8), edi)
    
    eax.b = 1
    return eax

void* eax_1 = ebx[4]
void* edi_1 = eax_1 + 0xc
void* edx_1 = ebp_1 + 4

while (true)
    long double x87_r7_1 = fconvert.t(*(edi_1 - 0xc))
    long double x87_r6_1 = fconvert.t(*(edx_1 - 4))
    x87_r6_1 - x87_r7_1
    eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        break
    
    long double x87_r7_2 = fconvert.t(*(eax_1 - ebp_1 + edx_1))
    long double x87_r6_2 = fconvert.t(*edx_1)
    x87_r6_2 - x87_r7_2
    eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        ecx_4 += 1
        break
    
    long double x87_r7_3 = fconvert.t(*(edi_1 - 4))
    long double x87_r6_3 = fconvert.t(*(edx_1 + 4))
    x87_r6_3 - x87_r7_3
    eax.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        ecx_4 += 2
        break
    
    long double x87_r7_4 = fconvert.t(*edi_1)
    long double x87_r6_4 = fconvert.t(*(edx_1 + 8))
    x87_r6_4 - x87_r7_4
    eax.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        ecx_4 += 3
        break
    
    ecx_4 += 4
    edx_1 += 0x10
    edi_1 += 0x10
    
    if (ecx_4 s>= esi_3 - 3)
        goto label_58ddbe

goto label_58ddf3
