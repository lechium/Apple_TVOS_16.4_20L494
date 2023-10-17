//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject
{
    struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> _frame;	// 8 = 0x8
    ProcessQualified_034c79a1 _identifier;	// 16 = 0x10
    struct Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>)> _policyFunction;	// 32 = 0x20
    unsigned char _defaultPolicy;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00100000000aedb0
- (id).cxx_construct;	// IMP=0x00000000000af380
- (void).cxx_destruct;	// IMP=0x00000000000af2c0
- (void)continue;	// IMP=0x00000000000af2a0
- (void)use;	// IMP=0x00000000000af280
- (void)download;	// IMP=0x00000000000af260
- (void)ignore;	// IMP=0x00000000000af240
- (void)receivedPolicyDecision:(unsigned char)arg1;	// IMP=0x00000000000af120
- (void)dealloc;	// IMP=0x00000000000aefa0
- (void)invalidate;	// IMP=0x00000000000aeec0
- (id)initWithFrame:(NakedPtr_4ac97545)arg1 identifier:(ProcessQualified_034c79a1)arg2 policyFunction:(void *)arg3 defaultPolicy:(unsigned char)arg4;	// IMP=0x00000000000aedc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

