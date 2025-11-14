// 函数: sub_5b9430
// 地址: 0x5b9430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (*(arg1 + 0x1c) << 2)))
void* ebp = *(arg2 + 0x510)
int32_t* eax_4 = arg3
int32_t edi = 0
int32_t ebx_1 = (eax_2 - edx_1) s>> 1

if (eax_4 == 0)
    sub_6bc670(arg4, 0, ebx_1 << 2)
    return 0

int32_t ecx_3 = *(ebp + 0x340) * *eax_4
int32_t var_8 = 0

if (ecx_3 s< 0)
    ecx_3 = 0
else if (ecx_3 s> 0xff)
    ecx_3 = 0xff

int32_t var_4 = 1

if (*(arg2 + 0x504) s> 1)
    arg1 = arg2 + 0x108
    
    while (true)
        int32_t edx_3 = *arg1
        int32_t esi_2 = eax_4[edx_3]
        int32_t eax_6 = esi_2 & 0x7fff
        
        if (eax_6 == esi_2)
            edi = *(ebp + (edx_3 << 2) + 0x344)
            int32_t esi_4 = *(ebp + 0x340) * eax_6
            
            if (esi_4 s< 0)
                esi_4 = 0
            else if (esi_4 s> 0xff)
                esi_4 = 0xff
            
            sub_5b7ad0(arg4, edx_3, esi_4, ebx_1, var_8, edi, ecx_3, arg4)
            var_8 = edi
            ecx_3 = esi_4
        
        arg1 += 4
        int32_t eax_9 = var_4 + 1
        var_4 = eax_9
        
        if (eax_9 s>= *(arg2 + 0x504))
            break
        
        eax_4 = arg3

int32_t esi_5 = edi

if (edi s< ebx_1)
    if (ebx_1 - edi s>= 4)
        int32_t i_1 = ((ebx_1 - edi - 4) u>> 2) + 1
        void* eax_12 = arg4 + (edi << 2) + 8
        esi_5 = edi + (i_1 << 2)
        int32_t i
        
        do
            eax_12 += 0x10
            i = i_1
            i_1 -= 1
            *(eax_12 - 0x18) = fconvert.s(fconvert.t(*((ecx_3 << 2) + &data_7459c8))
                * fconvert.t(*(eax_12 - 0x18)))
            *(eax_12 - 0x14) = fconvert.s(fconvert.t(*((ecx_3 << 2) + &data_7459c8))
                * fconvert.t(*(eax_12 - 0x14)))
            *(eax_12 - 0x10) = fconvert.s(fconvert.t(*((ecx_3 << 2) + &data_7459c8))
                * fconvert.t(*(eax_12 - 0x10)))
            *(eax_12 - 0xc) =
                fconvert.s(fconvert.t(*(eax_12 - 0xc)) * fconvert.t(*((ecx_3 << 2) + &data_7459c8)))
        while (i != 1)
    
    while (esi_5 s< ebx_1)
        esi_5 += 1
        *(arg4 + (esi_5 << 2) - 4) = fconvert.s(fconvert.t(*((ecx_3 << 2) + &data_7459c8))
            * fconvert.t(*(arg4 + (esi_5 << 2) - 4)))

return 1
