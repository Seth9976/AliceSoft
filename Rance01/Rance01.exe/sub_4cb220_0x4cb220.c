// 函数: sub_4cb220
// 地址: 0x4cb220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = 0
int32_t edi_2 = (arg2[1] - *arg2) s>> 2
void* const result

if (edi_2 s> 0)
    do
        int32_t eax
        
        if (esi s>= 0)
            eax = *arg2
        
        if (esi s< 0 || esi s>= (arg2[1] - eax) s>> 2)
            result = nullptr
        else
            result = *(eax + (esi << 2))
        
        int32_t ecx_4 = *arg1
        
        if (esi s>= (arg1[1] - ecx_4) s>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            if (*(ecx_4 + (esi << 2)) == 0)
                result.b = 0
                return result
            
            int32_t* ecx_5 = *(ecx_4 + (esi << 2))
            
            if (*ecx_5 != *(result + 8))
                result.b = 0
                return result
            
            if (sub_4cab40(ecx_5, result, arg3, arg4).b == 0)
                result.b = 0
                return result
        else if (*(ecx_4 + (esi << 2)) != result)
            result.b = 0
            return result
        
        esi += 1
    while (esi s< edi_2)

result.b = 1
return result
