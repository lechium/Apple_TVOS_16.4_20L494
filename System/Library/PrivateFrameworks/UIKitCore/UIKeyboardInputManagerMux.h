//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    id <_UIIVCResponseDelegateImpl> _responseDelegate;	// 16 = 0x10
    id <TIKeyboardInputManager> _systemInputManager;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0060000000aa797e
+ (id)sharedInstance;	// IMP=0x0060000000aa71e3
- (void).cxx_destruct;	// IMP=0x0000000000aa7d8d
@property(retain, nonatomic) id <TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;
@property(retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000aa7b5a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000aa7af3
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000aa7a82
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000aa7a27
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000aa79d4
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;	// IMP=0x0000000000aa77b9
- (void)releaseConnectedClients;	// IMP=0x0000000000aa77a5
- (void)removeAllClients;	// IMP=0x0000000000aa7765
- (void)removeClient:(id)arg1;	// IMP=0x0000000000aa76fc
- (void)addClient:(id)arg1;	// IMP=0x0000000000aa7613
- (void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2;	// IMP=0x0000000000aa7356
@property(readonly, nonatomic) _Bool hasSystemInputManager;
- (_Bool)_systemHasKbd;	// IMP=0x0000000000aa7262

@end
