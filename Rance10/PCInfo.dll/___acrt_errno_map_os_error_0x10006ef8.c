// 函数: ___acrt_errno_map_os_error
// 地址: 0x10006ef8
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

*___doserrno() = arg1
int32_t eax_1 = ___acrt_errno_from_os_error(arg1)
int32_t* result = __errno()
*result = eax_1
return result
