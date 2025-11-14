// 函数: sub_6ccb80
// 地址: 0x6ccb80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = arg2 * 0x38
int32_t eax = operator new(ebx)
*(arg1 + 0x37e0) = eax

if (eax == 0)
    return 0xfffffffb

data_797c44(eax, ebx)

if (arg2 s<= 0)
    return 0

int32_t ebx_1 = 0
int32_t ebp_1 = 0

do
    *(ebx_1 + *(arg1 + 0x37e0) + 0x34) = operator new(0x60)
    
    if (*(ebx_1 + *(arg1 + 0x37e0) + 0x34) == 0)
        return 0xfffffffb
    
    ebx_1 += 0x38
    ebp_1 += 1
while (ebp_1 s< arg2)

return 0
