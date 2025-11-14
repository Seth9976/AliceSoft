// 函数: sub_61b340
// 地址: 0x61b340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = arg1[5] u< 0x10
int32_t eax
int32_t var_24 = eax
int32_t var_20 = eax
int32_t var_40 = 0xffff0002
int32_t var_3c = 0x27
int32_t lParam = arg4

if (cond:0)
    int32_t* var_2c_1 = arg1
else
    int32_t var_2c = *arg1

int32_t var_28 = arg1[4] + 1
int32_t var_18 = arg3
arg2[1] = SendMessageA(*arg2, 0x1100, 0, &lParam)
return sub_401180(&arg2[3], 0xffffffff, arg1, 0)
