// 函数: sub_580ce0
// 地址: 0x580ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = 0

if (arg1 != 0)
    if (arg1 u<= 0x28f5c28)
        result = operator new(arg1 * 0x64)
    
    if (arg1 u> 0x28f5c28 || result == 0)
        int32_t var_10 = 0
        struct std::exception::VTable* var_c
        std::exception::exception(&var_c, &var_10)
        var_c = &std::bad_alloc::`vftable'{for `std::exception'}
        sub_6b77db(&var_c, 0x771508)
        noreturn

return result
