//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardScenePresentationModeManager;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientInputUIHost
{
    _Bool _showing;	// 24 = 0x18
    _Bool _inputDestinationInWindowedMode;	// 25 = 0x19
    UIKeyboardScenePresentationModeManager *_presentationModeManager;	// 32 = 0x20
    struct CGRect _keyboardFrameIncludingRemoteIAV;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000b2964d
@property(nonatomic) _Bool inputDestinationInWindowedMode; // @synthesize inputDestinationInWindowedMode=_inputDestinationInWindowedMode;
@property(readonly, nonatomic) UIKeyboardScenePresentationModeManager *presentationModeManager; // @synthesize presentationModeManager=_presentationModeManager;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(readonly, nonatomic) struct CGRect keyboardFrameIncludingRemoteIAV; // @synthesize keyboardFrameIncludingRemoteIAV=_keyboardFrameIncludingRemoteIAV;
- (void)scenePresentationModeManager:(id)arg1 didChangeToMode:(unsigned long long)arg2;	// IMP=0x0000000000b29500
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b294ee
- (void)_layoutKeyboardViews:(id)arg1;	// IMP=0x0000000000b29213
- (void)completeKeyboardChange;	// IMP=0x0000000000b290f5
- (void)keyboardVisibilityDidChangeWithFrame:(struct CGRect)arg1 visible:(_Bool)arg2 tracking:(_Bool)arg3;	// IMP=0x0000000000b288c9
- (void)keyboardSendNotification:(unsigned long long)arg1 withInfo:(id)arg2 isStart:(_Bool)arg3;	// IMP=0x0000000000b2862a
- (void)applicationKeyWindowWillChange:(id)arg1;	// IMP=0x0000000000b28624
- (void)_updateKeyboardUIScenePresentationMode;	// IMP=0x0000000000b284e3
- (_Bool)shouldSnapshot;	// IMP=0x0000000000b284db
- (void)resetSnapshotWithWindowCheck:(_Bool)arg1;	// IMP=0x0000000000b2842c
- (void)snapsShotKeyboard;	// IMP=0x0000000000b2822e
- (void)signalKeyboardUIDidChange:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b280fa
- (void)setCurrentUIState:(id)arg1;	// IMP=0x0000000000b27fbe
- (_Bool)remoteKeyboardUndocked:(_Bool)arg1;	// IMP=0x0000000000b27fb6
- (id)currentHostedPIDs;	// IMP=0x0000000000b27fa9
- (_Bool)isSpotlight:(id)arg1;	// IMP=0x0000000000b27fa1
- (_Bool)isCurrentInputDestination;	// IMP=0x0000000000b27f99
- (_Bool)allowedToShowKeyboard;	// IMP=0x0000000000b27f91
- (id)arbiterProxy;	// IMP=0x0000000000b27e48
- (void)configureArbiterCommunication:(id)arg1;	// IMP=0x0000000000b27d4e
- (id)init;	// IMP=0x0000000000b27c69

@end
