// 函数: sub_6b2a50
// 地址: 0x6b2a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg1 == 0)
    if (CoCreateInstance(&data_72cbf8, 0, CLSCTX_INPROC_SERVER, &data_72cbe8, arg1) s< 0)
        sub_604c90("DirectDraw")
        enum MESSAGEBOX_RESULT eax_2
        eax_2.b = 0
        return eax_2
    
    int32_t* eax_3 = *arg1
    
    if ((*(*eax_3 + 0x48))(eax_3, 0) s< 0)
        sub_604c90("IDirectDraw2::Initialize()")
        enum MESSAGEBOX_RESULT eax_5
        eax_5.b = 0
        return eax_5
    
    *(arg1 + 0x15) = 1
    sub_4f6d70(&arg1[1])
    int32_t* eax_6 = *arg1
    
    if ((*(*eax_6 + 0x20))(eax_6, 0, 0, arg1, sub_6b2ae0) s< 0)
        sub_604c90(0x72cd14)
        enum MESSAGEBOX_RESULT eax_7
        eax_7.b = 0
        return eax_7

int32_t eax
eax.b = 1
return eax
