// 函数: sub_5b44e0
// 地址: 0x5b44e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = *arg1
void** ecx = *edx
int32_t result = 0

while (ecx != edx)
    int32_t esi_2 = ecx[3] - ecx[2]
    ecx = *ecx
    result += esi_2

return result
