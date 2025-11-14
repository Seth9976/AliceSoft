// 函数: sub_5f5f40
// 地址: 0x5f5f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0
int32_t edi
void* eax_1 = sub_5f7370(*data_797da0, edi)
void* eax_2

if (eax_1 != 0)
    eax_2 = sub_5f2f00(1, eax_1, arg2)

char* var_10_2

if (eax_1 != 0 && eax_2 != 0)
    int32_t var_c_3 = 0
    var_10_2 = eax_2 + 0x40
else
    int32_t var_c_2 = 0
    var_10_2 = &data_7934e0

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401180(arg1, 0xffffffff, var_10_2, 0)
return arg1
