// 函数: sub_5d2b70
// 地址: 0x5d2b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1

if ((*(*arg1 + 0x48))() != 0)
    (*(*arg1 + 0x4c))()

arg1[0x15] = arg2
long double x87_r7

if (arg3 s> 0)
    x87_r7 = float.t(arg3) / fconvert.t(100.0)
else
    x87_r7 = float.t(0)

*(arg1 + 0x60) = fconvert.d(x87_r7)
arg1[0x14].b = arg4

if (arg2 s> 0)
    int32_t eax_5 = arg1[0x28]
    int64_t var_88
    
    if (eax_5 != 0)
        var_88:4.d = eax_5
        ResetEvent()
    
    var_88:4.d = arg1
    var_88.d = sub_5d3240
    return sub_576230(&arg1[0x27], sub_5d3240) != 0

long double x87_r7_2 = fconvert.t(*(arg1 + 0x60))
*(arg1 + 0x58) = fconvert.d(x87_r7_2)
int32_t result
int80_t st0
st0, result = sub_5d3970(arg1, fconvert.d(x87_r7_2))

if (arg1[0x14].b != 0)
    (*(*arg1 + 0x18))()

result.b = 1
return result
