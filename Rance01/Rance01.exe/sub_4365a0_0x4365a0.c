// 函数: sub_4365a0
// 地址: 0x4365a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** i = arg3
int32_t* eax = arg1[1]

if (i == *eax && arg4 == eax)
    sub_5f7c70(arg1)
    *arg2 = *arg1[1]
    return arg2

for (; i != arg4; i = arg3)
    int32_t** i_2 = i
    
    if (*(i + 0x15) == 0)
        int32_t* eax_3 = i[2]
        
        if (*(eax_3 + 0x15) != 0)
            int32_t** i_1 = i[1]
            
            if (*(i_1 + 0x15) == 0)
                while (i == i_1[2])
                    i = i_1
                    arg3 = i
                    i_1 = i_1[1]
                    
                    if (*(i_1 + 0x15) != 0)
                        break
            
            arg3 = i_1
        else
            int32_t* ecx_1 = eax_3
            int32_t* eax_4 = *ecx_1
            
            while (*(eax_4 + 0x15) == 0)
                ecx_1 = eax_4
                eax_4 = *ecx_1
            
            arg3 = ecx_1
    
    int32_t __saved_ecx
    sub_436320(arg1, &__saved_ecx, i_2)

*arg2 = i
return arg2
