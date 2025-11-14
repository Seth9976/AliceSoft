// 函数: sub_5b1230
// 地址: 0x5b1230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_14
int32_t eax_1 = data_78c474 ^ &var_14
char* result = arg1
void* ecx = &var_14 - result
void* esi = &var_14:1 - result
void var_12
void* edi = &var_12 - result
var_14 = 0x87ae915d
int32_t var_10 = 0xcd41564a
int32_t var_c = 0x924cec83
int32_t var_8 = 0x3416cbb5
void var_11
void* ebp = &var_11 - result
int32_t i_1 = 4
int32_t i

do
    *result ^= *(ecx + result)
    result[1] ^= *(esi + result)
    result[2] ^= *(edi + result)
    result[3] ^= *(result + ebp)
    result = &result[4]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_6b4885(eax_1 ^ &var_14)
return result
