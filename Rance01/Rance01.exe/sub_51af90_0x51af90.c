// 函数: sub_51af90
// 地址: 0x51af90
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
    
    int128_t* eax_7
    int32_t ecx_5
    eax_7, ecx_5 = sub_65a1c0(eax_6)
    int32_t ebp_3 = (arg3 - *ebx) s>> 2
    sub_41ea30(ecx_5, arg4, arg1, eax_7 + (ebp_3 << 2))
    int128_t* eax_8 = *ebx
    sub_6b49d0(eax_7, eax_8, ((arg3 - eax_8) s>> 2) * 4)
    sub_6b49d0(eax_7 + ((ebp_3 + arg1) << 2), arg3, ((ebx[1] - arg3) s>> 2) * 4)
    int32_t eax_11 = *ebx
    void* esi_1 = arg1 + ((ebx[1] - eax_11) s>> 2)
    
    if (eax_11 != 0)
        int32_t var_18_2 = eax_11
        sub_6b4d5b()
    
    *ebx = eax_7
    ebx[2] = eax_7 + (arg2 << 2)
    ebx[1] = eax_7 + (esi_1 << 2)
    return 

int32_t* edx_10 = arg4
int32_t eax_15 = (edi_1 - arg3) s>> 2
int32_t ebp_5 = arg1 << 2

if (eax_15 u>= arg1)
    int32_t eax_18 = *edx_10
    void* esi_4 = edi_1 - ebp_5
    int32_t eax_23 = ((edi_1 - esi_4) s>> 2) * 4
    arg4 = eax_23
    ebx[1] = sub_6b49d0(edi_1, esi_4, eax_23) + arg4
    int32_t eax_26 = (esi_4 - arg3) s>> 2 << 2
    sub_6b49d0(edi_1 - eax_26, arg3, eax_26)
    arg1 = arg3
    
    if (arg1 != arg1 + ebp_5)
        do
            *arg1 = eax_18
            arg1 += 4
        while (arg1 != arg3 + ebp_5)
else
    arg4 = *edx_10
    int32_t ecx_18 = sub_6b49d0(arg3 + ebp_5, arg3, eax_15 * 4)
    int32_t* edi_5 = ebx[1]
    sub_41ea30(ecx_18, &arg4, arg1 - ((edi_5 - arg3) s>> 2), edi_5)
    ebx[1] += ebp_5
    arg1 = arg3
    int32_t ebx_2 = ebx[1] - ebp_5
    
    if (arg1 != ebx_2)
        do
            *arg1 = arg4
            arg1 += 4
        while (arg1 != ebx_2)
