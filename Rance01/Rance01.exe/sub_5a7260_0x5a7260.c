// 函数: sub_5a7260
// 地址: 0x5a7260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx
int128_t* var_4 = ecx
int32_t* result = arg1
int128_t* edi = nullptr
void* ebx = nullptr

if (result != 0)
    void* esi_1 = *result
    
    if (esi_1 != 0)
        var_4 = *(esi_1 + 0x260)
        int32_t ebp_1 = *(esi_1 + 0x268)
        
        if (arg2 != 0)
            edi = *arg2
        
        if (arg3 != 0)
            ebx = *arg3
        
        void* var_18_1 = ebx
        void* var_1c_1 = esi_1
        int128_t* edx
        int128_t* eax_4 = sub_5a7330(edi, edx, ecx)
        int128_t* edi_1
        
        if (edi == 0)
            edi_1 = var_4
        else
            edi_1 = var_4
            eax_4 = sub_5a6220(sub_5a4280(esi_1, edi, 0x4000, 0xffffffff), edi_1, ebp_1, edi)
            *arg2 = 0
        
        if (ebx != 0)
            eax_4 = sub_5a6220(sub_5a4280(esi_1, ebx, 0x4000, 0xffffffff), edi_1, ebp_1, ebx)
            *arg3 = 0
        
        sub_5a6220(eax_4, edi_1, ebp_1, esi_1)
        result = arg1
        *result = 0

return result
