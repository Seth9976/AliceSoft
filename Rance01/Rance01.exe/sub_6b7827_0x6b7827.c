// 函数: sub_6b7827
// 地址: 0x6b7827
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool p = unimplemented  {sub esp, 0x328}
bool a = unimplemented  {sub esp, 0x328}
data_797000 = arg1
data_796ffc = arg3
data_796ff8 = arg2
int32_t entry_ebx
data_796ff4 = entry_ebx
data_796ff0 = arg5
data_796fec = arg6
int16_t ss
data_797018 = ss
int16_t cs
data_79700c = cs
int16_t ds
data_796fe8 = ds
int16_t es
data_796fe4 = es
int16_t fs
data_796fe0 = fs
int16_t gs
data_796fdc = gs
int32_t var_32c
int32_t var_4
bool d
int32_t var_330 = (add_overflow(&var_4, 0xfffffcd8) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_32c s< 0 ? 1 : 0) << 7 | (&var_4 == 0x328 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_4 u< 0x328 ? 1 : 0)
data_797010 = var_330
data_797004 = arg4
data_797008 = __return_addr
void arg_4
data_797014 = &arg_4
data_796f50 = 0x10001
data_796f04 = data_797008
data_796ef8 = 0xc0000409
data_796efc = 1
int32_t var_32c_1 = data_78c474
int32_t var_328 = data_78c478
data_796f48 = IsDebuggerPresent()
sub_6c1528()
SetUnhandledExceptionFilter(nullptr)
UnhandledExceptionFilter(&data_72a698)

if (data_796f48 == 0)
    sub_6c1528()

TerminateProcess(GetCurrentProcess(), 0xc0000409)
noreturn
