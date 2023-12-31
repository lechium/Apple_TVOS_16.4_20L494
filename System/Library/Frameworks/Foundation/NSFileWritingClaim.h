//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingClaim
{
    NSURL *_url;	// 208 = 0xd0
    _Bool _urlDidChange;	// 216 = 0xd8
    unsigned long long _options;	// 224 = 0xe0
    NSFileAccessNode *_location;	// 232 = 0xe8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000059855e
- (void)protectFilesAgainstEviction;	// IMP=0x0000000000599675
- (id)allURLs;	// IMP=0x000000000059964a
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x000000000059961c
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x00000000005995be
- (void)devalueSelf;	// IMP=0x00000000005994e0
- (void)invokeClaimer;	// IMP=0x00000000005991b6
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000599027
- (void)granted;	// IMP=0x0000000000598bda
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000598b89
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000598b2e
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x00000000005989b7
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000598566
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000598417
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005982fe
- (void)dealloc;	// IMP=0x0000000000598299
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;	// IMP=0x0000000000598217

@end

