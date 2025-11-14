// 函数: sub_551810
// 地址: 0x551810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx
uint32_t result

if (arg1[0x10].b != 0)
    result = (arg1[1] u>> 2) + 1
    
    if (result s<= 0)
        result.b = 0
        return result
    
    if (sub_427ad0(arg1, result << 2).b == 0)
        result.b = 0
        return result
    
    void* esi_2 = arg1[5]
    int32_t eax_5 = sub_5527e0(esi_2)
    *(*(esi_2 + 8) + (eax_5 << 2)) = sub_552440(esi_2 + 0x20)
    edx = eax_5
    uint32_t eax_8
    
    if (arg1[0x10].b != 0)
        eax_8 = arg1[1] u>> 2
    else
        eax_8 = 0
    
    int32_t eax_10 = arg1[1]
    
    if (eax_8 - 1 u< eax_10 u>> 2)
        if (eax_10 != 0)
            eax_10 = *arg1
        
        *(eax_10 + ((eax_8 - 1) << 2)) = eax_5
else
    if (sub_550e50(arg1).b == 0)
        result.b = 0
        return result
    
    uint32_t eax_1
    
    if (arg1[0x10].b != 0)
        eax_1 = arg1[1] u>> 2
    else
        eax_1 = 0
    
    if (arg1[1] != 0)
        edx = *(*arg1 + (eax_1 << 2) - 4)
    else
        edx = *((eax_1 << 2) + 0xfffffffc)
void* ebx_1 = arg1[5]
int32_t* ecx_7

if (arg2 u< (*(ebx_1 + 0xc) - *(ebx_1 + 8)) s>> 2)
    ecx_7 = *(*(ebx_1 + 8) + (arg2 << 2))
else
    ecx_7 = nullptr

if (edx u< (*(ebx_1 + 0xc) - *(ebx_1 + 8)) s>> 2)
    return sub_5506c0(*(*(ebx_1 + 8) + (edx << 2)), ecx_7) != 0

return sub_5506c0(nullptr, ecx_7) != 0
