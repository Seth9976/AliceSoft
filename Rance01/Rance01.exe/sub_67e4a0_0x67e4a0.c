// 函数: sub_67e4a0
// 地址: 0x67e4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg1 + 0x10)

if (*(esi + 0x28) != 0)
    (*(**(esi + 0x28) + 0x20))()

sub_413500(esi)

if (*(esi + 0x2c) != 0)
    (*(**(esi + 0x2c) + 0xc))(arg2, *(esi + 0x28))

void* esi_1 = *(arg1 + 0x14)

if (*(esi_1 + 0x28) != 0)
    (*(**(esi_1 + 0x28) + 0x20))()

sub_413500(esi_1)

if (*(esi_1 + 0x2c) != 0)
    (*(**(esi_1 + 0x2c) + 0xc))(arg2, *(esi_1 + 0x28))

void* esi_2 = *(arg1 + 0x18)

if (*(esi_2 + 0x28) != 0)
    (*(**(esi_2 + 0x28) + 0x20))()

int32_t result = sub_413500(esi_2)

if (*(esi_2 + 0x2c) != 0)
    result = (*(**(esi_2 + 0x2c) + 0xc))(arg2, *(esi_2 + 0x28))

if (*(arg1 + 0xc) == 0)
    for (int32_t* i = *(arg1 + 0x60); i != *(arg1 + 0x64); i = &i[1])
        result = (*(**i + 0x50))(*(arg1 + 0x70))

return result
