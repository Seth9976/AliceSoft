// 函数: sub_5d54a0
// 地址: 0x5d54a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
EnterCriticalSection(*ebp)
int32_t* eax_1 = ebp[3]
int32_t* i = *eax_1

if (i != eax_1)
    do
        (*(*i[4] + 4))()
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x15) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x15) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x15) == 0)
                    i = i_2
                    i_2 = *i
    while (i != ebp[3])

void** ebx = *(ebp[3] + 4)
void** esi = ebx

if (*(ebx + 0x15) == 0)
    do
        sub_402c20(esi[2])
        esi = *esi
        void** var_14_2 = ebx
        sub_6b4d5b()
        ebx = esi
    while (*(esi + 0x15) == 0)

void* eax_3 = ebp[3]
*(eax_3 + 4) = eax_3
int32_t* eax_4 = ebp[3]
*eax_4 = eax_4
void* eax_5 = ebp[3]
*(eax_5 + 8) = eax_5
ebp[4] = 0
return LeaveCriticalSection(*ebp) __tailcall
