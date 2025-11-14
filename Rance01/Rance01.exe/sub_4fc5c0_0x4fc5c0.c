// 函数: sub_4fc5c0
// 地址: 0x4fc5c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t edx = *ebx
void* eax = ebx[1]
int32_t ecx_2 = (eax - edx) s>> 6

if (ecx_2 u> arg1)
    int32_t esi_2 = (arg1 << 6) + edx
    
    if (esi_2 != eax)
        void* var_14_1 = arg2
        int32_t var_18_1 = esi_2
        void* var_1c = eax
        void* eax_1 = sub_4feb30(eax, edx, arg2)
        void* var_14_2 = arg2
        sub_4fec30(eax_1, ebx[1])
        ebx[1] = eax_1
else if (ecx_2 u< arg1)
    sub_4fcde0(ebx, arg1 - ecx_2)
    void* ecx_5 = ebx[1]
    void* var_14_3 = arg2
    int32_t edx_6 = (ecx_5 - *ebx) s>> 6
    int32_t eax_4 = arg1 - edx_6
    sub_4fe7b0(eax_4, edx_6, ecx_5, eax_4)
    int32_t eax_5 = ebx[1]
    ebx[1] = ((arg1 - ((eax_5 - *ebx) s>> 6)) << 6) + eax_5
