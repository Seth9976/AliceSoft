// 函数: sub_6bf464
// 地址: 0x6bf464
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_8 = edi
int32_t i = 0
int32_t edi_1 = 0x797958

do
    if (*((i << 3) + &data_78d00c) == 1)
        *((i << 3) + &data_78d008) = edi_1
        edi_1 += 0x18
        
        if (InitializeCriticalSectionAndSpinCount(*((i << 3) + &data_78d008), 0xfa0) == 0)
            *((i << 3) + &data_78d008) = 0
            return 0
    
    i += 1
while (i s< 0x24)

return 1
