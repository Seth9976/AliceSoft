// 函数: sub_6c4e2b
// 地址: 0x6c4e2b
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_14
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
    void* var_10
    uint32_t result
    
    if (*(var_10 + 8) == 0)
        result = sub_6c59a0(arg1, arg2, arg3, arg4)
    label_6c4efc:
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return result
    
    enum COMPARESTRING_RESULT eax_6 =
        sub_6c595e(&var_14, *(var_10 + 0xc), 0x1001, arg1, arg3, arg2, arg3, *(var_10 + 4))
    
    if (eax_6 != 0)
        result = eax_6 - 2
        goto label_6c4efc
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return 0x7fffffff
