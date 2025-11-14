// 函数: sub_594440
// 地址: 0x594440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_4 = data_797d98
int32_t eax

if (ecx_4 != 0)
    eax = (**ecx_4)()
else
    eax = 0

int32_t ecx = arg1[0xf]
arg1[0xb] = eax
int32_t edi = 0
HANDLE handles = arg1[0xe]
int32_t var_4 = ecx
enum WAIT_EVENT i

for (i = WaitForMultipleObjects(2, &handles, 0, 1); i != WAIT_OBJECT_0; 
        i = WaitForMultipleObjects(2, &handles, 0, 1))
    if (i == 0x1)
        i = arg1[7]
        
        if (i != WAIT_OBJECT_0)
            edi += 1
            
            if (edi s>= i)
                break
        
        int32_t* ecx_1 = data_797d98
        int32_t eax_3
        
        if (ecx_1 != 0)
            eax_3 = (**ecx_1)()
        else
            eax_3 = 0
        
        arg1[0xb] = eax_3
    
    if (arg1[0xb] != 0)
        int32_t eax_6 = (*(*arg1 + 0x2c))()
        
        if ((*(*arg1 + 0x28))() u>= eax_6)
            HANDLE hEvent = arg1[0xf]
            
            if (hEvent != 0)
                SetEvent(hEvent)

arg1[0xb] = 0
i.b = 1
return i
