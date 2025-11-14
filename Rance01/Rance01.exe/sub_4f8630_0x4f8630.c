// 函数: sub_4f8630
// 地址: 0x4f8630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
sub_4c2050(ecx, &arg1[0x2d])
int32_t* ecx_1 = arg1[0x29]
int32_t* edx = arg1[0x2a]

if (ecx_1 != edx)
    int32_t* eax_1 = edx
    
    if (edx != edx)
        do
            *ecx_1 = *eax_1
            ecx_1[1] = eax_1[1]
            ecx_1[2] = eax_1[2]
            eax_1 = &eax_1[3]
            ecx_1 = &ecx_1[3]
        while (eax_1 != edx)
    
    arg1[0x2a] = ecx_1

void* ecx_2 = arg1[0x10]
void* eax_2 = arg1[0x11]

if (ecx_2 != eax_2)
    int32_t* var_14_1 = arg1
    void* var_18_1 = ecx_2
    void* var_1c_1 = eax_2
    void* eax_3 = sub_4feb30(eax_2, arg1, ecx_2)
    int32_t* var_14_2 = arg1
    sub_4fec30(eax_3, arg1[0x11])
    arg1[0x11] = eax_3

sub_4f8740(arg1)
int32_t* eax_6 = arg1[0x18]
int32_t* ecx_3 = arg1[0x19]

if (eax_6 != ecx_3)
    int32_t* var_14_4 = arg1
    void* eax_7
    int32_t edx_3
    eax_7, edx_3 = sub_4feba0(eax_6, arg1, ecx_3, ecx_3)
    int32_t* var_1c_2 = arg1
    int32_t var_20_1 = arg1[0x19]
    sub_4fec80(eax_7, edx_3)
    arg1[0x19] = eax_7

int32_t* eax_10 = arg1[0x1c]
int32_t edx_4 = arg1[0x1d]

if (eax_10 != edx_4)
    int32_t* var_14_5 = arg1
    int32_t var_18_3 = edx_4
    arg1[0x1d] = sub_4febf0(eax_10, edx_4, arg1)

sub_501490(&arg1[0xb])
bool cond:0 = arg1[0x25] u< 0x10
arg1[0x24] = 0

if (cond:0)
    arg1[0x20].b = 0
    return 0

*arg1[0x20] = 0
return 0
