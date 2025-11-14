// 函数: __fclose_nolock
// 地址: 0x6b68e4
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_c = edi
int32_t result = 0xffffffff

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if ((arg1[3].b & 0x83) != 0)
    result = sub_6b6518(arg1)
    sub_6c0644(arg1)
    
    if (sub_6bdbdc(__fileno(arg1)) s>= 0)
        int32_t eax_6 = arg1[7]
        
        if (eax_6 != 0)
            __free_base(eax_6)
            arg1[7] = 0
    else
        result = 0xffffffff

arg1[3] = 0
return result
