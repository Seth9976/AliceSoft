// 函数: sub_6871a0
// 地址: 0x6871a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_11 = *(arg1 + 0x14)
void* eax_1
int32_t ecx

if (*(eax_11 + 0x2c) != 0)
    eax_1, ecx = (*(**(eax_11 + 0x2c) + 0x10))()

int32_t ebx

if (*(eax_11 + 0x2c) != 0 && eax_1.b != 0)
    ebx.b = 1
else
    void* eax_2 = *(arg1 + 0x18)
    
    if (*(eax_2 + 0x2c) != 0)
        eax_1, ecx = (*(**(eax_2 + 0x2c) + 0x10))()
    
    if (*(eax_2 + 0x2c) != 0 && eax_1.b != 0)
        ebx.b = 1
    else
        void* eax_4 = *(arg1 + 0x1c)
        
        if (*(eax_4 + 0x2c) != 0)
            eax_1, ecx = (*(**(eax_4 + 0x2c) + 0x10))()
        
        if (*(eax_4 + 0x2c) != 0 && eax_1.b != 0)
            ebx.b = 1
        else
            eax_1 = *(arg1 + 0x20)
            
            if (*(eax_1 + 0x2c) == 0)
                ebx.b = 0
            else
                eax_1, ecx = (*(**(eax_1 + 0x2c) + 0x10))()
                
                if (eax_1.b != 0)
                    ebx.b = 1
                else
                    ebx.b = 0

eax_1.b = *(arg1 + 0x11)

if (eax_1.b != 0)
label_687245:
    
    if (ebx.b == 0)
        for (int32_t* i = *(arg1 + 0xa8); i != *(arg1 + 0xac); i = &i[1])
            eax_1 = (*(**i + 0x44))(*(arg1 + 0xb8))
else if (ebx.b != 0)
    int32_t* i_1 = *(arg1 + 0xa8)
    
    if (i_1 != *(arg1 + 0xac))
        int32_t eax_9
        
        do
            eax_9 = (*(**i_1 + 0x40))(*(arg1 + 0xb8))
            i_1 = &i_1[1]
        while (i_1 != *(arg1 + 0xac))
        
        *(arg1 + 0x11) = ebx.b
        return eax_9
else if (eax_1.b != 0)
    goto label_687245

*(arg1 + 0x11) = ebx.b
return eax_1
