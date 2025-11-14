// 函数: sub_6bcb0d
// 地址: 0x6bcb0d
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_10 = edi

if (arg1 s>= 0 && arg1 u< data_7980e8)
    int32_t* eax_3 = (&data_798100)[arg1 s>> 5]
    
    if ((eax_3[(arg1 & 0x1f) * 0x10 + 1].b & 1) != 0 && eax_3[(arg1 & 0x1f) * 0x10] != 0xffffffff)
        if (data_78c470 == 1)
            if (arg1 == 0)
                int32_t var_14_3 = 0
                SetStdHandle(STD_INPUT_HANDLE, nullptr)
            else if (arg1 == 1)
                int32_t var_14_2 = 0
                SetStdHandle(STD_OUTPUT_HANDLE, nullptr)
            else if (arg1 == 2)
                int32_t var_14_1 = 0
                SetStdHandle(STD_ERROR_HANDLE, nullptr)
        
        *(((arg1 & 0x1f) << 6) + (&data_798100)[arg1 s>> 5]) = 0xffffffff
        return 0

*__errno() = 9
*___doserrno() = 0
return 0xffffffff
