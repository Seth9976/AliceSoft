// 函数: sub_4f32b0
// 地址: 0x4f32b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ecx
uint32_t var_4 = ecx
int32_t* ebp = arg2
struct sealengine::CPOLMaterial::VTable** eax = *ebp

if (&eax[1] u> ebp[1])
label_4f334a:
    eax.b = 0
    return eax

uint32_t ebx_7 =
    ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
*ebp = &eax[1]
var_4 = 0
uint32_t eax_1

if (ebx_7 s> 0)
    do
        eax = sub_4f3390(arg1, ebp)
        arg2 = eax
        
        if (eax == 0)
            goto label_4f334a
        
        int32_t eax_2 = *(arg1 + 0xc)
        int32_t ecx_3
        
        if (&arg2 u< eax_2)
            ecx_3 = *(arg1 + 8)
        
        if (&arg2 u>= eax_2 || ecx_3 u> &arg2)
            if (eax_2 == *(arg1 + 0x10))
                sub_4307a0(arg1 + 8)
            
            struct sealengine::CPOLMaterial::VTable*** eax_6 = *(arg1 + 0xc)
            
            if (eax_6 != 0)
                *eax_6 = eax
        else
            if (eax_2 == *(arg1 + 0x10))
                sub_4307a0(arg1 + 8)
            
            int32_t* eax_4 = *(arg1 + 0xc)
            
            if (eax_4 != 0)
                *eax_4 = *(*(arg1 + 8) + ((&arg2 - ecx_3) s>> 2 << 2))
        
        *(arg1 + 0xc) += 4
        eax_1 = var_4 + 1
        var_4 = eax_1
    while (eax_1 s< ebx_7)

eax_1.b = 1
return eax_1
