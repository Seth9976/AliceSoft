// 函数: sub_58a9f0
// 地址: 0x58a9f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* esi_1 = *i
    result = *(esi_1 + 0xc)
    
    if (result != 0)
        (*(*result + 8))(result)
        *(esi_1 + 0xc) = 0

result.b = 1
return result
