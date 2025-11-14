// 函数: sub_5501a0
// 地址: 0x5501a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi_1 = arg1 - 1

if (arg1 - 1 s>= 0)
    int32_t* ebp_1 = arg3
    
    while (true)
        bool cond:1_1
        
        switch (*(arg2[8] + (edi_1 << 2)))
            case 0, 0xa, 0xb, 0xd, 0x1b, 0x2f
            label_5502a4:
                
                if (arg2[1] != 0)
                    arg1 = *arg2
                else
                    arg1 = 0
                
                *(arg1 + (edi_1 << 2)) = *ebp_1
            label_5502af:
                ebp_1 = &ebp_1[1]
                int32_t temp2_1 = edi_1
                edi_1 -= 1
                
                if (temp2_1 - 1 s< 0)
                    break
                
                continue
            case 0xc
                arg1 = arg2[1]
                
                if (edi_1 u< arg1 u>> 2)
                    if (arg1 != 0)
                        arg1 = *arg2
                    
                    int32_t eax_4 = *(arg1 + (edi_1 << 2))
                    
                    if (eax_4 != 0xffffffff)
                        arg1 = sub_552880(arg2[5], eax_4)
                    
                    if (eax_4 == 0xffffffff || arg1.b != 0)
                        int32_t eax_5
                        
                        if (arg2[1] != 0)
                            eax_5 = *arg2
                        else
                            eax_5 = 0
                        
                        *(eax_5 + (edi_1 << 2)) = *ebp_1
                        arg1 = arg2[5]
                        int32_t ecx_6 = *ebp_1
                        
                        if (ecx_6 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
                            void* ecx_7 = *(*(arg1 + 8) + (ecx_6 << 2))
                            
                            if (ecx_7 != 0)
                                *(ecx_7 + 0x2d) = 0
                                goto label_5502af
            case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
                arg1 = arg2[1]
                cond:1_1 = edi_1 u>= arg1 u>> 2
            label_550280:
                
                if (not(cond:1_1))
                    if (arg1 != 0)
                        arg1 = *arg2
                    
                    int32_t eax_6 = *(arg1 + (edi_1 << 2))
                    
                    if (eax_6 == 0xffffffff)
                        goto label_5502a4
                    
                    if (sub_552880(arg2[5], eax_6).b != 0)
                        goto label_5502a4
            case 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 0x44
                int32_t eax_1 = *ebp_1
                void* ecx_2 = arg2[5]
                
                if (eax_1 s>= 0 && eax_1 s< (*(ecx_2 + 0xc) - *(ecx_2 + 8)) s>> 2)
                    int32_t ecx_3 = *(ecx_2 + 8)
                    
                    if (*(ecx_3 + (eax_1 << 2)) != 0)
                        void* eax_3 = *(ecx_3 + (eax_1 << 2))
                        *(eax_3 + 0x10) += 1
                
                goto label_5502a4
            case 0x3f
                arg1 = arg2[1]
                cond:1_1 = edi_1 u>= arg1 u>> 2
                goto label_550280
        
        arg1.b = 0
        return arg1

arg1.b = 1
return arg1
