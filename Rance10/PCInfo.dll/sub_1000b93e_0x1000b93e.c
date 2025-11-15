// 函数: sub_1000b93e
// 地址: 0x1000b93e
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t* var_8 = arg1
int32_t arg_4
int32_t esi = arg_4

if (esi != 0xfffffffe)
    if (esi s>= 0 && esi u< data_10017228
            && (*((&data_10017028)[esi s>> 6] + (esi & 0x3f) * 0x30 + 0x28) & 1) != 0)
        var_8 = &arg_4
        return __acrt_lowio_lock_fh_and_call<class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> >(esi, 
            &var_8)
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
