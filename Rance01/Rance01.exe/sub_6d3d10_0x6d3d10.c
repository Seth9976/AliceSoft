// 函数: sub_6d3d10
// 地址: 0x6d3d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = *(arg1 + 0x37f0)

if (*(arg1 + 0x74) != 0)
    *(arg1 + 0x18) = 0
else
    int32_t ebx_1 = *(arg1 + 0x6c)
    
    if (ebx_1 != 0 && *(arg1 + 0x68) != 0)
        *(arg1 + 0x18) = 0
        int32_t ebx_2 = *(arg1 + 0x37c0)
        
        if (ebx_2 s<= 0 || ebx_2 s> 0xff)
            return 0xfffffff2
        
        if (ebx_2 == 3)
            int32_t ebp_5 = *(arg1 + 0x34)
            
            if (ebp_5 == 1 && *(arg1 + 0x30) == 3)
                void* ebp_8 = *(arg1 + 0x37cc)
                int32_t ebx_33 = *(ebp_8 + 4)
                
                if (ebx_33 == 2 && *(ebp_8 + 8) == 2 && *(ebp_8 + 0x14) == 1 && *(ebp_8 + 0x18) == 1
                        && *(ebp_8 + 0x24) == 1 && *(ebp_8 + 0x28) == 1)
                    *(arg1 + 0x18) = 3
                    *(edx + 0x60) = sub_6d6780
                    return 0
                
                if (ebx_33 == 2 && *(ebp_8 + 8) == 1 && *(ebp_8 + 0x14) == 1 && *(ebp_8 + 0x18) == 1
                        && *(ebp_8 + 0x24) == 1 && *(ebp_8 + 0x28) == 1)
                    *(arg1 + 0x18) = 5
                    *(edx + 0x60) = sub_6d84f0
            else if (ebp_5 == 1 && *(arg1 + 0x30) == 4)
                void* ebp_7 = *(arg1 + 0x37cc)
                int32_t ebx_26 = *(ebp_7 + 4)
                
                if (ebx_26 == 2 && *(ebp_7 + 8) == 2 && *(ebp_7 + 0x14) == 1 && *(ebp_7 + 0x18) == 1
                        && *(ebp_7 + 0x24) == 1 && *(ebp_7 + 0x28) == 1)
                    *(arg1 + 0x18) = 0
                    *(edx + 0x60) = sub_6de7b0
                    return 0
                
                if (ebx_26 == 2 && *(ebp_7 + 8) == 1 && *(ebp_7 + 0x14) == 1 && *(ebp_7 + 0x18) == 1
                        && *(ebp_7 + 0x24) == 1 && *(ebp_7 + 0x28) == 1)
                    *(arg1 + 0x18) = 0
                    *(edx + 0x60) = sub_6de7b0
            else if (ebp_5 == 2 && *(arg1 + 0x30) == 3)
                void* ebp_6 = *(arg1 + 0x37cc)
                int32_t ebx_19 = *(ebp_6 + 4)
                
                if (ebx_19 == 2 && *(ebp_6 + 8) == 2 && *(ebp_6 + 0x14) == 1 && *(ebp_6 + 0x18) == 1
                        && *(ebp_6 + 0x24) == 1 && *(ebp_6 + 0x28) == 1)
                    *(arg1 + 0x18) = 4
                    *(edx + 0x60) = sub_6d7900
                    return 0
                
                if (ebx_19 == 2 && *(ebp_6 + 8) == 1 && *(ebp_6 + 0x14) == 1 && *(ebp_6 + 0x18) == 1
                        && *(ebp_6 + 0x24) == 1 && *(ebp_6 + 0x28) == 1)
                    *(arg1 + 0x18) = 6
                    *(edx + 0x60) = sub_6d90f0
        else if (ebx_2 == 4 && *(arg1 + 0x34) == 5 && *(arg1 + 0x30) == 4)
            void* ebp_4 = *(arg1 + 0x37cc)
            int32_t ebx_10 = *(ebp_4 + 4)
            
            if (ebx_10 == 2 && *(ebp_4 + 8) == 2 && *(ebp_4 + 0x14) == 1 && *(ebp_4 + 0x18) == 1
                    && *(ebp_4 + 0x24) == 1 && *(ebp_4 + 0x28) == 1 && *(ebp_4 + 0x34) == 2
                    && *(ebp_4 + 0x38) == 2)
                *(arg1 + 0x18) = 0xb
                *(edx + 0x60) = sub_6db9d0
                return 0
            
            if (ebx_10 == 2 && *(ebp_4 + 8) == 1 && *(ebp_4 + 0x14) == 1 && *(ebp_4 + 0x18) == 1
                    && *(ebp_4 + 0x24) == 1 && *(ebp_4 + 0x28) == 1 && *(ebp_4 + 0x34) == 2
                    && *(ebp_4 + 0x38) == 1)
                *(arg1 + 0x18) = 0xc
                *(edx + 0x60) = sub_6da6d0
    else if (ebx_1 == 0 || *(arg1 + 0x68) != 0)
        if (ebx_1 == 0 && *(arg1 + 0x68) != 0)
            int32_t ebx_4 = *(arg1 + 0x37c0)
            
            if (ebx_4 == 1 && *(arg1 + 0x30) == 3)
                *(arg1 + 0x18) = 0
                *(edx + 0x60) = sub_6df730
                return 0
            
            if (ebx_4 == 3 && *(arg1 + 0x30) == 3)
                int32_t ebx_50 = *(arg1 + 0x34)
                
                if (ebx_50 == 1)
                    *(arg1 + 0x18) = 1
                    *(edx + 0x60) = sub_6d4c50
                    return 0
                
                if (ebx_50 != 2)
                    *(arg1 + 0x18) = 0
                    return 0
                
                *(arg1 + 0x18) = 2
                *(edx + 0x60) = sub_6d55f0
                return 0
            
            if (ebx_4 == 3 && *(arg1 + 0x30) == 4)
                *(arg1 + 0x18) = 0
                *(edx + 0x60) = sub_6de7b0
                return 0
            
            if (ebx_4 != 4)
                *(arg1 + 0x18) = 0
                return 0
            
            if (*(arg1 + 0x30) != 4)
                *(arg1 + 0x18) = 0
                return 0
            
            if (*(arg1 + 0x34) != 5)
                *(arg1 + 0x18) = 0
                return 0
            
            *(arg1 + 0x18) = 0xa
            *(edx + 0x60) = sub_6d9a70
            return 0
        
        if (ebx_1 != 0)
            *(arg1 + 0x18) = 0
            return 0
        
        if (*(arg1 + 0x68) != 0)
            *(arg1 + 0x18) = 0
            return 0
        
        int32_t ebx_6 = *(arg1 + 0x37c0)
        
        if (ebx_6 == 1 && *(arg1 + 0x34) == 4 && *(arg1 + 0x58) == 4)
            *(arg1 + 0x18) = 0x14
            *(edx + 0x60) = sub_6de6c0
            return 0
        
        if (ebx_6 == 3 && *(arg1 + 0x30) == 1 && *(arg1 + 0x58) == 3)
            *(arg1 + 0x18) = 0
            *(edx + 0x60) = sub_6e0620
            return 0
        
        if (ebx_6 == 3 && *(arg1 + 0x30) == 3)
            if (*(arg1 + 0x34) == 2)
                *(arg1 + 0x18) = 0
                *(edx + 0x60) = sub_6e0620
                return 0
            
            *(arg1 + 0x18) = 0xf
            *(edx + 0x60) = sub_6dc430
            return 0
        
        if (ebx_6 == 3 && *(arg1 + 0x30) == 4)
            *(arg1 + 0x18) = 0
            *(edx + 0x60) = sub_6e0620
            return 0
        
        if (ebx_6 == 4)
            *(arg1 + 0x18) = 0xe
            *(edx + 0x60) = sub_6dbe40
            return 0
        
        *(arg1 + 0x18) = 0
        
        if (*(arg1 + 0x58) == 0xff && *(arg1 + 0x34) == 0xff)
            *(edx + 0x60) = sub_6e0620
    else
        *(arg1 + 0x18) = 0
        int32_t ebx_3 = *(arg1 + 0x37c0)
        
        if (ebx_3 == 3 && *(arg1 + 0x30) == 1)
            *(edx + 0x60) = sub_6dfe50
            return 0
        
        if (ebx_3 != 3 || *(arg1 + 0x30) != 3 || *(arg1 + 0x34) == 2)
            *(edx + 0x60) = sub_6dfe50
            return 0
        
        void* ebp_9 = *(arg1 + 0x37cc)
        int32_t ebx_41 = *(ebp_9 + 4)
        
        if (ebx_41 == 2 && *(ebp_9 + 8) == 2 && *(ebp_9 + 0x14) == 1 && *(ebp_9 + 0x18) == 1
                && *(ebp_9 + 0x24) == 1 && *(ebp_9 + 0x28) == 1)
            *(arg1 + 0x18) = 0x10
            *(edx + 0x60) = sub_6dcfb0
            ebp_9 = *(arg1 + 0x37cc)
            ebx_41 = *(ebp_9 + 4)
        
        if (ebx_41 == 2 && *(ebp_9 + 8) == 1 && *(ebp_9 + 0x14) == 1 && *(ebp_9 + 0x18) == 1
                && *(ebp_9 + 0x24) == 1 && *(ebp_9 + 0x28) == 1)
            if (*(arg1 + 0x38) == 2)
                *(arg1 + 0x18) = 0x12
                *(edx + 0x60) = sub_6de0a0
                return 0
            
            *(arg1 + 0x18) = 0x11
            *(edx + 0x60) = sub_6dd7b0

return 0
