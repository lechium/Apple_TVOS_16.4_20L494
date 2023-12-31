//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIKeyboardScenePresentationModeManagerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardScenePresentationModeManager : NSObject
{
    _Bool _enhancedWindowingModeEnabled;	// 8 = 0x8
    id <UIKeyboardScenePresentationModeManagerDelegate> _delegate;	// 16 = 0x10
    unsigned long long _currentPresentationMode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010257f4
@property(nonatomic) unsigned long long currentPresentationMode; // @synthesize currentPresentationMode=_currentPresentationMode;
@property(nonatomic) __weak id <UIKeyboardScenePresentationModeManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enhancedWindowingModeEnabled; // @synthesize enhancedWindowingModeEnabled=_enhancedWindowingModeEnabled;
- (void)didChangeToPresentationMode:(unsigned long long)arg1;	// IMP=0x0000000001025716
- (void)_enhancedWindowingModeEnabledDidChange:(id)arg1;	// IMP=0x00000000010256e2
- (void)enhancedWindowingModeEnabledDidChange:(_Bool)arg1;	// IMP=0x00000000010256c6
- (unsigned long long)determineiPadPresentationMode;	// IMP=0x00000000010256b6
- (unsigned long long)determineiPhonePresentationMode;	// IMP=0x00000000010256ab
- (unsigned long long)determinePresentationMode;	// IMP=0x0000000001025624
@property(readonly, nonatomic) unsigned long long presentationMode;

@end

