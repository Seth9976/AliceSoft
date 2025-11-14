// 函数: sub_4bfef0
// 地址: 0x4bfef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xc) = 0

int32_t ebx = *(arg1 + 0x38)
int32_t ebx_1 = ebx + *(arg1 + 0x34)
int32_t result

if (ebx + *(arg1 + 0x34) s>= 0 && ebx_1 s> 0)
    int32_t eax_2 = (*(*ebp + 0x10))()
    int32_t eax_4 = (*(*ebp + 0x14))()
    char ecx_3 = ebx_1.b
    int32_t esi_2 = eax_2 s>> ecx_3
    
    if (esi_2 s< 1)
        esi_2 = 1
    
    int32_t edi_2 = eax_4 s>> ecx_3
    
    if (edi_2 s< 1)
        edi_2 = 1
    
    ebx_1.b = (*(*ebp + 0x24))()
    arg2.b = ebx_1.b
    void* ebx_2
    
    if (ebx_1.b == 0 || (*(*ebp + 0x28))() == 0)
        ebx_2 = arg1
        void* eax_11 = *(ebx_2 + 0x3c)
        
        if (*(eax_11 + 0x20) != 0)
            result = (*(**(eax_11 + 0x20) + 0xc))(esi_2, edi_2, 0x20)
        else
            result = 0
        
        *(ebx_2 + 0xc) = result
        
        if (result == 0)
            result.b = 0
            return result
    else
        ebx_2 = arg1
        void* eax_9 = *(ebx_2 + 0x3c)
        
        if (*(eax_9 + 0x20) != 0)
            result = (*(**(eax_9 + 0x20) + 8))(esi_2, edi_2, 0x20)
        else
            result = 0
        
        *(ebx_2 + 0xc) = result
        
        if (result == 0)
            result.b = 0
            return result
    
    if (arg2.b != 0)
        int32_t* ebx_3 = *(ebx_2 + 0xc)
        
        if ((*(*ebx_3 + 0x18))() != 0x20)
            result.b = 0
            return result
        
        if (sub_4c0030(ebx_3, esi_2, edi_2, ebp, eax_2, eax_4).b == 0)
            result.b = 0
            return result

result.b = 1
return result
