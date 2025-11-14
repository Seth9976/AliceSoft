// 函数: sub_5d85d0
// 地址: 0x5d85d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = *(arg2 + 4) == 0
int32_t* var_8 = arg1

if (not(cond:0))
    int32_t* var_4
    sub_42e070(arg2 + 0x18, &var_4, &var_8)
    arg1 = var_4
    
    if (arg1 != *(arg2 + 0x1c))
        int32_t* esi_1 = arg1[4]
        
        if (esi_1 != 0)
            (*(**esi_1 + 0x34))(0, sub_5d8b00(arg2, esi_1), 0)
            jump(*(**esi_1 + 0x14))

arg1.b = 0
return arg1
