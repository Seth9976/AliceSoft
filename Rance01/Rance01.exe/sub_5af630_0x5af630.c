// 函数: sub_5af630
// 地址: 0x5af630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 4)
char* result = arg2
char* ecx = nullptr

if (esi != 0)
    do
        *result += ecx[arg3]
        ecx = &ecx[1]
        result = &result[1]
    while (ecx u< esi)

return result
