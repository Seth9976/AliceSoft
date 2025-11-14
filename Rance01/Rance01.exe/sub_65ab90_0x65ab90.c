// 函数: sub_65ab90
// 地址: 0x65ab90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(data_797d2c + 0x30)
int32_t var_8 = arg1
int32_t* var_4
sub_42e070(esi + 0x294, &var_4, &var_8)
int32_t* eax_1 = var_4

if (eax_1 != *(esi + 0x298))
    eax_1 = eax_1[4]
    
    if (eax_1 != 0)
        return zx.d(*(eax_1 + 0x2a))

return 0
