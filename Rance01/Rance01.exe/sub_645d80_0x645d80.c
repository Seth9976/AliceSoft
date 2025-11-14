// 函数: sub_645d80
// 地址: 0x645d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg2
uint32_t result = ebp & 0x7fffffff

if (result s> 0x20)
    if (result s> 0x100)
        if (result == 0x200)
            int32_t edi_10 = arg1[1]
            int32_t* ebx_10 = *arg1
            arg2.b = 0
            int32_t var_14_10 = 0
            result = sub_647a10(ebx_10, edi_10, (edi_10 - ebx_10) s/ 0x28)
    else if (result == 0x100)
        int32_t edi_9 = arg1[1]
        int32_t* ebx_9 = *arg1
        arg2.b = 0
        int32_t var_14_9 = 0
        result = sub_6478c0(ebx_9, edi_9, (edi_9 - ebx_9) s/ 0x28)
    else
        int32_t eax_25 = result - 0x40
        
        if (result == 0x40)
            int32_t edi_8 = arg1[1]
            int32_t* ebx_8 = *arg1
            arg2.b = 0
            int32_t var_14_8 = 0
            result = sub_647620(ebx_8, edi_8, (edi_8 - ebx_8) s/ 0x28)
        else
            result = eax_25 - 0x40
            
            if (eax_25 == 0x40)
                int32_t edi_7 = arg1[1]
                int32_t* ebx_7 = *arg1
                arg2.b = result.b
                int32_t var_14_7 = arg2
                result = sub_647770(ebx_7, edi_7, (edi_7 - ebx_7) s/ 0x28)
else if (result == 0x20)
    int32_t edi_6 = arg1[1]
    int32_t* ebx_6 = *arg1
    arg2.b = 0
    int32_t var_14_6 = 0
    result = sub_6474d0(ebx_6, edi_6, (edi_6 - ebx_6) s/ 0x28)
else
    result -= 1
    
    if (result u<= 0xf)
        result = zx.d(lookup_table_645ff0[result])
        
        switch (result)
            case 0
                int32_t edi_1 = arg1[1]
                int32_t* ebx_1 = *arg1
                arg2.b = 0
                int32_t var_14_1 = 0
                result = sub_646e40(ebx_1, edi_1, (edi_1 - ebx_1) s/ 0x28)
            case 1
                int32_t edi_2 = arg1[1]
                int32_t* ebx_2 = *arg1
                arg2.b = 0
                int32_t var_14_2 = 0
                result = sub_646f90(ebx_2, edi_2, (edi_2 - ebx_2) s/ 0x28)
            case 2
                int32_t edi_3 = arg1[1]
                int32_t* ebx_3 = *arg1
                arg2.b = 0
                int32_t var_14_3 = 0
                result = sub_6470e0(ebx_3, edi_3, (edi_3 - ebx_3) s/ 0x28)
            case 3
                int32_t edi_4 = arg1[1]
                int32_t* ebx_4 = *arg1
                arg2.b = 0
                int32_t var_14_4 = 0
                result = sub_647230(ebx_4, edi_4, (edi_4 - ebx_4) s/ 0x28)
            case 4
                int32_t edi_5 = arg1[1]
                int32_t* ebx_5 = *arg1
                arg2.b = 0
                int32_t var_14_5 = 0
                result = sub_647380(ebx_5, edi_5, (edi_5 - ebx_5) s/ 0x28)

if (ebp s>= 0)
    return result

int32_t var_14_11 = arg2
return sub_647b60(*arg1, arg1[1])
