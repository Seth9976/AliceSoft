// 函数: sub_4013c0
// 地址: 0x4013c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1

if (arg2 u> 0xfffffffe)
    sub_6b47bf("string too long")
    noreturn

int32_t eax = esi[5]

if (eax u< arg2)
    int128_t* eax_2 = sub_401470(esi, arg2, esi[4])
    return neg.d(sbb.d(eax_2, eax_2, 0 u< arg2))

if (arg3 == 0 || arg2 u>= 0x10)
    if (arg2 == 0)
        esi[4] = arg2
        
        if (eax u>= 0x10)
            esi = *esi
        
        *esi = 0
    
    return neg.d(sbb.d(eax, eax, 0 u< arg2))

int128_t* edi = esi[4]

if (arg2 u< edi)
    edi = arg2

if (eax u>= 0x10)
    int128_t* ebx_1 = *esi
    
    if (edi != 0)
        sub_6c02a0(esi, ebx_1, edi)
    
    int128_t* var_14_3 = ebx_1
    eax = sub_6b4d5b()

esi[4] = edi
esi[5] = 0xf
*(edi + esi) = 0
return neg.d(sbb.d(eax, eax, 0 u< arg2))
