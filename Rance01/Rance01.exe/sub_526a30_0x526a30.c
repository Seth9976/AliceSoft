// 函数: sub_526a30
// 地址: 0x526a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    void* ecx_1 = data_797d4c
    
    if (arg1 s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
        result = *(*(ecx_1 + 0x40) + (arg1 << 2))
        
        if (result != 0)
            if (arg1 s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2 && result != 0 && arg2 s>= 0)
                int32_t ecx_2 = *(result + 0x10)
                
                if (arg2 s< (*(result + 0x14) - ecx_2) s>> 2)
                    void* ecx_3 = *(ecx_2 + (arg2 << 2))
                    
                    if (ecx_3 != 0)
                        void* ecx_4 = *(ecx_3 + 0x264)
                        
                        if (ecx_4 != 0)
                            result = *(result + 0x1b0)
                            
                            if (result != 0)
                                return sub_4cb860(ecx_4, result)
            
            result.b = 0
            return result

result.b = 0
return result
