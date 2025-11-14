// 函数: sub_4d91e0
// 地址: 0x4d91e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t eax_2 = (eax - edx) s>> 1

while (arg5 s< arg3)
    int32_t* esi_1 = arg4 + eax_2 * 0x14
    int32_t edx_2 = *esi_1
    
    if (edx_2 s>= *arg6)
        break
    
    int32_t* ecx_1 = arg4 + arg3 * 0x14
    *ecx_1 = edx_2
    ecx_1[1] = esi_1[1]
    ecx_1[3] = esi_1[3]
    int32_t edx_4
    edx_4.b = esi_1[4].b
    ecx_1[4].b = edx_4.b
    arg3 = eax_2
    int32_t eax_4
    int32_t edx_5
    edx_5:eax_4 = sx.q(eax_2 - 1)
    eax_2 = (eax_4 - edx_5) s>> 1

int32_t* result = arg4 + arg3 * 0x14
*result = *arg6
result[1] = arg6[1]
result[3] = arg6[3]
int32_t edx_6
edx_6.b = arg6[4].b
result[4].b = edx_6.b
return result
