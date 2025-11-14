// 函数: sub_67e690
// 地址: 0x67e690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return 

void* eax_1 = *(arg1 + 0x10)
void* eax_3

if (*(eax_1 + 0x2c) != 0)
    eax_3 = (*(**(eax_1 + 0x2c) + 0x10))()

int32_t ebx

if (*(eax_1 + 0x2c) != 0 && eax_3.b != 0)
    ebx.b = 1
else
    void* eax_4 = *(arg1 + 0x14)
    
    if (*(eax_4 + 0x2c) != 0)
        eax_3 = (*(**(eax_4 + 0x2c) + 0x10))()
    
    if (*(eax_4 + 0x2c) != 0 && eax_3.b != 0)
        ebx.b = 1
    else
        eax_3 = *(arg1 + 0x18)
        
        if (*(eax_3 + 0x2c) == 0)
            ebx.b = 0
        else if ((*(**(eax_3 + 0x2c) + 0x10))().b != 0)
            ebx.b = 1
        else
            ebx.b = 0

eax_3.b = *(arg1 + 0x2c)

if (eax_3.b != 0)
label_67e703:
    
    if (ebx.b == 0)
        sub_41d700(arg1 + 0x60)
else if (ebx.b != 0)
    sub_41d6e0(arg1 + 0x60)
else if (eax_3.b != 0)
    goto label_67e703

*(arg1 + 0x2c) = ebx.b
(*(*arg2 + 0x1c))(1)
