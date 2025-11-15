// 函数: ___acrt_is_packaged_app
// 地址: 0x10006df8
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t var_8 = arg1
int32_t var_c = arg1
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_10016fe8
int32_t result

if (ecx == 0)
    int32_t eax_2 = try_get_function(8, "GetCurrentPackageId", 0x100100d8, "GetCurrentPackageId")
    
    if (eax_2 != 0)
        var_c = 0
        result = eax_2(&var_c, 0)
    
    if (eax_2 == 0 || result != 0x7a)
        data_10016fe8
        data_10016fe8 = 2
        result.b = 0
    else
        data_10016fe8
        data_10016fe8 = 1
        result.b = 1
else
    result.b = ecx == 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
