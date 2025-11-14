// 函数: sub_4beeb0
// 地址: 0x4beeb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (arg1 != ebp)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x76b981db, ebp[1] - *ebp)
    void* ecx_3 = *arg1
    int32_t edx_2 = edx_1 s>> 7
    uint32_t edi_2 = edx_2 u>> 0x1f
    int32_t edi_3 = edi_2 + edx_2
    
    if (edi_2 == neg.d(edx_2))
        sub_4bf000(arg1, &arg2, ecx_3, arg1[1])
        return arg1
    
    int32_t eax_4
    int32_t edx_5
    edx_5:eax_4 = muls.dp.d(0x76b981db, arg1[1] - ecx_3)
    int32_t edx_6 = edx_5 s>> 7
    int32_t ebx_3 = (edx_6 u>> 0x1f) + edx_6
    
    if (edi_3 u<= ebx_3)
        int32_t* edx_7 = arg2
        int32_t* var_10_2 = edx_7
        sub_4bf0c0(sub_4bf1b0(*ebp, edx_7, ecx_3, ebp[1]), arg1[1])
        int32_t eax_8
        int32_t edx_8
        edx_8:eax_8 = muls.dp.d(0x76b981db, ebp[1] - *ebp)
        int32_t edx_9 = edx_8 s>> 7
        arg1[1] = ((edx_9 u>> 0x1f) + edx_9) * 0x114 + *arg1
        return arg1
    
    int32_t eax_15
    int32_t edx_12
    edx_12:eax_15 = muls.dp.d(0x76b981db, arg1[2] - ecx_3)
    int32_t edx_13 = edx_12 s>> 7
    
    if (edi_3 u<= (edx_13 u>> 0x1f) + edx_13)
        void* eax_19 = *ebp
        int32_t* edx_14 = arg2
        void* ebx_5 = ebx_3 * 0x114 + eax_19
        int32_t* var_10_3 = edx_14
        int32_t edx_15 = sub_4bf1b0(eax_19, edx_14, ecx_3, ebx_5)
        void* eax_20 = arg1[1]
        int32_t* var_18_2 = arg2
        arg1[1] = sub_4cf5a0(eax_20, edx_15, ebx_5, ebp[1], eax_20)
        return arg1
    
    if (ecx_3 != 0)
        sub_4bf0c0(ecx_3, arg1[1])
        int32_t var_10_4 = *arg1
        sub_6b4d5b()
    
    int32_t eax_24
    int32_t edx_17
    edx_17:eax_24 = muls.dp.d(0x76b981db, ebp[1] - *ebp)
    int32_t edx_18 = edx_17 s>> 7
    
    if (sub_4bf070((edx_18 u>> 0x1f) + edx_18, arg1) != 0)
        void* eax_29 = *arg1
        int32_t edx_19 = ebp[1]
        int32_t* var_10_5 = arg2
        arg1[1] = sub_4cf5a0(eax_29, edx_19, *ebp, edx_19, eax_29)

return arg1
