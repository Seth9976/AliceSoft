// 函数: sub_5ba3d0
// 地址: 0x5ba3d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
eax, edx = sub_5b4d20(0x20, arg1)

if (eax s>= 0)
    int32_t eax_2 = arg1[4] - 8
    
    if (eax s<= eax_2)
        void* eax_3 = _calloc(eax_2, edx, eax + 1, eax + 1, 1)
        arg3[3] = eax_3
        sub_5b9f50(arg1, eax_3, eax)
        int32_t eax_4 = sub_5b4d20(0x20, arg1)
        
        if (eax_4 s>= 0)
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(arg1[1] + 7)
            int32_t eax_9 = (eax_7 + (edx_1 & 7)) s>> 3
            int32_t edx_6 = (arg1[4] - eax_9 - *arg1) s>> 2
            
            if (eax_4 s<= edx_6)
                arg3[2] = eax_4
                int32_t eax_10
                int32_t ecx_2
                int32_t edx_7
                eax_10, ecx_2, edx_7 = _calloc(eax_9, edx_6, eax_4, eax_4 + 1, 4)
                *arg3 = eax_10
                int32_t eax_11
                int32_t ecx_3
                eax_11, ecx_3 = _calloc(eax_10, edx_7, ecx_2, eax_4 + 1, 4)
                int32_t i = 0
                arg3[1] = eax_11
                
                if (arg3[2] s> 0)
                    do
                        int32_t eax_12 = sub_5b4d20(0x20, arg1)
                        
                        if (eax_12 s< 0)
                            goto label_5ba4d5
                        
                        int32_t eax_15
                        int32_t edx_8
                        edx_8:eax_15 = sx.q(arg1[1] + 7)
                        int32_t ecx_7 = arg1[4] - ((eax_15 + (edx_8 & 7)) s>> 3) - *arg1
                        
                        if (eax_12 s> ecx_7)
                            goto label_5ba4d5
                        
                        int32_t edx_10 = arg3[1]
                        *(edx_10 + (i << 2)) = eax_12
                        *(*arg3 + (i << 2)) = _calloc(eax_12 + 1, edx_10, ecx_7, eax_12 + 1, 1)
                        sub_5b9f50(arg1, *(*arg3 + (i << 2)), eax_12)
                        i += 1
                    while (i s< arg3[2])
                
                if (sub_5b4d20(1, arg1) == 1)
                    return 0

label_5ba4d5:
sub_5ba040(arg3)
return 0xffffff7b
