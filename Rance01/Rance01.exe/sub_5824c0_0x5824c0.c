// 函数: sub_5824c0
// 地址: 0x5824c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = (arg2 + 0xf) & 0xfffffff0

if (result s> 0 && sub_57e800(arg1 + 0xc, (arg3 + 0xf) & 0xfffffff0, result).b != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x14) s> 0)
        result = *(arg1 + 0x10)
        
        do
            char* edi_4 = nullptr
            
            if (result s> 0)
                do
                    edi_4[*(*(arg1 + 0xc) + (i << 2))] = sub_6b5a79()
                    result = *(arg1 + 0x10)
                    edi_4 = &edi_4[1]
                while (edi_4 s< result)
            
            i += 1
        while (i s< *(arg1 + 0x14))
    
    result.b = 1
    return result

result.b = 0
return result
