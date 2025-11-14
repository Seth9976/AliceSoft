// 函数: sub_5d1f00
// 地址: 0x5d1f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
void* i_2 = arg1

if (i_2 == 0)
    return 

int32_t eax = *ebp
int128_t* edi_1 = ebp[1]

if (eax - edi_1 - 1 u< i_2)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t* edx_3 = edi_1 - eax + i_2
int32_t ecx_5 = ebp[2] - eax

if (ecx_5 u< edx_3)
    uint32_t eax_2 = ecx_5 u>> 1
    int32_t* ecx_6
    
    if (0xffffffff - eax_2 u>= ecx_5)
        ecx_6 = ecx_5 + eax_2
        arg2 = ecx_6
    else
        arg2 = nullptr
        ecx_6 = nullptr
    
    if (ecx_6 u< edx_3)
        arg2 = edx_3
        ecx_6 = edx_3
    
    int128_t* eax_3 = sub_4015e0(ecx_6)
    int128_t* ecx_7 = arg3
    char* ebx_3 = ecx_7 - *ebp + eax_3
    void* i_1 = i_2
    char* eax_4 = ebx_3
    
    if (i_2 != 0)
        void* i
        
        do
            char* ecx_8
            ecx_8.b = *arg4
            *eax_4 = ecx_8.b
            eax_4 = &eax_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx_7 = arg3
    
    int128_t* eax_5 = *ebp
    sub_6b49d0(eax_3, eax_5, ecx_7 - eax_5)
    sub_6b49d0(ebx_3 + i_2, arg3, ebp[1] - arg3)
    int32_t eax_7 = *ebp
    void* esi = i_2 + ebp[1] - eax_7
    
    if (eax_7 != 0)
        int32_t var_14_2 = eax_7
        sub_6b4d5b()
    
    *ebp = eax_3
    ebp[2] = arg2 + eax_3
    ebp[1] = eax_3 + esi
    return 

void* ecx_13 = edi_1 - arg3

if (ecx_13 u>= i_2)
    ecx_13.b = *arg4
    void* eax_16 = edi_1 - i_2
    void* ebx_6 = edi_1 - eax_16
    arg4.b = ecx_13.b
    ebp[1] = sub_6b49d0(edi_1, eax_16, ebx_6) + ebx_6
    void* eax_21 = edi_1 - arg3 - i_2
    sub_6b49d0(edi_1 - eax_21, arg3, eax_21)
    arg1 = arg3
    
    if (arg1 != arg1 + i_2)
        do
            *arg1 = arg4.b
            arg1 += 1
        while (arg1 != arg3 + i_2)
else
    char* edx_8
    edx_8.b = *arg4
    arg4.b = edx_8.b
    sub_6b49d0(arg3 + i_2, arg3, ecx_13)
    int128_t* edx_9 = arg3
    int128_t* ecx_14 = ebp[1]
    char edi_4 = arg4.b
    void* eax_12 = edx_9 - ecx_14
    
    if (eax_12 != neg.d(i_2))
        sub_6bc670(ecx_14, edi_4, eax_12 + i_2)
        edx_9 = arg3
    
    ebp[1] += i_2
    void* ebp_2 = ebp[1] - i_2
    
    if (edx_9 != ebp_2)
        sub_6bc670(edx_9, edi_4, ebp_2 - edx_9)
