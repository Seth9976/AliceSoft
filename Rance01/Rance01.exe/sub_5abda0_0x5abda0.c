// 函数: sub_5abda0
// 地址: 0x5abda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_318
int32_t eax_1 = data_78c474 ^ &var_318
int32_t eax_2 = *(arg2 + 0x6c)
int32_t edi = arg3

if ((eax_2.b & 1) == 0)
    sub_5a5c60(arg2, "Missing IHDR before PLTE")
    noreturn

if ((eax_2.b & 4) != 0)
    sub_5a5de0("Invalid PLTE after IDAT", arg2)
    int32_t eax_4 = sub_5ab650(arg2, edi)
    sub_6b4885(eax_1 ^ &var_318)
    return eax_4

if ((eax_2.b & 2) != 0)
    sub_5a5c60(arg2, "Duplicate PLTE chunk")
    noreturn

arg3.b = *(arg2 + 0x13b)
*(arg2 + 0x6c) = eax_2 | 2

if ((arg3.b & 2) == 0)
    sub_5a5de0("Ignoring PLTE chunk in grayscale PNG", arg2)
    int32_t eax_7 = sub_5ab650(arg2, edi)
    sub_6b4885(eax_1 ^ &var_318)
    return eax_7

if (edi u<= 0x300 && edi == edi u/ 3 * 3)
    int32_t edi_3 = edi s/ 3
    int32_t var_30c = edi_3
    int32_t var_310 = 0
    
    if (edi_3 s> 0)
        void var_302
        void* var_314_1 = &var_302
        int32_t ecx_8
        
        do
            int32_t eax_11 = *(arg2 + 0x54)
            
            if (eax_11 == 0)
                sub_5a5c60(arg2, "Call to NULL read function")
                noreturn
            
            int32_t edx_5 = eax_11(arg2, &var_318, 3)
            int32_t ebp_1 = 3
            char* ebx_1 = &var_318
            
            if ((*(arg2 + 0x100) & 0x20000000) != 0)
                edx_5 = *(arg2 + 0x70) & 0x300
                
                if (edx_5 != 0x300)
                    goto label_5abeec
            else if ((*(arg2 + 0x70) & 0x800) == 0)
            label_5abeec:
                int32_t eax_12 = *(arg2 + 0x124)
                int32_t edi_4
                int32_t temp1_1
                
                do
                    edi_4 = ebp_1
                    
                    if (ebp_1 == 0)
                        edi_4 = 0xffffffff
                    
                    if (ebx_1 != 0)
                        eax_12, edx_5 = sub_59e5d0(eax_12, edx_5, ebx_1, edi_4)
                    else
                        eax_12 = 0
                    
                    ebx_1 = &ebx_1[edi_4]
                    temp1_1 = ebp_1
                    ebp_1 -= edi_4
                while (temp1_1 != edi_4)
                edi_3 = var_30c
                *(arg2 + 0x124) = eax_12
            
            char var_317
            edx_5.b = var_317
            *(var_314_1 - 2) = var_318
            char var_316
            *var_314_1 = var_316
            ecx_8 = var_310 + 1
            *(var_314_1 - 1) = edx_5.b
            var_310 = ecx_8
            var_314_1 += 3
        while (ecx_8 s< edi_3)
    
    sub_5ab650(arg2, 0)
    void var_304
    uint32_t eax_16 = sub_5b0380(arg4, &var_304, arg2, &var_304, edi_3)
    
    if (*(arg2 + 0x13b) == 3 && arg4 != 0 && (*(arg4 + 8) & 0x10) != 0)
        if (*(arg2 + 0x134) u> edi_3.w)
            eax_16 = sub_5a5de0("Truncating incorrect tRNS chunk length", arg2)
            *(arg2 + 0x134) = edi_3.w
        
        if (*(arg4 + 0x16) u> edi_3.w)
            eax_16 = sub_5a5de0("Truncating incorrect info tRNS chunk length", arg2)
            *(arg4 + 0x16) = edi_3.w
    
    sub_6b4885(eax_1 ^ &var_318)
    return eax_16

if (arg3.b == 3)
    sub_5a5c60(arg2, "Invalid palette chunk")
    noreturn

sub_5a5de0("Invalid palette chunk", arg2)
int32_t eax_18 = sub_5ab650(arg2, edi)
sub_6b4885(eax_1 ^ &var_318)
return eax_18
