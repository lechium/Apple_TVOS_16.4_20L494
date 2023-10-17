//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDIDSService, NSString, TUConversationProvider;
@protocol CSDConversationProviderDelegate;

@interface CSDConversationProvider : NSObject
{
    _Bool _supportsLinks;	// 8 = 0x8
    _Bool _supportsSharePlay;	// 9 = 0x9
    _Bool _supportsVideo;	// 10 = 0xa
    NSString *_identifier;	// 16 = 0x10
    TUConversationProvider *_tuProvider;	// 24 = 0x18
    CSDIDSService *_service;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSString *_pseudonymFeatureID;	// 48 = 0x30
    id <CSDConversationProviderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001a0e1c
- (id)delegate;	// IMP=0x00100000001a0e12
@property(readonly, nonatomic) _Bool supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property(readonly, nonatomic) _Bool supportsSharePlay; // @synthesize supportsSharePlay=_supportsSharePlay;
@property(readonly, nonatomic) _Bool supportsLinks; // @synthesize supportsLinks=_supportsLinks;
@property(readonly, copy, nonatomic) NSString *pseudonymFeatureID; // @synthesize pseudonymFeatureID=_pseudonymFeatureID;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) CSDIDSService *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) TUConversationProvider *tuProvider; // @synthesize tuProvider=_tuProvider;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)isPseudonymHandleForProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a0cfe
- (void)revokePseudonymHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a0c52
- (void)renewPseudonymHandle:(id)arg1 expirationDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a0b3b
- (void)generatePseudonymHandleForConversationWithExpiryDuration:(double)arg1 URI:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a0889
- (id)callerIDAccount;	// IMP=0x00100000001a0839
- (void)registerWithIDSWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a07a6
- (id)tuConversationProvider;	// IMP=0x00100000001a067d
- (id)initWithProvider:(id)arg1;	// IMP=0x00100000001a0520

@end

