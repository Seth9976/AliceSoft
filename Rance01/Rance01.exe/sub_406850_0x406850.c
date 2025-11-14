// 函数: sub_406850
// 地址: 0x406850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1 = arg1
void* esi = arg1[2]
int32_t arg_4 = arg_4
sub_42e070(esi + 0x294, &result_1, &arg_4)
int32_t* result = result_1

if (result != *(esi + 0x298))
    void* esi_1 = result[4]
    
    if (esi_1 != 0)
        int32_t* ecx_2 = *(esi_1 + 0xd0)
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))()
            *(esi_1 + 0xd0) = 0
        
        result.b = 1
        return result

result.b = 0
return result
