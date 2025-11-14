// 函数: sub_588420
// 地址: 0x588420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0x54)
int32_t* i = *result

if (i != result)
    do
        int32_t* eax = i[7]
        (*(*eax + 4))(eax)
        int32_t* eax_1 = i[7]
        result = (*(*eax_1 + 8))(eax_1)
        
        if (result == 1)
            int32_t* eax_2 = i[7]
            (*(*eax_2 + 8))(eax_2)
            int32_t __saved_ecx
            result = sub_58b3d0(arg1 + 0x50, &__saved_ecx, i)
            i = *result
        else if (*(i + 0x21) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x21) != 0)
                result = i[1]
                
                if (*(result + 0x21) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x21) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0x21) == 0)
                    i = result
                    result = *i
    while (i != *(arg1 + 0x54))

return result
