// 函数: ___scrt_dllmain_exception_filter
// 地址: 0x10002626
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t eax = ___asan_report_present()

if (eax == 0 && arg2 == 1)
    j_sub_10004a52()
    arg4(arg1, eax, arg3)

return __seh_filter_dll(arg5, arg6)
