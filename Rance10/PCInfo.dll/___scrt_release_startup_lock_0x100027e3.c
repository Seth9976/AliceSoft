// 函数: ___scrt_release_startup_lock
// 地址: 0x100027e3
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t eax = ___asan_report_present()

if (eax == 0 || arg1 != 0)
    return eax

int32_t temp0_1 = data_10016b8c
data_10016b8c = 0
return temp0_1
