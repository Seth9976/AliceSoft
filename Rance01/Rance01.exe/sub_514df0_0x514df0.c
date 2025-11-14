// 函数: sub_514df0
// 地址: 0x514df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_68
int32_t eax_1 = data_78c474 ^ &var_68
void* eax_3
int32_t ecx_1
eax_3, ecx_1 = (*(**(arg1 + 0x270) + 0x14))()
void* edi = eax_3

if (edi == 0)
    eax_3.b = 0
    sub_6b4885(eax_1 ^ &var_68)
    return eax_3

int32_t eax_4 = *(arg1 + 0x278)
long double x87_r7 = float.t(0)
int32_t ebx = 0
int32_t var_64 = 0
var_68 = eax_4

if (eax_4 s> 0)
    float var_60 = fconvert.s(x87_r7)
    float var_5c_1 = fconvert.s(x87_r7)
    float var_58_1 = fconvert.s(float.t(1))
    int32_t eax_6
    
    do
        int32_t var_7c_1 = ecx_1
        float var_48 = 0f
        int32_t var_44
        __builtin_memset(&var_44, 0, 0x3c)
        var_68 = fconvert.s(float.t(var_64) * fconvert.t(360.0) / float.t(var_68))
        float var_54
        ecx_1 = sub_51e1c0(sub_660260(&var_48, fconvert.s(fconvert.t(var_68))), &var_54, &var_48, 
            &var_60)
        *edi = fconvert.s(fconvert.t(var_54))
        ebx += 1
        edi += 0xc
        float var_50
        *(edi - 8) = fconvert.s(fconvert.t(var_50))
        var_64 = ebx
        float var_4c
        *(edi - 4) = fconvert.s(fconvert.t(var_4c))
        eax_6 = *(arg1 + 0x278)
        var_68 = eax_6
    while (ebx s< eax_6)
    x87_r7 = float.t(0)

*edi = fconvert.s(x87_r7)
*(edi + 4) = fconvert.s(x87_r7)
*(edi + 8) = fconvert.s(x87_r7)
bool cond:0 = (*(**(arg1 + 0x270) + 0x18))() != 0
sub_6b4885(eax_1 ^ &var_68)
return cond:0
