// 函数: sub_501640
// 地址: 0x501640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** i_1 = arg1
int32_t* result = arg3[1]
int32_t** i = *result
i_1 = i

if (i != result)
    do
        int32_t* ecx = i[4]
        
        if (ecx == arg2)
            if (ecx != 0)
                sub_4fff40(ecx)
                int32_t* var_1c_3 = ecx
                sub_6b4d5b()
            
            sub_436320(arg3, &i_1, i)
            return 1
        
        if (sub_5009f0(ecx, arg2) != 0)
            return 1
        
        sub_5cc250(&i_1)
        i = i_1
    while (i != arg3[1])

result.b = 0
return result
