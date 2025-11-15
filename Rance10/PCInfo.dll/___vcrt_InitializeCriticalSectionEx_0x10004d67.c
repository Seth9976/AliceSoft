// 函数: ___vcrt_InitializeCriticalSectionEx
// 地址: 0x10004d67
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t eax = try_get_function(4, "FlsAlloc", 0x1000f308, "FlsAlloc")

if (eax == 0)
    return TlsAlloc() __tailcall

j_sub_10004a52()
return eax(arg1)
