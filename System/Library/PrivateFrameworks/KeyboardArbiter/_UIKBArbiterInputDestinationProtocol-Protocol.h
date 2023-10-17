//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeyboardArbiter/_UIKBArbiterInputEventsProtocol-Protocol.h>

@class NSString, UIKBArbiterClientFocusContext, _UIKeyboardChangedInformation;

@protocol _UIKBArbiterInputDestinationProtocol <_UIKBArbiterInputEventsProtocol>
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(UIKBArbiterClientFocusContext *)arg2 stealingKeyboard:(_Bool)arg3 onCompletion:(void (^)(_Bool))arg4;
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(UIKBArbiterClientFocusContext *)arg2 onCompletion:(void (^)(_Bool))arg3;
- (void)applicationShouldFocusWithBundle:(NSString *)arg1 onCompletion:(void (^)(_Bool))arg2;
- (void)setClientFocusContext:(UIKBArbiterClientFocusContext *)arg1;
- (void)setWindowContextID:(unsigned int)arg1 focusContext:(UIKBArbiterClientFocusContext *)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4;
- (void)signalKeyboardClientChanged:(_UIKeyboardChangedInformation *)arg1 onCompletion:(void (^)(void))arg2;
- (void)notifyIAVHeight:(double)arg1;
@end

