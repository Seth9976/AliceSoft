// 函数: sub_612ee0
// 地址: 0x612ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(*(arg1 + 0xd0) + 0xc)

if (esi == 0)
    arg1.b = 0
    return arg1

int32_t edi
int32_t var_14 = edi
int32_t* __saved_ecx_1 = (*(*esi + 0x2c))()
int32_t ebx = 0
int32_t* __saved_ecx = __saved_ecx_1
int32_t* eax_1

if (__saved_ecx_1 s> 0)
    do
        int32_t eax_3 = (*(*esi + 0x30))(ebx)
        eax_1 = (*(*esi + 0x18))(eax_3)
        
        if (*(arg2 + 0x58) == eax_1)
            int32_t* edi_3 = (*(*esi + 4))(eax_3)
            
            if (edi_3 != 0)
                int32_t* ebp = (*(*edi_3 + 0x18))()
                
                if (ebp != 0)
                    eax_1 = (*(*edi_3 + 0x14))()
                    
                    if (*(arg2 + 0x30) * 4 s< eax_1)
                        *arg3 = ebp[*(arg2 + 0x30)]
                        int32_t* eax_9
                        eax_9.b = 1
                        return eax_9
                
                __saved_ecx_1 = __saved_ecx
        
        ebx += 1
    while (ebx s< __saved_ecx_1)

eax_1.b = 0
return eax_1
