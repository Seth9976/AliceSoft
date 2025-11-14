// 函数: sub_5b9820
// 地址: 0x5b9820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
int32_t edx = 0

if (edi == 0)
    return 

void* ecx_1 = *edi
int32_t esi_1 = edi[1]
int32_t eax = 0
*(ecx_1 + 0x16) = 0
*(ecx_1 + 0x18) = 0

if (esi_1 s> 0)
    do
        eax = eax << 8 ^ *(((zx.d(*(ecx_1 + edx)) ^ eax u>> 0x18) << 2) + &data_7455c8)
        edx += 1
    while (edx s< esi_1)
    
    edx = 0

int32_t esi_2 = edi[3]

if (esi_2 s> 0)
    do
        eax = eax << 8 ^ *(((zx.d(*(edi[2] + edx)) ^ eax u>> 0x18) << 2) + &data_7455c8)
        edx += 1
    while (edx s< esi_2)

*(ecx_1 + 0x16) = eax.b
*(ecx_1 + 0x17) = (eax u>> 8).b
*(ecx_1 + 0x18) = (eax u>> 0x10).b
*(ecx_1 + 0x19) = (eax u>> 0x18).b
