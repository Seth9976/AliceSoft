// 函数: sub_5e9dc0
// 地址: 0x5e9dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* arg_4
int32_t* ebp = arg_4
int32_t* i = *ebp

if (i == ebp[1])
    return 

void* ebx_1 = data_797d2c

do
    void** eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            void* esi_1 = *(ebx_1 + 0x30)
            arg_4 = eax
            sub_42e070(esi_1 + 0x294, &var_4, &arg_4)
            eax = var_4
            
            if (eax != *(esi_1 + 0x298))
                eax = eax[4]
                
                if (eax != 0)
                    eax[9] = arg2
    
    i = &i[1]
while (i != ebp[1])
