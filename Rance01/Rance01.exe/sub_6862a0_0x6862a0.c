// 函数: sub_6862a0
// 地址: 0x6862a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x3c) == 0)
    return 

int32_t ebx_1 = arg2

for (int32_t* i = *(arg1 + 0xa4); i != *(arg1 + 0xa8); i = &i[1])
    (*(**i + 0x34))(*(arg1 + 0xb4), ebx_1)

void* ecx_1 = *(arg1 + 0x3c)
int32_t arg_4

if (*(ecx_1 + 0x38) - *(ecx_1 + 0x3c) s<= 0 || arg_4 != *(*(arg1 + 0x1c) + 8) || ebx_1 != 1)
    return 

char* eax_5 = data_797d44
arg2 = 0
arg_4 = 0

if (sub_424db0(eax_5) != 0)
    (***(eax_5 + 8))(&arg2, &arg_4)

int32_t* ecx_4 = *(arg1 + 0x3c)
int32_t edi_3 = ecx_4[0xc] + (*(*ecx_4 + 0x24))()
int32_t eax_13
int32_t edx_4
edx_4:eax_13 = sx.q(sub_687330(*(arg1 + 0x3c), arg1 - 4))
void* eax_16 = *(arg1 + 0x3c)
int32_t edx_5 = *(eax_16 + 0x34)
int32_t ebp_1 = *(eax_16 + 0x30)
int32_t edi_4 = *(eax_16 + 0x28)
int32_t var_c_1
var_c_1.q = fconvert.d(float.t(arg2 - ((eax_13 - edx_4) s>> 1) - edi_3))
int32_t eax_17
float ecx_8
eax_17, ecx_8 = sub_687330(eax_16, arg1 - 4)
float var_20_6 = ecx_8
float var_20_7 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c_1.q)
    / float.t(edi_4 - edx_5 - ebp_1 - eax_17))))
sub_6970c0(ecx_8, *(arg1 + 0x3c), arg1 - 4)
