//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyAnalytics : NSObject
{
}

+ (id)reporter;	// IMP=0x00800000000062e9
- (void)_addURL:(id)arg1 toContext:(id)arg2;	// IMP=0x0000000000006cd3
- (void)reportError:(id)arg1 forURL:(id)arg2;	// IMP=0x0000000000006ac2
- (void)reportHttpStatus:(long long)arg1 grpcStatus:(long long)arg2 forURL:(id)arg3;	// IMP=0x0000000000006964
- (void)reportAbsintheMetrics:(id)arg1;	// IMP=0x00000000000067aa
- (void)reportConnectionMetrics:(id)arg1;	// IMP=0x000000000000641e
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x000000000000633e

@end

