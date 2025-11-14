// 函数: sub_6508f0
// 地址: 0x6508f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1

if (arg2 s> 0)
    void* ebp_1 = data_797ddc
    int32_t* var_14_1 = arg2
    char eax_1
    int32_t* ecx
    int32_t edx
    int32_t edx_1
    eax_1, ecx, edx_1 = sub_418b70(ebp_1 + 0xa8, edx, arg1)
    
    if (eax_1 != 0)
        int32_t* var_14_2 = arg2
        
        if (sub_418b70(ebp_1 + 0xa8, edx_1, ecx) != 0)
            int32_t eax_5
            eax_5.b = sub_6841d0(arg2, arg3) == 4
            
            if (eax_5.b != 0)
                sub_6a1e50(arg3, arg1)
                return arg1
        
        arg1[5] = 0xf
        arg1[4] = 0
        *arg1 = 0
        sub_401270(arg1, nullptr, 0x72d68d)
        return arg1

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72d66f)
return arg1
