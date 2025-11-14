// 函数: sub_552550
// 地址: 0x552550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] == arg1[2])
    int32_t* eax_1
    int32_t ecx
    eax_1, ecx = operator new(0x5c)
    
    if (eax_1 == 0)
        return 0
    
    return sub_54f770(ecx, 4, *arg1, eax_1)

int32_t ecx_1 = arg1[2]
void* result = *(arg1[2] - 4)

if (arg1[1] != ecx_1)
    arg1[2] = ecx_1 - 4

void* ecx_3 = *(result + 0x14)
*(result + 4) = 0
*(result + 0xc) = 4
*(result + 0x10) = 1

if (*(ecx_3 + 0x1c) s>= 0x989680)
    *(ecx_3 + 0x1c) = 1

int32_t edx = *(ecx_3 + 0x1c)
*(ecx_3 + 0x1c) = edx + 1
*(result + 0x24) = 0
*(result + 0x2c) = 0
*(result + 0x40) = 0
*(result + 0x18) = edx
*(result + 0x1c) = 0xffffffff
*(result + 0x30) = 0xffffffff
*(result + 0x34) = 0xffffffff
*(result + 0x38) = 0xffffffff
*(result + 0x3c) = 0xffffffff
*(result + 0x44) = 0xffffffff
return result
