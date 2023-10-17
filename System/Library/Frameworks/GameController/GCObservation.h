//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCObservation : NSObject
{
    id _observer;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    void *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009c7db
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (id)description;	// IMP=0x000000000009c720
- (unsigned long long)hash;	// IMP=0x000000000009c6ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c5ff
- (id)initWithObserver:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000009c585

@end

