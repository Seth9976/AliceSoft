// 函数: ___acrt_InitializeCriticalSectionEx@12
// 地址: 0x10006c8c
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(0x14, "InitializeCriticalSectionEx", 0x100100f4, 0x100100fc)
BOOL result

if (eax_2 == 0)
    result = InitializeCriticalSectionAndSpinCount(arg1, arg2)
else
    result = eax_2(arg1, arg2, arg3)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
