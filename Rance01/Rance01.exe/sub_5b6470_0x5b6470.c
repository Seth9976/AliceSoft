// 函数: sub_5b6470
// 地址: 0x5b6470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t i_1 = *(arg1 + 0x28)
int32_t eax = sub_5b4c20(arg2, *(arg1 + 0x24))
int32_t result
int32_t edi_2

if (eax s< 0)
    edi_2 = *(arg1 + 8)
    result = 0
else
    int32_t ebx_1 = *(*(arg1 + 0x20) + (eax << 2))
    
    if (ebx_1 s>= 0)
        int32_t edx_1 = *(arg1 + 0x1c)
        sub_5b4cd0(sx.d(*(edx_1 + ebx_1 - 1)), edx_1, arg2)
        return ebx_1 - 1
    
    result = ebx_1 s>> 0xf & 0x7fff
    edi_2 = *(arg1 + 8) - (ebx_1 & 0x7fff)

int32_t* ebx_6 = arg2
int32_t eax_3 = sub_5b4c20(ebx_6, i_1)

if (eax_3 s>= 0)
label_5b64fb:
    int32_t eax_4 = sub_5b6410(eax_3)
    int32_t i = edi_2 - result
    
    if (i s> 1)
        do
            int32_t edx_5 = i s>> 1
            int32_t ecx_10 = edx_5 + result
            int32_t ecx_12 =
                neg.d(sbb.d(ecx_10, ecx_10, eax_4 u< *(*(arg1 + 0x14) + (ecx_10 << 2))))
            edi_2 -= neg.d(ecx_12) & edx_5
            result += (ecx_12 - 1) & edx_5
            i = edi_2 - result
        while (i s> 1)
        
        ebx_6 = arg2
    
    int32_t eax_6 = sx.d(*(*(arg1 + 0x1c) + result))
    
    if (eax_6 s<= i_1)
        sub_5b4cd0(eax_6, arg1, ebx_6)
        return result
    
    sub_5b4cd0(i_1, arg1, ebx_6)
else
    while (i_1 s> 1)
        i_1 -= 1
        eax_3 = sub_5b4c20(ebx_6, i_1)
        
        if (eax_3 s>= 0)
            goto label_5b64fb
    
    if (eax_3 s>= 0)
        goto label_5b64fb

return 0xffffffff
