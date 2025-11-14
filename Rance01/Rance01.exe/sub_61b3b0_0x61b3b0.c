// 函数: sub_61b3b0
// 地址: 0x61b3b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = arg1[5] u< 0x10
int32_t ecx
int32_t var_24 = ecx
int32_t var_20 = ecx
int32_t var_40 = 0xffff0002
int32_t var_3c = 0x27
int32_t lParam = arg2[1]

if (cond:0)
    int32_t* var_2c_1 = arg1
else
    int32_t var_2c = *arg1

int32_t var_28 = arg1[4] + 1
int32_t* result_1
int32_t* result_2 = result_1
LRESULT eax_3 = SendMessageA(*arg2, 0x1100, 0, &lParam)
int32_t* result = operator new(8)

if (result == 0)
    result = nullptr
else
    *result = *arg2
    result[1] = eax_3

result_1 = result

if (result == 0)
    return result

sub_61b5a0(&result_1, &arg2[0xe])
return result_1[1]
