// 函数: sub_415410
// 地址: 0x415410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax = *(arg1 + 0x1c)
int32_t* ecx = *(arg1 + 0x18)
int32_t result = sub_416c30(ecx, eax, (eax - ecx) s>> 2, 0)

for (void** i = *(arg1 + 0x18); i != *(arg1 + 0x1c); i = &i[1])
    void* esi_1 = *i
    
    if (*(esi_1 + 0x28) != 0)
        (*(**(esi_1 + 0x28) + 0x20))()
    
    result = sub_413500(esi_1)
    
    if (*(esi_1 + 0x2c) != 0)
        result = (*(**(esi_1 + 0x2c) + 0xc))(arg2, *(esi_1 + 0x28))

return result
