// 函数: sub_425060
// 地址: 0x425060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[3].b == 0)
    arg1.b = 1
    return arg1

sub_425240(arg1)
int32_t* eax = arg1[2]

if (eax != 0)
    (*(*eax + 8))(eax)
    arg1[2] = 0

if (CoCreateInstance(&data_72cbd8, 0, CLSCTX_INPROC_SERVER, &data_72cbc8, &arg1[2]) s>= 0
        && arg1[2] != 0)
    int32_t eax_2 = GetWindowLongA(arg2, 0xfffffffa)
    int32_t* ecx_2 = arg1[2]
    
    if ((*(*ecx_2 + 0x1c))(ecx_2, eax_2, 0x800) s>= 0)
        int32_t* eax_5 = arg1[2]
        int32_t* eax_6
        int32_t ecx_4
        eax_6, ecx_4 = (*(*eax_5 + 0x10))(eax_5, 4, sub_425150, arg1, 1)
        
        if (eax_6 == 0)
            for (int32_t** i = arg1[4]; i != arg1[5]; i = &i[1])
                if (sub_425490(*i, arg2).b == 0)
                    sub_425240(arg1)
                    int32_t* eax_8 = arg1[2]
                    
                    if (eax_8 != 0)
                        (*(*eax_8 + 8))(eax_8)
                        arg1[2] = 0
                    
                    eax_8.b = 0
                    return eax_8
            
            eax_6.b = 1
            return eax_6
    
    sub_425220(arg1)

HRESULT eax_1
eax_1.b = 0
return eax_1
