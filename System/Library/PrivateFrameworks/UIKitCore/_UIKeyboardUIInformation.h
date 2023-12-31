//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSAnimationFenceHandle, NSString;

__attribute__((visibility("hidden")))
@interface _UIKeyboardUIInformation : NSObject
{
    _Bool _keyboardOnScreen;	// 8 = 0x8
    _Bool _assistantBarVisible;	// 9 = 0x9
    _Bool _animated;	// 10 = 0xa
    _Bool _tracking;	// 11 = 0xb
    _Bool _isLocal;	// 12 = 0xc
    _Bool _changedAccessoryOnly;	// 13 = 0xd
    _Bool _assistantOnScreenOnly;	// 14 = 0xe
    _Bool _forceNotification;	// 15 = 0xf
    _Bool _wasCausedRemotely;	// 16 = 0x10
    _Bool _dueToRotation;	// 17 = 0x11
    _Bool _startNotification;	// 18 = 0x12
    BKSAnimationFenceHandle *_animationFence;	// 24 = 0x18
    NSString *_currentInputMode;	// 32 = 0x20
    unsigned long long _uiPosition;	// 40 = 0x28
    unsigned long long _keyboardScenePresentationMode;	// 48 = 0x30
    long long _orientation;	// 56 = 0x38
    NSString *_applicationIdentifier;	// 64 = 0x40
    double _duration;	// 72 = 0x48
    unsigned long long _options;	// 80 = 0x50
    unsigned long long _assistantPosition;	// 88 = 0x58
    unsigned long long _notification;	// 96 = 0x60
    struct CGRect _keyboardPosition;	// 104 = 0x68
    struct CGRect _beginFrame;	// 136 = 0x88
    struct CGRect _endFrame;	// 168 = 0xa8
    struct CGRect _assistantFrame;	// 200 = 0xc8
}

+ (id)animationFence;	// IMP=0x001000000126da42
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000126d864
- (void).cxx_destruct;	// IMP=0x000000000126e0f5
@property(nonatomic) unsigned long long notification; // @synthesize notification=_notification;
@property(nonatomic, getter=isStartNotification) _Bool startNotification; // @synthesize startNotification=_startNotification;
@property(nonatomic) _Bool dueToRotation; // @synthesize dueToRotation=_dueToRotation;
@property(nonatomic) _Bool wasCausedRemotely; // @synthesize wasCausedRemotely=_wasCausedRemotely;
@property(nonatomic) _Bool forceNotification; // @synthesize forceNotification=_forceNotification;
@property(nonatomic) struct CGRect assistantFrame; // @synthesize assistantFrame=_assistantFrame;
@property(nonatomic) unsigned long long assistantPosition; // @synthesize assistantPosition=_assistantPosition;
@property(nonatomic) _Bool assistantOnScreenOnly; // @synthesize assistantOnScreenOnly=_assistantOnScreenOnly;
@property(nonatomic) _Bool changedAccessoryOnly; // @synthesize changedAccessoryOnly=_changedAccessoryOnly;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame=_beginFrame;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property unsigned long long keyboardScenePresentationMode; // @synthesize keyboardScenePresentationMode=_keyboardScenePresentationMode;
@property unsigned long long uiPosition; // @synthesize uiPosition=_uiPosition;
@property(copy, nonatomic) NSString *currentInputMode; // @synthesize currentInputMode=_currentInputMode;
@property _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly) _Bool tracking; // @synthesize tracking=_tracking;
@property(readonly) _Bool animated; // @synthesize animated=_animated;
@property _Bool assistantBarVisible; // @synthesize assistantBarVisible=_assistantBarVisible;
@property(readonly) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(readonly, copy) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(readonly) struct CGRect keyboardPosition; // @synthesize keyboardPosition=_keyboardPosition;
- (void)addNotificationInfo:(id)arg1 isStart:(_Bool)arg2;	// IMP=0x000000000126dc79
- (_Bool)hasValidNotification;	// IMP=0x000000000126dc60
- (id)notificationInfo;	// IMP=0x000000000126da8d
- (void)resetAnimationFencing;	// IMP=0x000000000126da5b
- (id)description;	// IMP=0x000000000126d86c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000126d3b1
- (id)copyWithoutFence;	// IMP=0x000000000126d064
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000126cd1d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000126c877
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 orientation:(long long)arg5 fence:(id)arg6;	// IMP=0x000000000126c7a0
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 fence:(id)arg5;	// IMP=0x000000000126c683
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 orientation:(long long)arg5 wantsFence:(_Bool)arg6;	// IMP=0x000000000126c5a1
- (id)initWithKeyboardFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2 animated:(_Bool)arg3 tracking:(_Bool)arg4 wantsFence:(_Bool)arg5;	// IMP=0x000000000126c48a

@end

