// 函数: __umatherr
// 地址: 0x1000c451
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t ecx = 0

for (int32_t i = 0; i s< 0x1d; i += 1)
    if (*((i << 3) + &data_10013978) == arg2)
        ecx = (&data_1001397c)[i * 2]
        break

int32_t var_20 = ecx
int16_t x87control

if (ecx == 0)
    __ctrlfp(x87control, arg8, 0xffff)
    __set_errno_from_matherr(arg1)
    return fconvert.t(arg7)

int32_t var_1c_1 = arg3
int32_t var_18_1 = arg4
int32_t var_14_1 = arg5
int32_t var_10_1 = arg6
void* var_24 = arg1
int32_t var_8_1 = arg7:4.d
__ctrlfp(x87control, arg8, 0xffff)

if (___acrt_invoke_user_matherr(&var_24) == 0)
    __set_errno_from_matherr(arg1)

return fconvert.t(arg7.d.q)
