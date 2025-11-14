// 函数: sub_406330
// 地址: 0x406330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** edi = arg1

if (edi == arg2)
    return 

int32_t ebx_1 = arg3[4]

do
    int32_t* ecx_1
    
    if (arg3[5] u< 0x10)
        ecx_1 = arg3
    else
        ecx_1 = *arg3
    
    int32_t esi_1 = edi[4]
    int32_t eax = esi_1
    
    if (esi_1 u>= ebx_1)
        eax = ebx_1
    
    int32_t* edx_1
    
    if (edi[5] u< 0x10)
        edx_1 = edi
    else
        edx_1 = *edi
    
    if (sub_402320(eax, edx_1, ecx_1, eax) == 0 && esi_1 u>= ebx_1)
        int32_t eax_1
        eax_1.b = esi_1 != ebx_1
        
        if (eax_1 == 0)
            break
    
    edi = &edi[7]
while (edi != arg2)
