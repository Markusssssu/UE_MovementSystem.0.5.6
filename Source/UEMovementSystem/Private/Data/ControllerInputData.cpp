#include "Data/ControllerInputData.h"

UTexture2D* UControllerInputData::GetButtonIcon(FName ButtonName) const
{
    if (const TObjectPtr<UTexture2D>* IconPtr = ButtonIcons.Find(ButtonName))
    {
        return *IconPtr;
    }
    return nullptr;
}
