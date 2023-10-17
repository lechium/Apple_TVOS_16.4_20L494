//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLProtocol.h"

@interface _NSCFURLProtocol : NSURLProtocol
{
    struct _CFURLProtocol *_prot;	// 16 = 0x10
    struct NSCFURLProtocolClient *_client;	// 24 = 0x18
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x0060000000090a60
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;	// IMP=0x00600000000909e9
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x0060000000090951
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0060000000090927
+ (_Bool)canInitWithTask:(id)arg1;	// IMP=0x00600000000908d8
+ (const struct InternalProtocolImplementation *)_cf_internalImpl;	// IMP=0x00600000000908cf
- (void)stopLoading;	// IMP=0x000000000009052e
- (void)startLoading;	// IMP=0x00000000000904b0
- (void)dealloc;	// IMP=0x0000000000090454
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x000000000009032b

@end
