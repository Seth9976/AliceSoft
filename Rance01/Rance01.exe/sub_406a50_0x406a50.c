// 函数: sub_406a50
// 地址: 0x406a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = *(*(arg1 + 8) + 0x2c8)

if (esi != 0)
    sub_4356f0(&esi[0xc])
    sub_4356f0(&esi[0x44])
    int32_t* ecx_1 = *(esi + 0x7c)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(esi + 0x7c) = 0
    
    *esi = 0
    *(esi + 4) = 0
    *(esi + 8) = 0

int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    (*(*ecx_2 + 0x18))(arg1)
    (*(**(arg1 + 0xc) + 4))()
    *(arg1 + 0xc) = 0

void* result
result.b = 1
return result
