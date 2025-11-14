// 函数: sub_4172d0
// 地址: 0x4172d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = arg2
int32_t* esi = arg1

if (esi != result)
    int32_t* ebx_1 = &esi[1]
    
    if (ebx_1 != result)
        do
            void* edi_1 = *ebx_1
            int32_t* ebp_1 = ebx_1
            
            if (sub_416ef0(edi_1, *esi) == 0)
                void* esi_1 = &ebx_1[-1]
                result = sub_416ef0(edi_1, ebx_1[-1])
                
                while (result.b != 0)
                    *ebp_1 = *esi_1
                    void* ecx_4 = *(esi_1 - 4)
                    ebp_1 = esi_1
                    esi_1 -= 4
                    result = sub_416ef0(edi_1, ecx_4)
                
                esi = arg1
                *ebp_1 = edi_1
            else
                int32_t eax_7 = ((ebx_1 - esi) s>> 2) * 4
                result = sub_6b49d0(ebx_1 - eax_7 + 4, esi, eax_7)
                *esi = edi_1
            
            ebx_1 = &ebx_1[1]
        while (ebx_1 != arg2)

return result
