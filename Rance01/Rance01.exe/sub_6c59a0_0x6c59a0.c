// 函数: sub_6c59a0
// 地址: 0x6c59a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_14
sub_6b5cd7(&var_14, arg4)
void* var_c
char var_8

if (arg3 == 0)
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0

if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0x7fffffff

if (arg3 u<= 0x7fffffff)
    void* eax_5 = var_14
    uint32_t ecx_1 = *(eax_5 + 0x10)
    uint32_t result
    
    if (ecx_1 == 0)
        result = sub_6c560e(arg1, arg2, arg3, &var_14)
    label_6c5a7d:
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return result
    
    enum COMPARESTRING_RESULT eax_6 =
        sub_6c595e(&var_14, ecx_1, 0x1001, arg1, arg3, arg2, arg3, *(eax_5 + 8))
    
    if (eax_6 != 0)
        result = eax_6 - 2
        goto label_6c5a7d
    
    *__errno() = 0x16
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return 0x7fffffff
