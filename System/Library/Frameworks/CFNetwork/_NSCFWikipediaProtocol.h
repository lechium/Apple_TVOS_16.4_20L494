//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLProtocol.h"

@interface _NSCFWikipediaProtocol : NSURLProtocol
{
    const void *_instance;	// 16 = 0x10
    const struct CFURLProtocolInstanceCallbacks *_callbacks;	// 24 = 0x18
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x00600000000614bd
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00600000000614b4
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0060000000061499
- (void)stopLoading;	// IMP=0x0000000000061478
- (void)startLoading;	// IMP=0x0000000000061457
- (void)dealloc;	// IMP=0x0000000000061400
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x0000000000061349

@end

