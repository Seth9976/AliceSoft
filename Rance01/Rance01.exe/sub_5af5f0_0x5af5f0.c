// 函数: sub_5af5f0
// 地址: 0x5af5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg1
int32_t edi = *(result + 4)
int32_t edx_2 = (zx.d(*(result + 0xb)) + 7) s>> 3
char* ecx = edx_2 + arg2

if (edx_2 u< edi)
    result = ecx - arg2
    char* esi_1 = arg2 - edx_2
    
    do
        edx_2.b = *(esi_1 + result)
        *ecx += edx_2.b
        result += 1
        ecx = &ecx[1]
    while (result u< edi)

return result
