// 函数: sub_58a8d0
// 地址: 0x58a8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 4)
int32_t* result

while (i != *(arg1 + 8))
    void* esi_1 = *i
    result = *(esi_1 + 0xc)
    
    if (result != 0)
        (*(*result + 8))(result)
        *(esi_1 + 0xc) = 0
    
    i = &i[1]
    *(esi_1 + 0x1c) = 0

result.b = 1
return result
