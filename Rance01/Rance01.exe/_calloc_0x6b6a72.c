// 函数: _calloc
// 地址: 0x6b6a72
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg3
var_8 = 0
int32_t result = sub_6c0675(arg4, arg5, &var_8)

if (result == 0 && var_8 != result && __errno() != 0)
    void* eax_1 = __errno()
    *eax_1 = var_8

return result
