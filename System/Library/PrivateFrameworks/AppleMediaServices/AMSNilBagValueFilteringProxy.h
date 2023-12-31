//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSNilBagValueFilteringProxy : NSProxy
{
    id <AMSBagProtocol> _wrappedBag;	// 8 = 0x8
}

+ (id)proxyWithBag:(id)arg1;	// IMP=0x00600000002b421d
- (void).cxx_destruct;	// IMP=0x00000000002b49a1
@property(readonly, nonatomic) id <AMSBagProtocol> wrappedBag; // @synthesize wrappedBag=_wrappedBag;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000002b4931
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000002b48bf
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000002b48ad
- (id)_substituteNilIfNeededWithValue:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;	// IMP=0x00000000002b47ef
- (id)URLForKey:(id)arg1 account:(id)arg2;	// IMP=0x00000000002b471e
- (id)URLForKey:(id)arg1;	// IMP=0x00000000002b4671
- (id)stringForKey:(id)arg1;	// IMP=0x00000000002b45c4
- (id)integerForKey:(id)arg1;	// IMP=0x00000000002b4517
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000002b446a
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000002b43bd
- (id)boolForKey:(id)arg1;	// IMP=0x00000000002b4310
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000002b4266
- (id)initWithBag:(id)arg1;	// IMP=0x00000000002b40e0

@end

