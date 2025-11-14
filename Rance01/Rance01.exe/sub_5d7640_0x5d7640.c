// 函数: sub_5d7640
// 地址: 0x5d7640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = *(arg2 + 4) == 0
int32_t* var_10 = arg1

if (not(cond:0))
    int32_t* var_c
    sub_42e070(arg2 + 0x14, &var_c, &var_10)
    arg1 = var_c
    
    if (arg1 != *(arg2 + 0x18))
        int32_t* esi_1 = arg1[4]
        
        if (esi_1 != 0)
            esi_1[2] = arg4
            int32_t var_1c_3 = arg5
            return (*(**esi_1 + 0x44))(arg3, sub_5d7a00(arg2, esi_1))

arg1.b = 0
return arg1
