// 函数: sub_6b500d
// 地址: 0x6b500d
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int32_t eax = DecodePointer(data_79821c)
int32_t* esi = DecodePointer(data_798218)

if (esi u>= eax)
    void* edi_2 = esi - eax
    
    if (edi_2 + 4 u>= 4)
        uint32_t eax_3 = _msize_base(eax)
        
        if (eax_3 u>= edi_2 + 4)
            goto label_6b50aa
        
        uint32_t eax_5 = 0x800
        
        if (eax_3 u< 0x800)
            eax_5 = eax_3
        
        uint32_t eax_6 = eax_5 + eax_3
        int32_t eax_7
        
        if (eax_6 u>= eax_3)
            eax_7 = __realloc_crt(eax, eax_6)
        
        if (eax_6 u>= eax_3 && eax_7 != 0)
        label_6b5091:
            esi = eax_7 + (edi_2 s>> 2 << 2)
            data_79821c = EncodePointer(eax_7)
        label_6b50aa:
            *esi = EncodePointer(arg1)
            data_798218 = EncodePointer(&esi[1])
            return arg1
        
        if (eax_3 + 0x10 u>= eax_3)
            eax_7 = __realloc_crt(eax, eax_3 + 0x10)
            
            if (eax_7 != 0)
                goto label_6b5091

return 0
