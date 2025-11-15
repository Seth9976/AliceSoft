// 函数: ___scrt_initialize_onexit_tables
// 地址: 0x100026c2
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 != 0 && arg1 != 1)
    sub_10002961(5)
    breakpoint

int32_t result

if (___asan_report_present() == 0 || arg1 != 0)
    result = ror.d(0xffffffff, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
    int32_t result_2 = result
    int32_t result_3 = result
    data_10016b90 = result
    void* edi_1 = &data_10016b94
    int32_t* esi_1 = &result_2
    *edi_1 = *esi_1
    *(edi_1 + 4) = esi_1[1]
    int32_t result_1 = result
    result_2 = result
    int32_t result_4 = result
    result.b = 1
    data_10016b9c = result_1
    void* edi_4 = &data_10016ba0
    int32_t* esi_4 = &result_2
    *edi_4 = *esi_4
    *(edi_4 + 4) = esi_4[1]
else if (__initialize_onexit_table(&data_10016b90) == 0)
    int32_t eax_1 = __initialize_onexit_table(&data_10016b9c)
    result = neg.d(eax_1)
    result.b = sbb.b(result.b, result.b, eax_1 != 0)
    result.b += 1
else
    result.b = 0

return result
