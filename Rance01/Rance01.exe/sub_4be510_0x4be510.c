// 函数: sub_4be510
// 地址: 0x4be510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
void* ebp = arg2
arg2 = &ebx[0x42]
arg1 = 3
int32_t* eax_10
int32_t* i

do
    void** eax_1 = *(ebp + 0x14)
    void** esi_1 = eax_1[1]
    void** edi_1 = eax_1
    int32_t edx
    
    while (*(esi_1 + 0x69) == 0)
        char eax_3
        eax_3, edx = sub_51c740(ebx, edx, &esi_1[3])
        
        if (eax_3 == 0)
            edi_1 = esi_1
            esi_1 = *esi_1
        else
            esi_1 = esi_1[2]
    
    void** esi_2 = *(ebp + 0x14)
    void** var_8 = edi_1
    char eax_5
    
    if (edi_1 != esi_2)
        eax_5, edx = sub_51c740(&edi_1[3], edx, ebx)
    
    void*** eax_6
    
    if (edi_1 == esi_2 || eax_5 != 0)
        void** var_4 = esi_2
        eax_6 = &var_4
    else
        eax_6 = &var_8
    
    void** eax_7 = *eax_6
    int32_t esi_3
    
    if (eax_7 == esi_2)
        int32_t eax_8
        int32_t edx_1
        edx_1:eax_8 = muls.dp.d(0x2e8ba2e9, *(ebp + 4) - *ebp)
        int32_t edx_2 = edx_1 s>> 4
        esi_3 = (edx_2 u>> 0x1f) + edx_2
        sub_51ceb0(ebx, ebp)
        int32_t* var_1c_1 = ebx
        int32_t* eax_9
        eax_9, edx = sub_51cf50(ebp + 0x10)
        *eax_9 = esi_3
    else
        esi_3 = eax_7[0x19]
    
    eax_10 = arg2
    *eax_10 = esi_3
    ebx = &ebx[0x16]
    i = arg1
    arg1 -= 1
    arg2 = &eax_10[1]
while (i != 1)
return &eax_10[1]
