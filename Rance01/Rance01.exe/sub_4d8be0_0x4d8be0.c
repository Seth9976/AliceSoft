// 函数: sub_4d8be0
// 地址: 0x4d8be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg3 * 2 + 2
void* ebp = arg3
bool cond:0 = eax != arg4

while (eax s< arg4)
    int32_t edx_1 = eax << 5
    
    if (*(edx_1 + arg1) s< *(edx_1 + arg1 - 0x20))
        eax -= 1
    
    int32_t edx_3 = eax << 5
    void* edx_4 = edx_3 + arg1
    int32_t* ecx_1 = (arg3 << 5) + arg1
    *ecx_1 = *(edx_3 + arg1)
    ecx_1[1] = *(edx_4 + 4)
    ecx_1[3] = *(edx_4 + 0xc)
    ecx_1[4] = *(edx_4 + 0x10)
    ecx_1[5] = *(edx_4 + 0x14)
    ecx_1[6] = *(edx_4 + 0x18)
    edx_4.b = *(edx_4 + 0x1c)
    ecx_1[7].b = edx_4.b
    arg3 = eax
    eax = eax * 2 + 2
    cond:0 = eax != arg4

if (not(cond:0))
    int32_t eax_2 = arg4 << 5
    int32_t ecx_2 = arg3 << 5
    *(ecx_2 + arg1) = *(eax_2 + arg1 - 0x20)
    void* ecx_3 = ecx_2 + arg1
    *(ecx_3 + 4) = *(eax_2 + arg1 - 0x1c)
    *(ecx_3 + 0xc) = *(eax_2 + arg1 - 0x14)
    *(ecx_3 + 0x10) = *(eax_2 + arg1 - 0x10)
    *(ecx_3 + 0x14) = *(eax_2 + arg1 - 0xc)
    *(ecx_3 + 0x18) = *(eax_2 + arg1 - 8)
    eax.b = *(eax_2 + arg1 - 4)
    *(ecx_3 + 0x1c) = eax.b
    arg3 = arg4 - 1

return sub_4d9040(eax, arg5, arg3, arg1, ebp, arg5)
