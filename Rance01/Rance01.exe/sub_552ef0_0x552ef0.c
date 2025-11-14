// 函数: sub_552ef0
// 地址: 0x552ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum MESSAGEBOX_RESULT result

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    enum MESSAGEBOX_RESULT* ebx_1 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (ebx_1 != 0)
        enum MESSAGEBOX_RESULT edi = ebx_1[9]
        int32_t edi_1 = edi - 1
        
        if (edi - 1 s>= 0)
            while (true)
                switch (*(ebx_1[8] + (edi_1 << 2)))
                    case 0, IDTRYAGAIN, IDCONTINUE, 0x1b, 0x2f
                    label_552f5c:
                        int32_t temp2_1 = edi_1
                        edi_1 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                        
                        continue
                    case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                            0x19, 0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                        result = *&ebx_1[1]
                        
                        if (edi_1 u< result u>> 2)
                            if (result != 0)
                                result = *ebx_1
                            
                            result = *(result + (edi_1 << 2))
                            
                            if (result == 0xffffffff)
                                goto label_552f5c
                            
                            if (sub_552960(result, arg1).b != 0)
                                goto label_552f5c
                
                result.b = 0
                return result
        
        result.b = 1
        return result

result.b = 0
return result
