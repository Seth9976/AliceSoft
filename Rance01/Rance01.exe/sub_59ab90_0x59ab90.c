// 函数: sub_59ab90
// 地址: 0x59ab90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg2
*arg2 = eax + 1
int32_t ebx = *(*arg3 + (eax << 2))
sub_65a090(arg1, ebx)
int32_t result = 0

if (ebx s> 0)
    do
        int32_t ecx_2 = *arg2
        *arg2 = ecx_2 + 1
        *(*arg1 + (result << 2)) = *(*arg3 + (ecx_2 << 2))
        result += 1
    while (result s< ebx)

result.b = 1
return result
