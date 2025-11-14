// 函数: sub_5ad960
// 地址: 0x5ad960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_14
int32_t eax_1 = data_78c474 ^ &var_14
char eax_2 = (*(arg3 + 0x6c)).b
void* edi = arg2
var_14 = edi

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before oFFs")
    noreturn

uint32_t result

if ((eax_2 & 4) != 0)
    sub_5a5de0("Invalid oFFs after IDAT", arg3)
    result = sub_5ab650(arg3, arg4)
else if (edi != 0 && (*(edi + 8) & 0x100) != 0)
    sub_5a5de0("Duplicate oFFs chunk", arg3)
    result = sub_5ab650(arg3, arg4)
else if (arg4 == 9)
    int32_t eax_4 = *(arg3 + 0x54)
    
    if (eax_4 == 0)
        sub_5a5c60(arg3, "Call to NULL read function")
        noreturn
    
    char var_10
    int32_t edx = eax_4(arg3, &var_10, 9)
    int32_t ebp_1 = 9
    
    if ((*(arg3 + 0x100) & 0x20000000) != 0)
        edx = *(arg3 + 0x70) & 0x300
        
        if (edx != 0x300)
            goto label_5ada24
    else if ((*(arg3 + 0x70) & 0x800) == 0)
    label_5ada24:
        int32_t eax_5 = *(arg3 + 0x124)
        char* ebx_1 = &var_10
        int32_t edi_1
        int32_t temp0_1
        
        do
            edi_1 = ebp_1
            
            if (ebp_1 == 0)
                edi_1 = 0xffffffff
            
            if (ebx_1 != 0)
                eax_5, edx = sub_59e5d0(eax_5, edx, ebx_1, edi_1)
            else
                eax_5 = 0
            
            ebx_1 = &ebx_1[edi_1]
            temp0_1 = ebp_1
            ebp_1 -= edi_1
        while (temp0_1 != edi_1)
        edi = var_14
        *(arg3 + 0x124) = eax_5
    
    result = sub_5ab650(arg3, 0)
    
    if (result == 0)
        result.b = var_10
        uint32_t ecx_5 = zx.d(result.b) << 8
        uint32_t ecx_10
        char var_f
        char var_e
        char var_d
        
        if (result.b s>= 0)
            ecx_10 = ((((ecx_5 + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
        else
            ecx_10 = ((((ecx_5 + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
        char var_c
        uint32_t eax_7
        eax_7.b = var_c
        char var_b
        char var_a
        char var_9
        result = (((((zx.d(eax_7.b) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + zx.d(var_9)
        
        if (edi != 0)
            *(edi + 8) |= 0x100
            *(edi + 0x68) = result
            char var_8
            result.b = var_8
            *(edi + 0x64) = ecx_10
            *(edi + 0x6c) = result.b
            sub_6b4885(eax_1 ^ &var_14)
            return result
else
    sub_5a5de0("Incorrect oFFs chunk length", arg3)
    result = sub_5ab650(arg3, arg4)

sub_6b4885(eax_1 ^ &var_14)
return result
