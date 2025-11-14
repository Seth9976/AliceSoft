// 函数: sub_50e0d0
// 地址: 0x50e0d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* arg_4
int32_t* ebx = arg_4

if (*(arg2 + 0x38) == ebx)
    int32_t eax
    eax.b = 1
    return eax

if (*(arg2 + 0x34) != 0)
    *(arg2 + 0x34) = 0
    *(arg2 + 0x38) = 0
    *(arg2 + 0x3c) = 0

sub_591420(arg2 + 0x18, &var_4, &arg_4)
int32_t* eax_2 = var_4

if (eax_2 != *(arg2 + 0x1c))
    *(arg2 + 0x34) = eax_2[4]
label_50e149:
    
    if ((*(**(arg2 + 0x34) + 0x10))() != 0)
        *(arg2 + 0x38) = ebx
        *(arg2 + 0x3c) = 1
        return 1
    
    int32_t var_14_2 = 0x72d9c3
    sub_51ddc0(0x754000)
else
    int32_t* ecx_2 = *(arg2 + 0x4c)
    arg_4 = ebx
    
    if (ecx_2 != 0)
        eax_2 = sub_511f10(ecx_2, ebx)
        
        if (eax_2 != 0)
            *sub_50fa20(arg2 + 0x18, &arg_4) = eax_2
            *(arg2 + 0x34) = eax_2
            goto label_50e149

eax_2.b = 0
return eax_2
