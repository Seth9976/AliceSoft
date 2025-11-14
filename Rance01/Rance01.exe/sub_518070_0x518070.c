// 函数: sub_518070
// 地址: 0x518070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t ebx = 0

if (result s> 0)
    long double x87_r7_1 = float.t(0)
    float var_80 = fconvert.s(x87_r7_1)
    int32_t ebp_1 = 0
    float var_7c_1 = fconvert.s(x87_r7_1)
    float var_78_1 = fconvert.s(x87_r7_1)
    
    do
        struct sealengine::CDualQuaternion::VTable* var_68
        struct sealengine::CDualQuaternion::VTable** eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_4b5c50(ebx, edx_1, &var_68, arg1 + 4)
        float var_44[0x11]
        float* eax_5 = &var_44
        sub_4b9aa0(eax_5, edx_2, eax_4)
        float var_74
        sub_51e1c0(&var_80, &var_74, eax_5, &var_80)
        float* eax_6 = *(arg1 + 8) + ebp_1 + 0xa0
        *eax_6 = var_74
        int32_t var_70
        eax_6[1] = var_70
        int32_t var_6c
        eax_6[2] = var_6c
        int32_t eax_7
        int32_t edx_6
        edx_6:eax_7 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        edx_1 = edx_6 s>> 5
        ebx += 1
        result = (edx_1 u>> 0x1f) + edx_1
        ebp_1 += 0xac
    while (ebx s< result)

return result
