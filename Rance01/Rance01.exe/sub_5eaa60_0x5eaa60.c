// 函数: sub_5eaa60
// 地址: 0x5eaa60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 8)

if (i == *(arg1 + 0xc))
    return 

void* ebx_1 = data_797d2c

do
    void** eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            void* esi_1 = *(ebx_1 + 0x30)
            void** var_8 = eax
            int32_t* var_4
            sub_42e070(esi_1 + 0x294, &var_4, &var_8)
            eax = var_4
            
            if (eax != *(esi_1 + 0x298))
                eax = eax[4]
                
                if (eax != 0)
                    eax[9] = arg2
    
    i = &i[1]
while (i != *(arg1 + 0xc))
