// 函数: sub_5b4410
// 地址: 0x5b4410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg2

if (result == 0)
    return 0

if (result u> arg3)
    result = arg3

int32_t edx = *(arg4 + 0x3c)
int32_t eax_2 = *(arg4 + 0x38)
int128_t* ecx = *(arg4 + 0x34)

if (ecx + result u> eax_2 + edx)
    void* eax_3 = eax_2 - ecx
    result = eax_3 + edx
    
    if (eax_3 == neg.d(edx))
        return 0

sub_6c02a0(arg1, ecx, result)
*(arg4 + 0x34) += result
return result
