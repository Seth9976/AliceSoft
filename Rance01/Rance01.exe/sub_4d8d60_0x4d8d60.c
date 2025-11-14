// 函数: sub_4d8d60
// 地址: 0x4d8d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg3 * 2 + 2
void* ebp = arg3
bool cond:0 = eax != arg4

while (eax s< arg4)
    void* edx = eax * 5
    
    if (*(arg1 + (edx << 2)) s< *(arg1 + (edx << 2) - 0x14))
        eax -= 1
    
    void* edx_2 = eax * 5
    void* edx_3 = arg1 + (edx_2 << 2)
    int32_t* ecx_1 = arg1 + arg3 * 0x14
    *ecx_1 = *(arg1 + (edx_2 << 2))
    ecx_1[1] = *(edx_3 + 4)
    ecx_1[3] = fconvert.s(fconvert.t(*(edx_3 + 0xc)))
    edx_3.b = *(edx_3 + 0x10)
    ecx_1[4].b = edx_3.b
    arg3 = eax
    eax = eax * 2 + 2
    cond:0 = eax != arg4

if (not(cond:0))
    void* eax_1 = arg4 * 5
    int32_t* ecx_3 = arg1 + arg3 * 0x14
    *ecx_3 = *(arg1 + (eax_1 << 2) - 0x14)
    ecx_3[1] = *(arg1 + (eax_1 << 2) - 0x10)
    ecx_3[3] = fconvert.s(fconvert.t(*(arg1 + (eax_1 << 2) - 8)))
    eax.b = *(arg1 + (eax_1 << 2) - 4)
    ecx_3[4].b = eax.b
    arg3 = arg4 - 1

return sub_4d9170(eax, arg5, arg3, arg1, ebp, arg5)
