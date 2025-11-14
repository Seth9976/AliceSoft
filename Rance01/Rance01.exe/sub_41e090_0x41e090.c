// 函数: sub_41e090
// 地址: 0x41e090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1

if (arg2 == 1)
    int32_t* eax = sub_5f7370(*data_797da0, *(ebp + 4))
    
    if (eax != 0 && *(eax[3] + 0x4c) != 0)
        bool cond:1_1 = *(ebp + 0x31) == 0
        *(ebp + 0x30) = 0
        
        if (cond:1_1)
            sub_41e890(ebp)
        else
            char* esi_1 = data_797d44
            int32_t var_4 = 0
            arg1 = nullptr
            
            if (sub_424db0(esi_1).b != 0 && (***(esi_1 + 8))(&var_4, &arg1).b != 0)
                sub_41d680(ebp + 0x58, var_4, arg1)
                sub_41e8f0(ebp)

for (int32_t* i = *(ebp + 0x58); i != *(ebp + 0x5c); i = &i[1])
    (*(**i + 0x3c))(*(ebp + 0x68), arg2)
