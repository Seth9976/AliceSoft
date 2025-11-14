// 函数: sub_612fa0
// 地址: 0x612fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(*(arg1 + 0xd0) + 0xc)

if (esi == 0)
    arg1.b = 0
    return arg1

int32_t edi
int32_t var_14 = edi
int32_t* __saved_ecx_1 = (*(*esi + 0x2c))()
int32_t ebp = 0
int32_t* __saved_ecx = __saved_ecx_1
int32_t* eax_1

if (__saved_ecx_1 s> 0)
    do
        int32_t eax_3 = (*(*esi + 0x30))(ebp)
        eax_1 = (*(*esi + 0x18))(eax_3)
        
        if (*(arg2 + 0x58) == eax_1)
            eax_1 = (*(*esi + 0x3c))(eax_3)
            
            if (eax_1 != 0xffffffff)
                int32_t* edi_3 = (*(*esi + 4))(eax_1)
                
                if (edi_3 != 0)
                    int32_t* ebx = (*(*edi_3 + 0x18))()
                    
                    if (ebx != 0)
                        eax_1 = (*(*edi_3 + 0x14))()
                        
                        if (*(arg2 + 0x30) * 4 s< eax_1)
                            *arg3 = ebx[*(arg2 + 0x30)]
                            int32_t* eax_10
                            eax_10.b = 1
                            return eax_10
                    
                    __saved_ecx_1 = __saved_ecx
        
        ebp += 1
    while (ebp s< __saved_ecx_1)

eax_1.b = 0
return eax_1
