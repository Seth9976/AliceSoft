// 函数: sub_5fbcb0
// 地址: 0x5fbcb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
void** arg_4
void** ebx = arg_4
void* ebp = data_797d2c
void** eax

for (int32_t* i = ebx[0x14]; i != ebx[0x15]; i = &i[1])
    eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            void* esi_1 = *(ebp + 0x30)
            arg_4 = eax
            sub_42e070(esi_1 + 0x294, &var_4, &arg_4)
            eax = var_4
            
            if (eax != *(esi_1 + 0x298))
                eax = eax[4]
                
                if (eax != 0)
                    eax[9] = arg2

if (ebx[0x1e] == 0)
    return 

eax = ebx[0x1d]

if (eax == 0xffffffff)
    return 

void* esi_2 = *(ebp + 0x30)
arg_4 = eax
sub_42e070(esi_2 + 0x294, &var_4, &arg_4)
eax = var_4

if (eax == *(esi_2 + 0x298))
    return 

eax = eax[4]

if (eax != 0)
    eax[9] = arg2
