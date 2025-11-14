// 函数: sub_5009f0
// 地址: 0x5009f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1

for (int32_t* i = *(arg1 + 0x4c); i != *(arg1 + 0x50); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        if (ecx == arg2)
            if (ecx != 0)
                sub_4fff40(ecx)
                int32_t* var_1c_3 = ecx
                sub_6b4d5b()
            
            *i = 0
            return 1
        
        if (sub_5009f0(arg2) != 0)
            return 1

return 0
