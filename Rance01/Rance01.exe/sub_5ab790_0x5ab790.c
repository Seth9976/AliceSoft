// 函数: sub_5ab790
// 地址: 0x5ab790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t edi = 1

if ((*(arg2 + 0x100) & 0x20000000) == 0)
    if ((*(arg2 + 0x70) & 0x800) != 0)
        edi = 0
else if ((*(arg2 + 0x70) & 0x300) == 0x300)
    edi = 0

int32_t eax_3 = *(arg2 + 0x54)
*(arg2 + 0x2ac) = 0x81

if (eax_3 == 0)
    sub_5a5c60(arg2, "Call to NULL read function")
    noreturn

eax_3(arg2, &var_4, 4)

if (edi == 0)
    return 0

int16_t eax_4 = var_4.w
int32_t result
result.b =
    (((((zx.d(eax_4.b) << 8) + zx.d(eax_4:1.b)) << 8) + zx.d(var_4:2.b)) << 8) + zx.d(var_4:3.b)
    != *(arg2 + 0x124)
return result
