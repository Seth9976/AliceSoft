// 函数: sub_6e0b10
// 地址: 0x6e0b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = *arg2
int32_t ebx = arg3[2]

if (ebp s<= ebx)
    int32_t ecx_2 = arg2[2]
    int32_t edx_1 = *arg3
    
    if (ecx_2 s>= edx_1)
        int32_t eax_2 = arg2[1]
        int32_t edi_3 = arg3[3]
        
        if (eax_2 s<= edi_3)
            int32_t edi_4 = arg2[3]
            int32_t edi_5 = arg3[1]
            int32_t var_20_1 = edi_5
            
            if (edi_4 s>= edi_5)
                int32_t eax_7
                
                if (ebp s<= edx_1)
                    eax_7 = *arg3
                else
                    eax_7 = *arg2
                
                int32_t eax_11
                
                if (eax_2 s<= edi_5)
                    eax_11 = arg3[1]
                else
                    eax_11 = arg2[1]
                
                int32_t eax_14
                
                if (ecx_2 s>= ebx)
                    eax_14 = arg3[2]
                else
                    eax_14 = arg2[2]
                
                int32_t eax_18
                
                if (edi_4 s>= edi_3)
                    eax_18 = arg3[3]
                else
                    eax_18 = arg2[3]
                
                *arg1 = eax_7
                arg1[1] = eax_11
                arg1[2] = eax_14
                arg1[3] = eax_18
                return arg1

int32_t ecx_4 = data_79b8e4
*arg1 = data_79b8e0
int32_t ebx_1 = data_79b8e8
int32_t edi_6 = data_79b8ec
arg1[1] = ecx_4
arg1[2] = ebx_1
arg1[3] = edi_6
return arg1
