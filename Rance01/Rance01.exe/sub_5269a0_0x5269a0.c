// 函数: sub_5269a0
// 地址: 0x5269a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (result[0x11] - result[0x10]) s>> 2)
        void* edi_1 = *(result[0x10] + (arg1 << 2))
        
        if (edi_1 != 0)
            if (arg1 s< (result[0x11] - result[0x10]) s>> 2 && edi_1 != 0 && arg2 s>= 0)
                result = *(edi_1 + 0x10)
                
                if (arg2 s< (*(edi_1 + 0x14) - result) s>> 2)
                    void* esi_1 = result[arg2]
                    
                    if (esi_1 != 0)
                        result = *(esi_1 + 0x264)
                        
                        if (result != 0)
                        label_526a16:
                            void* ecx_1 = *(edi_1 + 0x1b0)
                            
                            if (ecx_1 != 0)
                                return sub_4cb860(ecx_1, result)
                        else if (sub_4c4100(arg2, esi_1).b != 0)
                            result = *(esi_1 + 0x264)
                            
                            if (result != 0)
                                goto label_526a16
            
            result.b = 0
            return result

result.b = 0
return result
