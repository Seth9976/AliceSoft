// 函数: sub_551310
// 地址: 0x551310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg2
uint32_t ebx = arg1
uint32_t result = ecx[1] u>> 2
int32_t esi = 0
arg1 = result

if (result s> 0)
    while (true)
        result = *(ebx + 4)
        
        if (esi u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *ebx
        
        int32_t edi_1 = *(result + (esi << 2))
        result = ecx[1]
        
        if (esi u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *ecx
        
        void* ecx_1 = *(ebx + 0x14)
        int32_t eax_1 = *(result + (esi << 2))
        int32_t* edx_8
        
        if (edi_1 u< (*(ecx_1 + 0xc) - *(ecx_1 + 8)) s>> 2)
            edx_8 = *(*(ecx_1 + 8) + (edi_1 << 2))
        else
            edx_8 = nullptr
        
        if (eax_1 u< (*(ecx_1 + 0xc) - *(ecx_1 + 8)) s>> 2)
            result = *(*(ecx_1 + 8) + (eax_1 << 2))
        else
            result = 0
        
        if (edx_8 == 0 || result == 0)
            result.b = 0
            return result
        
        if (sub_5506c0(edx_8, result).b == 0)
            result.b = 0
            return result
        
        result = *(ebx + 4)
        
        if (esi u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *ebx
        
        *(result + (esi << 2)) = edi_1
        esi += 1
        
        if (esi s>= arg1)
            break
        
        ecx = arg2

result.b = 1
return result
