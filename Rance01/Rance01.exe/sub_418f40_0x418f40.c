// 函数: sub_418f40
// 地址: 0x418f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t arg_4
int32_t ebx = arg_4
int32_t ebp = arg1[4]
void* edi = arg1[5]

if (edi != ebp)
    arg_4 = ebx
    
    do
        void* esi_1 = *(edi - 4)
        
        if (ebx s> 0)
            sub_42e070(esi_1 + 0x18, &var_4, &arg_4)
            arg1.b = var_4 != *(esi_1 + 0x1c)
            
            if (arg1.b != 0)
                arg_4 = ebx
                sub_42e070(esi_1 + 0x18, &var_4, &arg_4)
                arg1 = var_4
                
                if (arg1 != *(esi_1 + 0x1c))
                    arg1 = arg1[4]
                    
                    if (arg1[0xb] != 0)
                        return (*(*arg1[0xb] + 0x10))()
                
                break
        
        edi -= 4
    while (edi != ebp)

arg1.b = 0
return arg1
