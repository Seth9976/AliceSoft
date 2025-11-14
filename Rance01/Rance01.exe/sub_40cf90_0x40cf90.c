// 函数: sub_40cf90
// 地址: 0x40cf90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx = arg1[1]
int128_t* esi = *arg1

if (esi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx, ebx_1)
    arg1[1] = ebx_1 + esi

int32_t* result = *(arg2 + 0xc)
int32_t* i = *result

if (i != result)
    do
        result = i[4]
        
        if (result != 0 && result[0x33] != 0)
            result = sub_416780(&i[3], arg1)
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                result = i[1]
                
                if (*(result + 0x15) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0x15) == 0)
                    i = result
                    result = *i
    while (i != *(arg2 + 0xc))

return result
