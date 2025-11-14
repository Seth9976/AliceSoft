// 函数: sub_5d96b0
// 地址: 0x5d96b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[2] == 0xffffffff)
    *arg4 = 0
    int32_t* eax
    eax.b = 0
    return eax

BOOL eax_2 = (*(*arg1 + 0x20))()
int32_t ecx = arg1[7]

if (eax_2 u>= ecx)
    *arg4 = 0
    eax_2.b = 0
    return eax_2

uint32_t edi = arg3
uint32_t ecx_2 = ecx - eax_2

if (edi u> ecx_2)
    edi = ecx_2

if (edi != 0)
    if (sub_6021f0(&arg1[2], edi, arg2).b == 0)
        *arg4 = 0
        int32_t* eax_3
        eax_3.b = 0
        return eax_3
    
    arg1[0xe] += edi

*arg4 = edi
eax_2.b = 1
return eax_2
