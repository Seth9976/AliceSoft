// 函数: sub_5a3290
// 地址: 0x5a3290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = *(arg1 + 0xb1c)
void* var_c = arg1
void* ecx
void* edx
void* edx_1 = sub_5a2c80(arg1 + 0x94, edx, ecx)
void* ecx_1 = *(arg1 + 0xb28)
void* var_10 = ecx_1
void* var_14 = arg1
sub_5a2c80(arg1 + 0x988, edx_1, ecx_1)
sub_5a2a80(arg1, arg1 + 0xb30)
void* result = 0x12

while (true)
    if (*(arg1 + (zx.d(*(result + 0x74645c)) << 2) + 0xa7e) == 0)
        if (*(arg1 + (zx.d(*(result + 0x74645b)) << 2) + 0xa7e) != 0)
            *(arg1 + 0x16a8) += (result - 1) * 3 + 0x11
            return result - 1
        
        if (*(arg1 + (zx.d(*(result + &data_74645a)) << 2) + 0xa7e) != 0)
            *(arg1 + 0x16a8) += (result - 2) * 3 + 0x11
            return result - 2
        
        if (*(arg1 + (zx.d(*(result + &data_746459)) << 2) + 0xa7e) != 0)
            result -= 3
        else
            result -= 4
            
            if (result s< 3)
                break
            
            continue
    
    *(arg1 + 0x16a8) += result * 3 + 0x11
    return result

*(arg1 + 0x16a8) += result * 3 + 0x11
return result
