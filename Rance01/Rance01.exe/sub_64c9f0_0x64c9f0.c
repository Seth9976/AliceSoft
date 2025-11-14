// 函数: sub_64c9f0
// 地址: 0x64c9f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_4 = ebx
int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t result = (eax - edx) s>> 1
int32_t edi_2

if (arg5 s>= arg3)
label_64ca46:
    edi_2 = arg4
else
    while (true)
        edi_2 = arg4
        ebx.b = arg6[9].b
        int32_t* esi_1 = edi_2 + result * 0x28
        int32_t edx_1
        edx_1.b = esi_1[9].b
        
        if (edx_1.b != 0)
            if (ebx.b == 0)
                break
            
        label_64ca26:
            
            if (*esi_1 s>= *arg6)
                break
        else if (ebx.b == 0)
            goto label_64ca26
        
        __builtin_memcpy(edi_2 + arg3 * 0x28, esi_1, 0x28)
        arg3 = result
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = sx.q(result - 1)
        result = (eax_3 - edx_3) s>> 1
        
        if (arg5 s>= arg3)
            goto label_64ca46

__builtin_memcpy(edi_2 + arg3 * 0x28, arg6, 0x28)
return result
