// 函数: sub_6b77db
// 地址: 0x6b77db
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_2c = edi
uint32_t dwExceptionCode
__builtin_memcpy(&dwExceptionCode, 0x72a678, 0x20)
int32_t var_c = arg1
char* var_8 = arg2
uint32_t arguments

if (arg2 != 0 && (*arg2 & 8) != 0)
    arguments = 0x1994000

uint32_t dwExceptionFlags
uint32_t nNumberOfArguments
RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
noreturn
