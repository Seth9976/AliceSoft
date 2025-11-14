// 函数: sub_551c90
// 地址: 0x551c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1[2]
arg1[1] = 0

if (eax u<= 0xc)
    arg1[2] = eax + 0xc
    
    if (eax != 0xfffffff4)
        int32_t lpMem = *arg1
        int32_t eax_3
        
        if (lpMem == 0)
            eax_3 = HeapAlloc(data_797df4, HEAP_NONE, eax + 0xc)
        else
            eax_3 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, eax + 0xc)
        
        *arg1 = eax_3
        
        if (eax_3 == 0)
            eax_3.b = 0
            return eax_3

arg1[1] = 0xc
int32_t* esi_1 = *arg1
esi_1[1] = arg3
*esi_1 = arg2
esi_1[2] = arg4
int32_t eax_4
eax_4.b = 1
return eax_4
