// 函数: sub_6b5147
// 地址: 0x6b5147
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_24 = nullptr
int32_t edi
int32_t var_28 = edi
void* var_20
__builtin_memset(&var_20, 0, 0x1c)

if (arg1 == 0 || arg3 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

void* eax_2 = _strlen(arg1)
int32_t var_18 = 0x49
char* var_1c = arg1
var_24 = arg1
var_20 = 0x7fffffff

if (eax_2 u<= 0x7fffffff)
    var_20 = eax_2

return arg2(&var_24, arg3, arg4, arg5)
