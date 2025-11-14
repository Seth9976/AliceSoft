// 函数: sub_587ee0
// 地址: 0x587ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t arg_4
sub_591420(&arg1[0xd], &arg2, &arg_4)
int32_t** result = arg2

if (result != arg1[0xe])
    if (result[4] != ebx)
        goto label_587f16
    
    result.b = 1
    return result

if (ebx != 0)
label_587f16:
    int32_t* esi_1 = *arg1
    
    if (esi_1 != 0)
        result = (*(*esi_1 + 0x104))(esi_1, arg_4, ebx)
    
    if (esi_1 == 0 || result s< 0)
        result.b = 0
        return result
    
    *sub_58b290(&arg1[0xd], &arg_4) = ebx

result.b = 1
return result
