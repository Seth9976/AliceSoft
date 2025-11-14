// 函数: sub_6860b0
// 地址: 0x6860b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_4_2 = arg1
void* ecx = *(arg1 i+ 0x3c)

if (ecx == 0 || *(ecx + 0x38) - *(ecx + 0x3c) s<= 0)
    return 

var_4_2 =
    fconvert.s(float.t(*(ecx + 0x28) - *(ecx + 0x34) - *(ecx + 0x30) - sub_687330(ecx, arg1 - 4)))

if (arg2 != *(*(arg1 i+ 0x18) + 8))
    return 

int32_t* ecx_2 = *(arg1 i+ 0x3c)
int32_t edi_6 = arg3 - *(arg1 i+ 0x38)
int32_t ebp_2 = ecx_2[0xc]
int32_t eax_7
float ecx_3
eax_7, ecx_3 = (*(*ecx_2 + 0x24))()
float var_18_2 = ecx_3
float var_18_3 =
    fconvert.s(fconvert.t(fconvert.s(float.t(edi_6 - ebp_2 - eax_7) / fconvert.t(var_4_2))))
sub_6970c0(ecx_3, *(arg1 i+ 0x3c), arg1 - 4)
(*(**(arg1 i+ 0x3c) + 0x1c))(1)
