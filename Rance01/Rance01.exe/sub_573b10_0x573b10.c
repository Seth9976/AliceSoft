// 函数: sub_573b10
// 地址: 0x573b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax = *(arg1 + 0x40)
int32_t eax_1 = eax * arg4
int32_t* edx_1 = eax * arg3
int32_t ecx_5 = (((arg2 + 7) s>> 3) + 3) & 0xfffffffc

if (arg5[1] - *arg5 != eax_1 * ecx_5)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

void* esi = (*(*(arg1 + 8) + 8))(0, eax_1 - 1)
int128_t* eax_7 = (*(*(arg1 + 8) + 0x1c))()
int32_t ebp_1 = *arg5
int32_t ecx_12 = neg.d(eax_7 + edx_1)
arg3 = ecx_12

if (eax_1 s> 0)
    arg4 = eax_1
    int32_t i
    
    do
        eax_7 = nullptr
        
        if (arg2 s> 0)
            do
                char ecx_13 = 7 - (eax_7.b & 7)
                uint32_t edx_10 = zx.d(*((eax_7 s>> 3) + ebp_1))
                eax_7 += 1
                esi += 1
                *(esi - 1) = neg.b(((edx_10 & 1 << ecx_13) s>> ecx_13).b)
            while (eax_7 s< arg2)
            
            ecx_12 = arg3
        
        if (eax_7 s< edx_1)
            void* edi_3 = edx_1 - eax_7
            sub_6bc670(esi, 0, edi_3)
            ecx_12 = arg3
            esi += edi_3
        
        ebp_1 += ecx_5
        esi += ecx_12
        i = arg4
        arg4 -= 1
    while (i != 1)

eax_7.b = 1
return eax_7
