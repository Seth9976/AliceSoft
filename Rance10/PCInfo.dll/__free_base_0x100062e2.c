// 函数: __free_base
// 地址: 0x100062e2
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 != 0 && HeapFree(data_10017024, HEAP_NONE, arg1) == 0)
    BOOL* eax_1 = __errno()
    *eax_1 = ___acrt_errno_from_os_error(GetLastError())
