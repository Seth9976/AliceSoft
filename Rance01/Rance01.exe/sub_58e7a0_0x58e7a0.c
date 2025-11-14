// 函数: sub_58e7a0
// 地址: 0x58e7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1 = arg1
int32_t arg_4
int32_t ebx = arg_4
int32_t* esi = *(arg1[2] + 0x1c)
arg_4 = ebx
sub_591420(&esi[0xd], &result_1, &arg_4)
void* result = result_1

if (result != esi[0xe] && *(result + 0x10) != 0)
    int32_t* esi_1 = *esi
    
    if (esi_1 != 0)
        result = (*(*esi_1 + 0x104))(esi_1, ebx, 0)
    
    if (esi_1 == 0 || result s< 0)
        result.b = 0
        return result
    
    *sub_58b290(&esi[0xd], &arg_4) = 0

result.b = 1
return result
