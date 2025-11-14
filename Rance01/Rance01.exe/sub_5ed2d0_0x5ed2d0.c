// 函数: sub_5ed2d0
// 地址: 0x5ed2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3 = (arg5 - arg3) s/ 0x6c

if (eax_3 s<= 0x28)
    return sub_5ed7b0(arg4, arg3, arg5)

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_4 & 7)) s>> 3
void* esi_1 = eax_7 * 0x6c
float* edi = esi_1 + arg3
sub_5ed7b0(edi, arg3, &arg3[eax_7 * 0x36])
sub_5ed7b0(arg4, arg4 - esi_1, esi_1 + arg4)
void* edi_3 = arg5 - esi_1
sub_5ed7b0(edi_3, arg5 - eax_7 * 0xd8, arg5)
return sub_5ed7b0(arg4, edi, edi_3)
