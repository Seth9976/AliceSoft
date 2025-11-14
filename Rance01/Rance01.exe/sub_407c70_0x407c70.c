// 函数: sub_407c70
// 地址: 0x407c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(data_797d2c + 0x30)
int32_t var_18 = arg1
int32_t* var_14
sub_42e070(esi + 0x294, &var_14, &var_18)
int32_t* eax_1 = var_14

if (eax_1 != *(esi + 0x298))
    void* ebx_1 = eax_1[4]
    
    if (ebx_1 != 0)
        void var_10
        int32_t* eax_2 = sub_407320(arg2, arg3, arg4, 0, &var_10)
        *(ebx_1 + 0xa8) = *eax_2
        *(ebx_1 + 0xac) = eax_2[1]
        *(ebx_1 + 0xb0) = eax_2[2]
        *(ebx_1 + 0xb4) = eax_2[3]
        eax_2.b = 1
        return eax_2

eax_1.b = 0
return eax_1
