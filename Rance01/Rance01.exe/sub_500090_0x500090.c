// 函数: sub_500090
// 地址: 0x500090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t* esi = *(arg1 + 0x44)

if (esi != 0)
    sub_4bf9f0(esi)
    *(arg1 + 0x44) = 0

int32_t* esi_1 = *(arg1 + 0x40)

if (esi_1 != 0)
    sub_4bf9f0(esi_1)
    *(arg1 + 0x40) = 0

sub_4c09d0(arg1 + 0x30)

if (sub_500130(arg2, arg1, arg3) != 0 && sub_500450(arg2, arg1, arg3) != 0
        && sub_5005c0(arg2, arg1, arg3) != 0)
    int32_t* esi_2 = *(arg1 + 0x4c)
    
    if (esi_2 == *(arg1 + 0x50))
        return 1
    
    while (true)
        if (*esi_2 != 0 && sub_500090(arg2, arg3) == 0)
            return 0
        
        esi_2 = &esi_2[1]
        
        if (esi_2 == *(arg1 + 0x50))
            return 1

return 0
