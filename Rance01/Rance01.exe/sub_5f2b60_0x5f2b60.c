// 函数: sub_5f2b60
// 地址: 0x5f2b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *(*(arg1 + 0xc) + 0x50)
int32_t eax_1

if (edi != 0)
    eax_1 = sub_5f7370(*(arg1 + 0x48), edi)

int32_t eax_2

if (edi != 0 && eax_1 != 0)
    eax_2 = sub_5f2b60()
else
    eax_2 = 0

int32_t ecx_4 = *(*(arg1 + 0xc) + 0x2c) + eax_2
int32_t var_10 = ecx_4
int32_t var_c = 0xff
int32_t* eax_3 = &var_10

if (ecx_4 s>= 0xff)
    eax_3 = &var_c

return *eax_3
