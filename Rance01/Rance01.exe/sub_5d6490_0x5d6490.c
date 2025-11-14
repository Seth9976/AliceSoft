// 函数: sub_5d6490
// 地址: 0x5d6490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1 = arg1
char* esi = data_797d94
char* result

if (sub_5d57f0(esi).b != 0)
    void* esi_1 = *(esi + 0x3c)
    bool cond:0_1 = *(esi_1 + 4) == 0
    char* arg_4 = arg_4
    
    if (not(cond:0_1))
        sub_42e070(esi_1 + 0x18, &result_1, &arg_4)
        result = result_1
        
        if (result != *(esi_1 + 0x1c))
            result = *(result + 0x10)
            
            if (result != 0)
                return (*(**result + 0x18))()

result.b = 0
return result
