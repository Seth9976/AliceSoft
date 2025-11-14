// 函数: sub_4b7920
// 地址: 0x4b7920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg1

for (int32_t* i = arg2[7]; i != arg2[8]; i = &i[1])
    int32_t* edx_1 = *i
    
    if (*edx_1 == arg1)
        long double x87_r7 = float.t((*(**edx_1 + 0x10))())
        int32_t* eax_5 = *i
        *arg3 = fconvert.s(x87_r7 / float.t(*arg2))
        int32_t* ecx_3 = *eax_5
        *arg4 = fconvert.s(float.t(edx_1[1]) / float.t(*arg2))
        float* eax_7
        eax_7.b = 1
        *arg5 = fconvert.s(float.t((*(*ecx_3 + 0x14))()) / float.t(arg2[1]))
        *arg6 = fconvert.s(float.t(edx_1[2]) / float.t(arg2[1]))
        return eax_7

int32_t eax
eax.b = 0
return eax
