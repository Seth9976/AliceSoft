// 函数: sub_54f0a0
// 地址: 0x54f0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t var_408[0x40]
int32_t eax_1 = data_78c474 ^ &var_408
void* esi = *(arg1 + 4)
int128_t (* var_8)[0x40] = &var_408
sub_6bc670(&var_408, 0, 0x400)
int32_t edx_3 = ((*(esi + 0xab8) - (esi + 0x6b8)) s>> 2) * 2
int128_t* var_420 = esi + 0x6b8
int128_t* var_424 = &var_408
sub_6c02a0(var_424, var_420, edx_3 * 2)
int32_t result = (&(&var_424)[((*(esi + 0xab8) - (esi + 0x6b8)) s>> 2) + 7] - &var_408) s>> 2
sub_6b4885(eax_1 ^ &var_408)
return result
