// 函数: sub_6c6b73
// 地址: 0x6c6b73
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_14
sub_6b5cd7(&var_14, arg3)
void* result = arg1
void* var_c
char var_8

if (result == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return nullptr

void* var_10

if (*(var_10 + 8) != 0)
    while (true)
        uint16_t ecx_5 = zx.w(*result)
        
        if (ecx_5 != 0)
            if ((*(zx.d(ecx_5.b) + var_10 + 0x1d) & 4) != 0)
                result += 1
                uint32_t edx_1
                edx_1.b = *result
                
                if (edx_1.b == 0)
                label_6c6c14:
                    
                    if (var_8 != 0)
                        *(var_c + 0x70) &= 0xfffffffd
                    
                    return nullptr
                
                if (arg2 == (zx.d(ecx_5) << 8 | zx.d(edx_1.b)))
                    result -= 1
                    break
                
                result += 1
                continue
                continue
            else if (arg2 != zx.d(ecx_5))
                result += 1
                continue
                continue
        
        if (arg2 != zx.d(ecx_5))
            goto label_6c6c14
        
        break
else
    result = sub_6c4cf0(result, arg2.b)

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return result
