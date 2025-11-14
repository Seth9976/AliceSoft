// 函数: sub_4cfb60
// 地址: 0x4cfb60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_7 = arg2[1]
int32_t edx = *arg2
int32_t eax_2 = (ecx_7 - edx) s>> 5
int32_t var_4

if (eax_2 u> arg1)
    sub_4cfc90(arg2, &var_4, (arg1 << 5) + edx, ecx_7)
    return 

if (eax_2 u>= arg1)
    return 

sub_4cfd00(arg2, arg1 - eax_2)
struct sealengine::CSQT::VTable** eax_3 = arg2[1]
int32_t var_10_2 = var_4
int32_t edx_5 = (eax_3 - *arg2) s>> 5
sub_4d0030(eax_3, edx_5, arg1 - edx_5)
int32_t eax_4 = arg2[1]
arg2[1] = ((arg1 - ((eax_4 - *arg2) s>> 5)) << 5) + eax_4
