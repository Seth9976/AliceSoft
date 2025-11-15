// 函数: ___vcrt_FlsGetValue
// 地址: 0x10004ddb
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t eax = try_get_function(6, "FlsGetValue", 0x1000f32c, "FlsGetValue")

if (eax == 0)
    return TlsGetValue(arg1)

j_sub_10004a52()
return eax(arg1)
