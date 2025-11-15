// 函数: _memcpy_s
// 地址: 0x10007b7a
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg4 == 0)
    return 0

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t edi
int32_t var_c_1 = edi
int32_t result

if (arg3 == 0 || arg2 u< arg4)
    _memset(arg1, 0, arg2)
    int32_t result_1
    int32_t* eax_2
    
    if (arg3 != 0)
        if (arg2 u< arg4)
            eax_2 = __errno()
            result_1 = 0x22
            goto label_10007be9
        
        result = 0x16
    else
        eax_2 = __errno()
        result_1 = 0x16
    label_10007be9:
        *eax_2 = result_1
        __invalid_parameter_noinfo()
        result = result_1
else
    sub_1000cc10(arg1, arg3, arg4)
    result = 0

return result
