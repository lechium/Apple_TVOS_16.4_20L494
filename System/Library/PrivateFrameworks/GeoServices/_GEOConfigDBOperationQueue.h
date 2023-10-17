//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSMutableArray, geo_isolater;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBOperationQueue : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    geo_isolater *_isolator;	// 16 = 0x10
    NSMutableArray *_operations;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000295f1e
- (void)flushOnDBQueue;	// IMP=0x0000000000295b78
- (void)flush;	// IMP=0x0000000000295b0f
- (void)cancelTimer;	// IMP=0x0000000000295af1
- (void)scheduleTimer;	// IMP=0x0000000000295abe
- (void)enqueueOperation:(id)arg1;	// IMP=0x0000000000295972
- (void)dealloc;	// IMP=0x000000000029592b
- (id)init:(id)arg1;	// IMP=0x000000000029579c

@end
