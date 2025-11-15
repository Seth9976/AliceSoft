// 函数: ___vcrt_getptd_noexit
// 地址: 0x10004546
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (data_10016020 == 0xffffffff)
    return 0

enum WIN32_ERROR dwErrCode = GetLastError()
int32_t result = ___vcrt_FlsGetValue(data_10016020)

if (result == 0xffffffff)
    result = 0
else if (result == 0)
    if (sub_10004e15(data_10016020, 0xffffffff) != 0)
        int32_t result_1 = __calloc_base(1, 0x28)
        BOOL eax_4
        
        if (result_1 != 0)
            eax_4 = sub_10004e15(data_10016020, result_1)
        
        if (result_1 != 0 && eax_4 != 0)
            result = result_1
            result_1 = 0
        else
            result = 0
            sub_10004e15(data_10016020, 0)
        
        __free_base(result_1)
    else
        result = 0

SetLastError(dwErrCode)
return result
