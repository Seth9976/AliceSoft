// 函数: sub_4c9210
// 地址: 0x4c9210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** esi = arg1[0x19]

if (esi != 0)
    int32_t* ecx_1 = esi[1]
    *esi = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        esi[1] = 0
    
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** var_14_1 = esi
    esi[2] = 0
    sub_6b4d5b()
    arg1[0x19] = 0

if (arg1[0x15].b != 0)
    sub_576800(arg1[0x1a])
    arg1[0x15].b = 0

int32_t* esi_2 = arg1[0x14]

if (esi_2 != 0)
    sub_4eb640(esi_2)
    int32_t* ecx_2 = arg1[0x1d]
    arg1[0x14] = 0
    sub_4c0e30(ecx_2)

int32_t* esi_3 = arg1[0x16]

if (esi_3 != 0)
    sub_4dd8d0(esi_3)
    arg1[0x16] = 0

int32_t* esi_4 = arg1[0x17]

if (esi_4 != 0)
    sub_4c3d90(esi_4)
    arg1[0x17] = 0

arg1[0x18] = 0

if (arg1[0xb].b != 0)
    sub_576800(arg1[0x1a])
    arg1[0xb].b = 0

struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** esi_6 = arg1[0xa]

if (esi_6 != 0)
    sub_4b2b90(esi_6)
    int32_t* eax_2 = arg1[0x1d]
    arg1[0xa] = 0
    sub_4c0e30(eax_2)

bool cond:0 = arg1[0x11] u< 0x10
void* result = &arg1[0xc]
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
arg1[0x13] = 0

if (arg1[6].b != 0)
    sub_576800(arg1[0x1a])
    arg1[6].b = 0

struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** esi_8 = arg1[9]

if (esi_8 != 0)
    sub_4daaf0(esi_8)
    struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** var_14_5 =
        esi_8
    sub_6b4d5b()
    arg1[9] = 0

int32_t* esi_9 = arg1[5]

if (esi_9 != 0)
    sub_4d96d0(esi_9)
    int32_t* edx_2 = arg1[0x1d]
    arg1[5] = 0
    sub_4c0e30(edx_2)

result.b = arg1[3].b

if (result.b != 0)
    result = sub_576800(arg1[0x1a])
    arg1[3].b = 0

void** esi_11 = arg1[2]

if (esi_11 != 0)
    sub_5028f0(esi_11)
    int32_t* ecx_3 = arg1[0x1d]
    arg1[2] = 0
    result = sub_4c0e30(ecx_3)

int32_t* esi_12 = arg1[4]

if (esi_12 != 0)
    result = sub_4f8480(esi_12)
    arg1[4] = 0

arg1[1].b = 0
*arg1 = 0
return result
