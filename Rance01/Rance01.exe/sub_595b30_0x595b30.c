// 函数: sub_595b30
// 地址: 0x595b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
float ebp = arg3

if ((*(*ebx + 8))() s< ebp)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t* edi = arg2

if ((*(*edi + 8))() s< ebp)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

long double x87_r7 = float.t(0)
int32_t esi = 0
arg3 = fconvert.s(x87_r7)
float var_8 = fconvert.s(x87_r7)

if (ebp s> 0)
    while (true)
        int32_t* ebx_1 = (*(*ebx + 0x10))(esi)
        int32_t* eax_7
        int32_t ecx_5
        int32_t edx_5
        
        if (ebx_1 != 0)
            eax_7, edx_5, ecx_5 = (*(*edi + 0x10))(esi)
        
        if (ebx_1 == 0 || eax_7 == 0)
            eax_7.b = 0
            return eax_7
        
        int32_t var_1c_3 = ecx_5
        float var_4_1 =
            fconvert.s(sub_595a20(eax_7, edx_5, ebp - 1, esi, fconvert.s(fconvert.t(arg4))))
        esi += 1
        long double x87_r6_1 = fconvert.t(var_4_1)
        arg3 = fconvert.s(float.t(*ebx_1) * x87_r6_1 + fconvert.t(arg3))
        var_8 = fconvert.s(x87_r6_1 * float.t(*eax_7) + fconvert.t(var_8))
        
        if (esi s>= ebp)
            break
        
        ebx = arg1
        edi = arg2

*arg5 = sub_70c710(fconvert.t(arg3))
*arg6 = sub_70c710(fconvert.t(var_8))
int32_t eax_5
eax_5.b = 1
return eax_5
