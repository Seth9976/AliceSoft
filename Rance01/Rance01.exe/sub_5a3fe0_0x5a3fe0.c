// 函数: sub_5a3fe0
// 地址: 0x5a3fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebx = arg3
int32_t edi = arg1

if ((*(arg2 + 0x100) & 0x20000000) != 0)
    if ((*(arg2 + 0x70) & 0x300) == 0x300)
        return 
    
    goto label_5a4015

if ((*(arg2 + 0x70) & 0x800) != 0)
    return 

label_5a4015:

if (edi == 0)
    return 

arg1 = *(arg2 + 0x124)
int32_t esi_1
int32_t temp0_1

do
    esi_1 = edi
    
    if (edi == 0)
        esi_1 = 0xffffffff
    
    int32_t edx
    
    if (ebx != 0)
        arg1, edx = sub_59e5d0(arg1, edx, ebx, esi_1)
    else
        arg1 = 0
    ebx = &ebx[esi_1]
    temp0_1 = edi
    edi -= esi_1
while (temp0_1 != esi_1)
*(arg2 + 0x124) = arg1
