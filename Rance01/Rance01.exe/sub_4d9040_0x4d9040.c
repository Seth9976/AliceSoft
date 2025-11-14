// 函数: sub_4d9040
// 地址: 0x4d9040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t eax_2 = (eax - edx) s>> 1

while (arg5 s< arg3)
    int32_t esi_2 = eax_2 << 5
    int32_t edx_1 = *(esi_2 + arg4)
    void* esi_3 = esi_2 + arg4
    
    if (edx_1 s>= *arg6)
        break
    
    int32_t ecx = arg3 << 5
    *(ecx + arg4) = edx_1
    void* ecx_1 = ecx + arg4
    *(ecx_1 + 4) = *(esi_3 + 4)
    *(ecx_1 + 0xc) = *(esi_3 + 0xc)
    *(ecx_1 + 0x10) = *(esi_3 + 0x10)
    *(ecx_1 + 0x14) = *(esi_3 + 0x14)
    *(ecx_1 + 0x18) = *(esi_3 + 0x18)
    int32_t edx_6
    edx_6.b = *(esi_3 + 0x1c)
    *(ecx_1 + 0x1c) = edx_6.b
    arg3 = eax_2
    int32_t eax_4
    int32_t edx_7
    edx_7:eax_4 = sx.q(eax_2 - 1)
    eax_2 = (eax_4 - edx_7) s>> 1

int32_t* result = (arg3 << 5) + arg4
*result = *arg6
result[1] = arg6[1]
result[3] = arg6[3]
result[4] = arg6[4]
result[5] = arg6[5]
result[6] = arg6[6]
int32_t ecx_5
ecx_5.b = arg6[7].b
result[7].b = ecx_5.b
return result
