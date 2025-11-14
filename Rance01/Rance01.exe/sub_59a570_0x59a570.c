// 函数: sub_59a570
// 地址: 0x59a570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t eax_1 = (**ebp)()
int32_t eax_3

if (eax_1 == 0xd)
    eax_3 = (*(*ebp + 0xc))()

if (eax_1 != 0xd || eax_3 != 1)
    int32_t eax_5
    
    if ((**ebp)() != 0x11)
        eax_5.b = 0
        return eax_5
    
    if ((*(*ebp + 0xc))() != 0xffffffff)
        eax_5.b = 0
        return eax_5

int32_t* eax_8 = (*(*ebp + 8))()
int32_t* arg_4

if (eax_8 s<= 0)
    int32_t* eax_9 = arg_4
    sub_59acd0(eax_9, &arg_4, *eax_9, eax_9[1])
    void** eax_10
    eax_10.b = 1
    return eax_10

sub_59ac60(eax_8, arg_4)
int32_t ebx = 0

if (eax_8 s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t esi_2 = *arg_4 + edi_1
        int32_t* eax_14
        int32_t* edx_8
        eax_14, edx_8 = (*(*ebp + 0x10))(ebx)
        int32_t var_14_3 = esi_2
        char eax_12
        eax_12, ebp = sub_598fe0(eax_14, edx_8)
        
        if (eax_12 == 0)
            return 0
        
        ebx += 1
        edi_1 += 0x10
    while (ebx s< eax_8)

return 1
