// 函数: sub_696a30
// 地址: 0x696a30
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
arg_4 = 0
arg2 = 0

if (sub_424db0(eax_5) != 0)
    (***(eax_5 + 8))(&arg_4, &arg2)

int32_t* ecx_4 = *(arg1 + 0x3c)
int32_t edi_2 = ecx_4[0xc]
int32_t eax_10 = (*(*ecx_4 + 0x28))()
int32_t eax_12
int32_t edx_5
edx_5:eax_12 = sx.q(sub_697810(*(arg1 + 0x3c), arg1 - 4))
void* ecx_9 = *(arg1 + 0x3c)
int32_t edx_6 = *(ecx_9 + 0x34)
int32_t edi_4 = *(ecx_9 + 0x2c)
int32_t ebp_1 = *(ecx_9 + 0x30)
int32_t var_c_1
var_c_1.q = fconvert.d(float.t(arg2 - ((eax_12 - edx_5) s>> 1) - (edi_2 + eax_10)))
int32_t eax_15
float ecx_10
eax_15, ecx_10 = sub_697810(ecx_9, arg1 - 4)
float var_20_4 = ecx_10
float var_20_5 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c_1.q)
    / float.t(edi_4 - edx_6 - ebp_1 - eax_15))))
sub_6970c0(ecx_10, *(arg1 + 0x3c), arg1 - 4)
