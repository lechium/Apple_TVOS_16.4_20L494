//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardVisualModeManager;

@protocol UIKeyboardVisualModeManagerDelegate <NSObject>
- (void)visualModeManager:(UIKeyboardVisualModeManager *)arg1 observedEnhancedWindowingModeEnabledDidChange:(_Bool)arg2;
- (void)visualModeManager:(UIKeyboardVisualModeManager *)arg1 didChangeToMode:(int)arg2;
- (_Bool)showingAccessoryViewOnly;
- (_Bool)textEntryFocusOnExternalDisplay;
- (_Bool)expectedInputModeIsSpecialized;
- (_Bool)expectedInputViewSetIsCustom;
- (_Bool)enhancedWindowingModeIsEnabled;
@end

