// 函数: sub_59a4a0
// 地址: 0x59a4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (**arg2)()
int32_t eax_3

if (eax_1 == 0xa)
    eax_3 = (*(*arg2 + 0xc))()

if (eax_1 != 0xa || eax_3 != 1)
    int32_t eax_5
    
    if ((**arg2)() != 0xe)
        eax_5.b = 0
        return eax_5
    
    if ((*(*arg2 + 0xc))() != 0xffffffff)
        eax_5.b = 0
        return eax_5

int128_t* ebp = (*(*arg2 + 8))()

if (ebp s> 0)
    sub_65a090(arg1, ebp)
    int32_t edi_1 = 0
    
    if (ebp s> 0)
        int32_t* eax_13
        
        do
            eax_13 = (*(*arg2 + 0x10))(edi_1)
            
            if (eax_13 == 0)
                eax_13.b = 0
                return eax_13
            
            *(*arg1 + (edi_1 << 2)) = *eax_13
            edi_1 += 1
        while (edi_1 s< ebp)
        
        eax_13.b = 1
        return eax_13
else
    int128_t* ecx_5 = arg1[1]
    int128_t* edi = *arg1
    
    if (edi != ecx_5)
        int32_t ebx_1 = 0 s>> 2 << 2
        sub_6b49d0(edi, ecx_5, ebx_1)
        arg1[1] = ebx_1 + edi

int128_t* eax_8
eax_8.b = 1
return eax_8
