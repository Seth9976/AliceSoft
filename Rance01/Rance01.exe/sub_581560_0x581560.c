// 函数: sub_581560
// 地址: 0x581560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_581620(arg1)
void* eax = sub_4022d0(0x74b378, 0x74ad08)
int32_t* ecx

if (eax.b != 0)
    ecx = data_797d64

int32_t* edi

if (eax.b == 0 || ecx == 0)
    edi = nullptr
else
    (**ecx)()
    edi = data_797d64

arg1[2] = edi

if (edi != 0)
    uint32_t eax_3 = zx.d(sub_4022d0(0x74b388, 0x757578))
    int32_t eax_4 = neg.d(eax_3)
    eax = sbb.d(eax_4, eax_4, eax_3 != 0) & data_797d3c
    arg1[3] = eax
    
    if (eax != 0)
        arg1[4] = eax
        int32_t eax_7 = (*(*edi + 0xc))(arg2, arg3, 0x20)
        arg1[8] = eax_7
        
        if (eax_7 != 0)
            eax_7 = (*(*arg1[2] + 0xc))(arg2, arg3, 0x20)
            arg1[9] = eax_7
            
            if (eax_7 != 0)
                arg1[0xa] = arg2
                arg1[0xb] = arg3
                eax_7.b = 1
                return eax_7
        
        eax_7.b = 0
        return eax_7

eax.b = 0
return eax
