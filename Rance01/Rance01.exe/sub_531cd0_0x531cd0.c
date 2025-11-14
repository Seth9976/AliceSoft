// 函数: sub_531cd0
// 地址: 0x531cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg2[1]
int32_t edx = *arg2
int32_t eax_2 = (ecx - edx) s>> 5

if (eax_2 u> arg1)
    eax_2 = edx + (arg1 << 5)
    
    if (eax_2 != ecx)
        void* eax_3 = sub_532d60(eax_2, edx, ecx, ecx)
        int32_t* var_14_2 = arg2
        int32_t eax_6 = sub_5327d0(eax_3, arg2[1])
        arg2[1] = eax_3
        return eax_6
else if (eax_2 u< arg1)
    sub_532000(arg2, arg1 - eax_2)
    void* ecx_2 = arg2[1]
    int32_t* var_14_3 = arg2
    int32_t eax_9 = (ecx_2 - *arg2) s>> 5
    int32_t edx_5 = arg1 - eax_9
    sub_5325e0(eax_9, edx_5, ecx_2, edx_5)
    eax_2 = arg2[1]
    arg2[1] = ((arg1 - ((eax_2 - *arg2) s>> 5)) << 5) + eax_2

return eax_2
