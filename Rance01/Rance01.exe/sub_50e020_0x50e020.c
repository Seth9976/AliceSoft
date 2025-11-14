// 函数: sub_50e020
// 地址: 0x50e020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t arg_4
int32_t ebx = arg_4

if (*(arg2 + 0x2c) == ebx)
    int32_t eax
    eax.b = 1
    return eax

if (*(arg2 + 0x28) != 0)
    *(arg2 + 0x28) = 0
    *(arg2 + 0x2c) = 0
    *(arg2 + 0x30) = 0

sub_591420(arg2 + 8, &var_4, &arg_4)
int32_t* eax_2 = var_4

if (eax_2 != *(arg2 + 0xc))
    *(arg2 + 0x28) = eax_2[4]
label_50e098:
    
    if ((*(**(arg2 + 0x28) + 0x10))() != 0)
        *(arg2 + 0x2c) = ebx
        *(arg2 + 0x30) = 1
        return 1
    
    int32_t var_14_2 = 0x72d9a3
    sub_51ddc0(0x753fd8)
else
    int32_t* edi_1 = *(arg2 + 0x4c)
    arg_4 = ebx
    
    if (edi_1 != 0)
        eax_2 = sub_510df0(edi_1, ebx)
        
        if (eax_2 != 0)
            *sub_50fa20(arg2 + 8, &arg_4) = eax_2
            *(arg2 + 0x28) = eax_2
            goto label_50e098

eax_2.b = 0
return eax_2
