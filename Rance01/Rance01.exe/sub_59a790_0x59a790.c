// 函数: sub_59a790
// 地址: 0x59a790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t eax = (**arg1)()
int32_t eax_2

if (eax == 0xa)
    eax_2 = (*(*arg1 + 0xc))()

int32_t result

if (eax == 0xa && eax_2 == 1)
label_59a7d0:
    int32_t eax_7 = (ebx[1] - *ebx) s>> 2
    arg2 = eax_7
    void* eax_8 = *arg1
    
    if (eax_7 s<= 0)
        return (*(eax_8 + 0x20))() != 0
    
    if ((*(eax_8 + 0x18))(&arg2, 1).b != 0)
        if (arg2 s> 0)
            int32_t edi_1 = 0
            
            do
                if ((*(*arg1 + 0x14))(edi_1, *ebx + (edi_1 << 2)).b == 0)
                    result.b = 0
                    return result
                
                edi_1 += 1
            while (edi_1 s< arg2)
        
        result.b = 1
        return result
else if ((**arg1)() == 0xe && (*(*arg1 + 0xc))() == 0xffffffff)
    goto label_59a7d0

result.b = 0
return result
