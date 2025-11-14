// 函数: sub_4beba0
// 地址: 0x4beba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i = *arg1

if (i == arg1[1])
    return 

int32_t esi_1 = 0x7fffffff
int32_t ebx_1 = 0x80000000

do
    sub_4be510(i, arg2)
    int32_t eax_2 = *(i + 0x108)
    
    if (esi_1 s> eax_2)
        esi_1 = eax_2
    
    if (ebx_1 s< eax_2)
        ebx_1 = eax_2
    
    int32_t eax_3 = *(i + 0x10c)
    
    if (esi_1 s> eax_3)
        esi_1 = eax_3
    
    if (ebx_1 s< eax_3)
        ebx_1 = eax_3
    
    int32_t eax = *(i + 0x110)
    
    if (esi_1 s> eax)
        esi_1 = eax
    
    if (ebx_1 s< eax)
        ebx_1 = eax
    
    i += 0x114
while (i != arg1[1])

arg1[0xd] = esi_1
arg1[0xe] = ebx_1 - esi_1 + 1
