// 函数: sub_5fc010
// 地址: 0x5fc010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 i+ 0x54)

for (float* i = *(arg1 i+ 0x50); i != ebx; i = &i[1])
    arg1 = *i
    void* var_20_1
    float var_1c_1
    int32_t var_18_1
    int32_t var_14_1
    char var_10_1
    
    if (arg4 == 0)
        if (*(arg1 i+ 4) != 0)
            arg1 = *arg1
            
            if (arg1 != 0xffffffff)
                var_10_1 = 0
                var_14_1 = arg2
                var_18_1 = arg3
                var_1c_1 = arg1
                var_20_1 = data_797d2c
            label_5fc06d:
                arg1, ebx, i, arg2 = sub_4099e0(var_20_1, var_1c_1, var_18_1, var_14_1, var_10_1)
                int16_t top = top - 1
                unimplemented  {call 0x4099e0}
                arg1.b = arg1.b != 0
            else
                arg1.b = 0
        else
            arg1.b = 0
    else if (*(arg1 i+ 4) != 0)
        arg1 = *arg1
        
        if (arg1 != 0xffffffff)
            var_10_1 = 1
            var_14_1 = arg2
            var_18_1 = arg3
            var_1c_1 = arg1
            var_20_1 = data_797d2c
            goto label_5fc06d
        
        arg1.b = 0
    else
        arg1.b = 0
    
    if (arg1.b != 0)
        arg1.b = 1
        return arg1

arg1.b = 0
return arg1
