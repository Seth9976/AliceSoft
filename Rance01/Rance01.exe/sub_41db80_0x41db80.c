// 函数: sub_41db80
// 地址: 0x41db80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = data_797d44
int32_t* result = sub_424db0(esi)

if (result.b != 0 && *(esi + 0xc) != 0)
    int32_t eax_1 = (*(**(esi + 0xc) + 4))()
    result = (*(**(esi + 0xc) + 8))()
    int32_t* result_1 = result
    
    if (eax_1 != 0 || result_1 != 0)
        for (int32_t* i = *(arg1 + 0x58); i != *(arg1 + 0x5c); i = &i[1])
            result = (*(**i + 0xc))(*(arg1 + 0x68), eax_1, result_1)

return result
