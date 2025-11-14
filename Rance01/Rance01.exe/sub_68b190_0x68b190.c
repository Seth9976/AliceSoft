// 函数: sub_68b190
// 地址: 0x68b190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg1 + 0x18)

if (*(esi + 0x28) != 0)
    (*(**(esi + 0x28) + 0x20))()

sub_413500(esi)

if (*(esi + 0x2c) != 0)
    (*(**(esi + 0x2c) + 0xc))(arg2, *(esi + 0x28))

void* esi_1 = *(arg1 + 0x1c)

if (*(esi_1 + 0x28) != 0)
    (*(**(esi_1 + 0x28) + 0x20))()

sub_413500(esi_1)

if (*(esi_1 + 0x2c) != 0)
    (*(**(esi_1 + 0x2c) + 0xc))(arg2, *(esi_1 + 0x28))

void* esi_2 = *(arg1 + 0x20)

if (*(esi_2 + 0x28) != 0)
    (*(**(esi_2 + 0x28) + 0x20))()

sub_413500(esi_2)

if (*(esi_2 + 0x2c) != 0)
    (*(**(esi_2 + 0x2c) + 0xc))(arg2, *(esi_2 + 0x28))

void* esi_3 = *(arg1 + 0x24)

if (*(esi_3 + 0x28) != 0)
    (*(**(esi_3 + 0x28) + 0x20))()

int32_t result
int32_t ecx_8
result, ecx_8 = sub_413500(esi_3)

if (*(esi_3 + 0x2c) != 0)
    result, ecx_8 = (*(**(esi_3 + 0x2c) + 0xc))(arg2, *(esi_3 + 0x28))

int32_t ebp = 0
int32_t ebx_3 = (*(arg1 + 0x2c) - *(arg1 + 0x28)) s>> 2

if (ebx_3 s> 0)
    do
        void* esi_4 = *(*(arg1 + 0x28) + (ebp << 2))
        
        if (*(esi_4 + 0x28) != 0)
            (*(**(esi_4 + 0x28) + 0x20))()
        
        result, ecx_8 = sub_413500(esi_4)
        
        if (*(esi_4 + 0x2c) != 0)
            result, ecx_8 = (*(**(esi_4 + 0x2c) + 0xc))(arg2, *(esi_4 + 0x28))
        
        ebp += 1
    while (ebp s< ebx_3)

if (*(arg1 + 0xc) == 0)
    for (int32_t* i = *(arg1 + 0x78); i != *(arg1 + 0x7c); i = &i[1])
        result = (*(**i + 0x50))(*(arg1 + 0x88))

return result
