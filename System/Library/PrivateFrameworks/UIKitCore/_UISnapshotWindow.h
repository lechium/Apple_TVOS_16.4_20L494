//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

__attribute__((visibility("hidden")))
@interface _UISnapshotWindow : UIWindow
{
    _Bool __extendsScreenSceneLifetime;	// 304 = 0x130
}

+ (_Bool)_isSystemWindow;	// IMP=0x0060000000ce64f9
@property _Bool _extendsScreenSceneLifetime; // @synthesize _extendsScreenSceneLifetime=__extendsScreenSceneLifetime;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;	// IMP=0x0000000000ce6543
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000000ce653b
- (_Bool)_shouldZoom;	// IMP=0x0000000000ce6533
- (void)_updateTransformLayerForClassicPresentation;	// IMP=0x0000000000ce652d
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x0000000000ce6527
- (_Bool)_canDisableMirroring;	// IMP=0x0000000000ce651f
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;	// IMP=0x0000000000ce6517
- (_Bool)canBecomeKeyWindow;	// IMP=0x0000000000ce650f
- (void)_setFirstResponder:(id)arg1;	// IMP=0x0000000000ce6509
- (_Bool)_isSettingFirstResponder;	// IMP=0x0000000000ce6501

@end

