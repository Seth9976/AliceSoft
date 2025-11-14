// 函数: sub_5ad7d0
// 地址: 0x5ad7d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_14
int32_t eax_1 = data_78c474 ^ &var_14
char eax_2 = (*(arg3 + 0x6c)).b
void* edi = arg2
var_14 = edi

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before pHYs")
    noreturn

int32_t eax_4

if ((eax_2 & 4) != 0)
    sub_5a5de0("Invalid pHYs after IDAT", arg3)
    eax_4 = sub_5ab650(arg3, arg4)
else if (edi != 0 && (*(edi + 8) & 0x80) != 0)
    sub_5a5de0("Duplicate pHYs chunk", arg3)
    eax_4 = sub_5ab650(arg3, arg4)
else if (arg4 == 9)
    int32_t eax_5 = *(arg3 + 0x54)
    
    if (eax_5 == 0)
        sub_5a5c60(arg3, "Call to NULL read function")
        noreturn
    
    char var_10
    int32_t edx = eax_5(arg3, &var_10, 9)
    int32_t ebx_1 = 9
    char* ebp_1 = &var_10
    
    if ((*(arg3 + 0x100) & 0x20000000) != 0)
        edx = *(arg3 + 0x70) & 0x300
        
        if (edx != 0x300)
            goto label_5ad891
    else if ((*(arg3 + 0x70) & 0x800) == 0)
    label_5ad891:
        int32_t eax_6 = *(arg3 + 0x124)
        int32_t edi_1
        int32_t temp0_1
        
        do
            edi_1 = ebx_1
            
            if (ebx_1 == 0)
                edi_1 = 0xffffffff
            
            if (ebp_1 != 0)
                eax_6, edx = sub_59e5d0(eax_6, edx, ebp_1, edi_1)
            else
                eax_6 = 0
            
            ebp_1 = &ebp_1[edi_1]
            temp0_1 = ebx_1
            ebx_1 -= edi_1
        while (temp0_1 != edi_1)
        edi = var_14
        *(arg3 + 0x124) = eax_6
    
    eax_4 = sub_5ab650(arg3, 0)
    
    if (eax_4 == 0 && edi != 0)
        char var_f
        uint32_t eax_9 = (zx.d(var_10) << 8) + zx.d(var_f)
        *(edi + 8) |= 0x80
        char var_e
        char var_d
        *(edi + 0x70) = (((eax_9 << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
        char var_9
        uint32_t eax_15 = zx.d(var_9)
        char var_8
        uint32_t ecx_6
        ecx_6.b = var_8
        *(edi + 0x78) = ecx_6.b
        char var_c
        char var_b
        char var_a
        *(edi + 0x74) = (((((zx.d(var_c) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + eax_15
        sub_6b4885(eax_1 ^ &var_14)
        return eax_15
else
    sub_5a5de0("Incorrect pHYs chunk length", arg3)
    eax_4 = sub_5ab650(arg3, arg4)

sub_6b4885(eax_1 ^ &var_14)
return eax_4
