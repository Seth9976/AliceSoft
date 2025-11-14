// 函数: sub_5b4cd0
// 地址: 0x5b4cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_1 = arg1 + arg3[1]
int32_t eax = arg3[4]
int32_t edi = *arg3

if (edi s> eax - ((esi_1 + 7) s>> 3))
    arg3[3] = 0
    arg3[1] = 1
    *arg3 = eax
    return eax

int32_t eax_2
int32_t edx_2
edx_2:eax_2 = sx.q(esi_1)
int32_t eax_4 = (eax_2 + (edx_2 & 7)) s>> 3
arg3[3] += eax_4
int32_t eax_5 = eax_4 + edi
arg3[1] = esi_1 & 7
*arg3 = eax_5
return eax_5
