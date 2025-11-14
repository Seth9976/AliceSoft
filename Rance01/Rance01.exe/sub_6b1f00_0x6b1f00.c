// 函数: sub_6b1f00
// 地址: 0x6b1f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = arg2
int32_t* eax = data_797e5c

if (i == *eax && arg3 == eax)
    sub_6b1fb0()
    *arg1 = *data_797e5c
    return arg1

for (; i != arg3; i = arg2)
    int32_t* i_2 = i
    
    if (*(i + 0x15) == 0)
        int32_t* eax_3 = i[2]
        
        if (*(eax_3 + 0x15) != 0)
            int32_t* i_1 = i[1]
            
            if (*(i_1 + 0x15) == 0)
                while (i == i_1[2])
                    i = i_1
                    arg2 = i
                    i_1 = i_1[1]
                    
                    if (*(i_1 + 0x15) != 0)
                        break
            
            arg2 = i_1
        else
            int32_t* ecx_1 = eax_3
            int32_t* eax_4 = *ecx_1
            
            while (*(eax_4 + 0x15) == 0)
                ecx_1 = eax_4
                eax_4 = *ecx_1
            
            arg2 = ecx_1
    
    int32_t __saved_ecx
    sub_6b1b90(&__saved_ecx, i_2)

*arg1 = i
return arg1
