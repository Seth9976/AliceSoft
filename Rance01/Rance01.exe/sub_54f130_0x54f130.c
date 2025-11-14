// 函数: sub_54f130
// 地址: 0x54f130
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
void* edx_8 = &(&var_424)[((*(esi + 0xab8) - (esi + 0x6b8)) s>> 2) + 7]
int32_t eax_4 = (edx_8 - &var_408) s>> 2
int32_t ecx = 0
void* var_8_1 = edx_8

if (eax_4 s> 0)
    do
        if (arg2 == ecx)
            void* var_8_3 = edx_8
            int32_t result = *(edx_8 - 4)
            sub_6b4885(eax_1 ^ &var_408)
            return result
        
        ecx += 1
        edx_8 -= 4
    while (ecx s< eax_4)
    
    void* var_8_2 = edx_8

sub_6b4885(eax_1 ^ &var_408)
return 0xffffffff
