//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface WKCustomProtocol : NSURLProtocol
{
    ObjectIdentifier_93c10595 _customProtocolID;	// 16 = 0x10
    struct RetainPtr<__CFRunLoop *> _initializationRunLoop;	// 24 = 0x18
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x00600000000de75d
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00600000000de754
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x00600000000de5c6
- (id).cxx_construct;	// IMP=0x00000000000dea6f
- (void).cxx_destruct;	// IMP=0x00000000000dea48
@property(readonly, nonatomic) ObjectIdentifier_93c10595 customProtocolID; // @synthesize customProtocolID=_customProtocolID;
- (void)stopLoading;	// IMP=0x00000000000de97b
- (void)startLoading;	// IMP=0x00000000000de874
@property(readonly, nonatomic) struct __CFRunLoop *initializationRunLoop;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x00000000000de765

@end

