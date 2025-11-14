// 函数: ___acrt_errno_map_os_error
// 地址: 0x6b5dc6
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*___doserrno() = arg1
int32_t eax_1 = sub_6b5d5e(arg1)
void* result = __errno()
*result = eax_1
return result
