//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "MathEditorBlueprintLibrary.h"

bool UMathEditorBlueprintLibrary::IntersectBox(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Origin, const FVector& Extent, bool& bOutFullyContained)
{
	const FConvexVolume& ConvexVolume = SelectionFrustum.GetConvexVolume();
	return ConvexVolume.IntersectBox(Origin, Extent, bOutFullyContained);
}

bool UMathEditorBlueprintLibrary::IntersectSphere(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Origin, const float& Radius, bool& bOutFullyContained)
{
	const FConvexVolume& ConvexVolume = SelectionFrustum.GetConvexVolume();
	return ConvexVolume.IntersectSphere(Origin, Radius, bOutFullyContained);
}

bool UMathEditorBlueprintLibrary::IntersectLineSegment(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Start, const FVector& End)
{
	const FConvexVolume& ConvexVolume = SelectionFrustum.GetConvexVolume();
	return ConvexVolume.IntersectLineSegment(Start, End);
}

bool UMathEditorBlueprintLibrary::IntersectPoint(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Point)
{
	const FConvexVolume& ConvexVolume = SelectionFrustum.GetConvexVolume();
	return ConvexVolume.IntersectPoint(Point);
}
