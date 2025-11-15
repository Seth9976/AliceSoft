// 函数: ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
// 地址: 0x100047b9
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t ecx
int32_t var_8 = ecx
int32_t i = arg2
void* edi = arg1
int32_t ecx_1 = *(edi + 0xc)
int32_t edx = ecx_1
int32_t ebx = *(edi + 0x10)
int32_t var_8_1 = ecx_1

if (i s>= 0)
    int32_t eax_3 = ecx_1 * 0x14 + 8 + ebx
    
    do
        if (ecx_1 == 0xffffffff)
            goto label_1000482b
        
        eax_3 -= 0x14
        ecx_1 -= 1
        edi = arg1
        
        if (*(eax_3 - 4) s< arg3)
            edi = arg1
            
            if (arg3 s<= *eax_3 || ecx_1 == 0xffffffff)
            label_10004800:
                edx = var_8_1
                i -= 1
                var_8_1 = ecx_1
        else if (ecx_1 == 0xffffffff)
            goto label_10004800
    while (i s>= 0)

*arg4 = ecx_1 + 1
*arg5 = edx

if (edx u<= *(edi + 0xc) && ecx_1 + 1 u<= edx)
    return (ecx_1 + 1) * 0x14 + ebx

label_1000482b:
sub_1000624c()
noreturn
