// 函数: sub_5fa090
// 地址: 0x5fa090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(data_797d2c + 0x30)
int32_t var_8 = arg1
int32_t* result_1
sub_42e070(esi + 0x294, &result_1, &var_8)
int32_t* result = result_1

if (result != *(esi + 0x298))
    result = result[4]
    
    if (result != 0)
        result[9] = arg2
        result.b = 1
        return result

result.b = 0
return result
