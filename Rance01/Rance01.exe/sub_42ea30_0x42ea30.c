// 函数: sub_42ea30
// 地址: 0x42ea30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg6
int32_t* edi = arg1

if (edi[6] == 0)
    return 

arg1 = edi[7]
int32_t ecx_1 = edi[8]

if (arg1 == ecx_1 || *ebp == ebp[1])
    return 

int32_t ebx_1 = edi[0xc]
int32_t ecx_3

if (ebx_1 != 3)
    ecx_3 = (ecx_1 - arg1) s>> 2

int32_t* esi_3

if (ebx_1 == 3 || ecx_3 == 1)
    esi_3 = *arg1
else
    int32_t temp0_1 = divs.dp.d(sx.q(arg2), edi[0xb])
    edi[0xb]
    arg2 = temp0_1
    
    if (ebx_1 == 0)
        arg6 = ecx_3 - 1
        int32_t* eax_4 = &arg6
        
        if (ecx_3 - 1 s>= temp0_1)
            eax_4 = &arg2
        
        int32_t esi_2 = *eax_4
        sub_42f3e0(edi)
        esi_3 = *(edi[7] + (esi_2 << 2))
    else if (ebx_1 == 1 || ecx_3 == 2)
        sub_42f3e0(edi)
        esi_3 = *(edi[7] + (mods.dp.d(sx.q(temp0_1), ecx_3) << 2))
    else if (ebx_1 != 2)
        sub_42f3e0(edi)
        esi_3 = *(edi[7] + (temp0_1 << 2))
    else
        int32_t ebx_2 = ecx_3 * 2
        arg6 = ebx_2 - 2
        int32_t esi_1 = mods.dp.d(sx.q(temp0_1), arg6)
        
        if (ecx_3 s> esi_1)
            sub_42f3e0(edi)
            esi_3 = *(edi[7] + (esi_1 << 2))
        else
            sub_42f3e0(edi)
            esi_3 = *(edi[7] + ((ebx_2 - esi_1 - 2) << 2))

if (esi_3[1] != 0)
    int32_t eax_14 = *esi_3
    
    if (eax_14 != 0xffffffff)
        sub_409760(eax_14, 1)

sub_42eb30(esi_3, edi, arg3, arg4, arg5, ebp)
