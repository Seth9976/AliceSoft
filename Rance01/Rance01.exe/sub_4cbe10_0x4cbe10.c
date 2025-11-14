// 函数: sub_4cbe10
// 地址: 0x4cbe10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2

if (arg1 == 0)
    return 

int32_t ecx_1 = *ebx
int128_t* edi_1 = ebx[1]
int32_t eax_2 = (edi_1 - ecx_1) s>> 2

if (0x3fffffff - eax_2 u< arg1)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t edx_2 = eax_2 + arg1
int32_t eax_5 = (ebx[2] - ecx_1) s>> 2

if (eax_5 u< edx_2)
    uint32_t ecx_3 = eax_5 u>> 1
    int32_t eax_6
    
    if (0x3fffffff - ecx_3 u>= eax_5)
        eax_6 = eax_5 + ecx_3
        arg2 = eax_6
    else
        arg2 = 0
        eax_6 = 0
    
    if (eax_6 u< edx_2)
        arg2 = edx_2
        eax_6 = edx_2
    
    int128_t* eax_7 = sub_65a1c0(eax_6)
    int128_t* eax_8 = arg3
    int32_t i_2 = arg1
    int32_t edi_5 = (eax_8 - *ebx) s>> 2
    void* edx_3 = eax_7 + (edi_5 << 2)
    
    if (arg1 != 0)
        int32_t i
        
        do
            edx_3 += 4
            i = i_2
            i_2 -= 1
            *(edx_3 - 4) = fconvert.s(fconvert.t(*arg4))
        while (i != 1)
        eax_8 = arg3
    
    int128_t* ecx_5 = *ebx
    sub_6b49d0(eax_7, ecx_5, ((eax_8 - ecx_5) s>> 2) * 4)
    sub_6b49d0(eax_7 + ((edi_5 + arg1) << 2), arg3, ((ebx[1] - arg3) s>> 2) * 4)
    int32_t eax_15 = *ebx
    int32_t esi_1 = arg1 + ((ebx[1] - eax_15) s>> 2)
    
    if (eax_15 != 0)
        int32_t var_14_2 = eax_15
        sub_6b4d5b()
    
    *ebx = eax_7
    ebx[2] = eax_7 + (arg2 << 2)
    ebx[1] = eax_7 + (esi_1 << 2)
    return 

int32_t eax_19 = (edi_1 - arg3) s>> 2
int32_t ebp_2 = arg1 << 2

if (eax_19 u>= arg1)
    void* esi_4 = edi_1 - ebp_2
    arg2 = fconvert.s(fconvert.t(*arg4))
    int32_t eax_29 = ((edi_1 - esi_4) s>> 2) * 4
    ebx[1] = sub_6b49d0(edi_1, esi_4, eax_29) + eax_29
    void* eax_32 = (esi_4 - arg3) s>> 2 << 2
    sub_6b49d0(edi_1 - eax_32, arg3, eax_32)
    float* i_1 = arg3
    
    if (i_1 != &i_1[arg1])
        do
            *i_1 = fconvert.s(fconvert.t(arg2))
            i_1 = &i_1[1]
        while (i_1 != arg3 + ebp_2)
else
    arg4 = fconvert.s(fconvert.t(*arg4))
    sub_6b49d0(arg3 + ebp_2, arg3, eax_19 * 4)
    int32_t edi_7 = ebx[1]
    int128_t* eax_22 = arg3
    int32_t edx_9 = (edi_7 - eax_22) s>> 2
    
    if (arg1 != edx_9)
        int32_t ecx_18
        int32_t edi_8
        edi_8, ecx_18 = __memfill_u32(edi_7, arg4, arg1 - edx_9)
        eax_22 = arg3
    
    ebx[1] += ebp_2
    int32_t ebx_2 = ebx[1] - ebp_2
    
    if (eax_22 != ebx_2)
        do
            *eax_22 = fconvert.s(fconvert.t(arg4))
            eax_22 += 4
        while (eax_22 != ebx_2)
