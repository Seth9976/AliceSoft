// 函数: sub_513f30
// 地址: 0x513f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 8) = 0
int32_t* eax = operator new(0x30)

if (eax == 0)
    int32_t var_10 = 0
    struct std::exception::VTable* var_c
    std::exception::exception(&var_c, &var_10)
    var_c = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_c, 0x771508)
    noreturn

*(arg1 + 4) = eax
*eax = eax
void* eax_1 = *(arg1 + 4)
*(eax_1 + 4) = eax_1
void* eax_2 = *(arg1 + 4)
*(eax_2 + 8) = eax_2
*(*(arg1 + 4) + 0x2c) = 1
*(*(arg1 + 4) + 0x2d) = 1
return arg1
