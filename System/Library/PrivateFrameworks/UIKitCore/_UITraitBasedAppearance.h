//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UITraitBasedAppearance
{
    UITraitCollection *_traitCollection;	// 40 = 0x28
}

+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;	// IMP=0x00600000007598cd
+ (_Bool)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;	// IMP=0x00600000007597f5
+ (_Bool)_hasAnyCustomizations;	// IMP=0x006000000075961c
+ (void)_setHasAnyCustomizations;	// IMP=0x006000000075960f
- (id)_traitCollection;	// IMP=0x0000000000759ab2
- (void)_invalidateAppearanceInWindow:(id)arg1;	// IMP=0x0000000000759a52
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;	// IMP=0x00000000007599ee
- (void)dealloc;	// IMP=0x000000000075988b

@end

