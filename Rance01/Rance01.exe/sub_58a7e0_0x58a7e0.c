// 函数: sub_58a7e0
// 地址: 0x58a7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 4)
int32_t* result

while (i != *(arg1 + 8))
    void* esi_1 = *i
    int32_t* eax = *(esi_1 + 0x10)
    
    if (eax != 0)
        (*(*eax + 8))(eax)
        *(esi_1 + 0x10) = 0
    
    result = *(esi_1 + 0xc)
    
    if (result != 0)
        (*(*result + 8))(result)
        *(esi_1 + 0xc) = 0
    
    i = &i[1]
    *(esi_1 + 0x3d) = 0

result.b = 1
return result
