// 函数: sub_54fb30
// 地址: 0x54fb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0

if (arg2[9] s<= 0)
    int32_t result
    result.b = 1
    return result

int32_t edi = arg1

do
    int32_t ecx_1 = arg2[1]
    
    if (i u< ecx_1 u>> 2)
        if (ecx_1 != 0)
            ecx_1 = *arg2
        
        edi = *(ecx_1 + (i << 2))
    
    switch (*(arg2[8] + (i << 2)) - 0x12)
        case 0, 1, 2, 3, 4, 5, 6, 7, 0xd, 0xe, 0x21, 0x22
            void* ecx_4 = arg2[5]
            
            if (edi s>= 0 && edi s< (*(ecx_4 + 0xc) - *(ecx_4 + 8)) s>> 2)
                int32_t ecx_5 = *(ecx_4 + 8)
                
                if (*(ecx_5 + (edi << 2)) != 0)
                    void* ecx_7 = *(ecx_5 + (edi << 2))
                    *(ecx_7 + 0x10) += 1
    
    i += 1
while (i s< arg2[9])

return 1
