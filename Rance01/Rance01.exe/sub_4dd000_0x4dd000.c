// 函数: sub_4dd000
// 地址: 0x4dd000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = arg1

if (i s< 0)
    i = 0
else if (i u> 0x3fffffff)
    int32_t var_10 = 0
    struct std::exception::VTable* var_c
    std::exception::exception(&var_c, &var_10)
    var_c = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_c, 0x771508)
    noreturn

int32_t ecx = 0
int32_t eax_2
int32_t edx_2

for (; i s> 0; i = (eax_2 - edx_2) s>> 1)
    int32_t var_18_1 = 0x796ea0
    ecx = sub_6b53bd(i << 2)
    
    if (ecx != 0)
        break
    
    edx_2:eax_2 = sx.q(i)

arg2[1] = i
*arg2 = ecx
return arg2
