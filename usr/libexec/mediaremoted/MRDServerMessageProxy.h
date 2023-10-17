//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSHashTable, Protocol;

@interface MRDServerMessageProxy : NSProxy
{
    NSHashTable *_objects;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
}

+ (id)proxyForObjects:(id)arg1 protocol:(id)arg2;	// IMP=0x004000000009c307
+ (id)proxyForObject:(id)arg1 protocol:(id)arg2;	// IMP=0x001000000009c22f
- (void).cxx_destruct;	// IMP=0x002000000009c80a
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSHashTable *objects; // @synthesize objects=_objects;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000009c6ef
- (void)forwardInvocation:(id)arg1;	// IMP=0x001000000009c532

@end

