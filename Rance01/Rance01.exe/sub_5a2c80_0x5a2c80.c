// 函数: sub_5a2c80
// 地址: 0x5a2c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t edi = zx.d(*(arg1 + 2))
int32_t edx = 0
int32_t ecx = 7
int32_t esi = 4

if (edi == 0)
    ecx = 0x8a
    esi = 3

*(arg1 + (arg3 << 2) + 6) = 0xffff

if (arg3 s< 0)
    return 

void* const ebp_1 = 0xffffffff
void* i_1 = arg3 + 1
arg3 = arg1 + 6
void* i

do
    arg1 = edi
    edi = zx.d(*arg3)
    edx += 1
    
    if (edx s>= ecx || arg1 != edi)
        if (edx s< esi)
            *(arg2 + (arg1 << 2) + 0xa7c) += edx.w
        else if (arg1 != 0)
            if (arg1 != ebp_1)
                *(arg2 + (arg1 << 2) + 0xa7c) += 1
            
            *(arg2 + 0xabc) += 1
        else if (edx s> 0xa)
            *(arg2 + 0xac4) += 1
        else
            *(arg2 + 0xac0) += 1
        
        edx = 0
        ebp_1 = arg1
        
        if (edi == 0)
            ecx = 0x8a
            esi = 3
        else if (arg1 != edi)
            ecx = 7
            esi = 4
        else
            ecx = 6
            esi = 3
    
    arg3 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
