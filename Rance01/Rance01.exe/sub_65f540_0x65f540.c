// 函数: sub_65f540
// 地址: 0x65f540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx

if (arg3[5] u< 0x10)
    ecx = arg3
else
    ecx = *arg3

int32_t eax = *(arg1 + 0x760)
sub_6b5353(eax + arg1 + 0x35d, 0x400 - eax, ecx)
*(arg1 + 0x760) += arg3[4] + 1
int32_t eax_3 = *(arg1 + 0x760)
char* ecx_2

if (arg2[5] u< 0x10)
    ecx_2 = arg2
else
    ecx_2 = *arg2

sub_6b5353(eax_3 + arg1 + 0x35d, 0x400 - eax_3, ecx_2)
*(arg1 + 0x760) = &arg2[4][1 + *(arg1 + 0x760)]
int32_t result
result.b = 1
return result
