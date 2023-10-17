//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CSDCallSourceFetcherDataSource, OS_dispatch_queue;

@interface CSDCallSourceFetcher : NSObject
{
    id <CSDCallSourceFetcherDataSource> _dataSource;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    NSMutableDictionary *_pendingCompletions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009b0e0
@property(retain, nonatomic) NSMutableDictionary *pendingCompletions; // @synthesize pendingCompletions=_pendingCompletions;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) __weak id <CSDCallSourceFetcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_waitForCallSourceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ac10
- (void)handleCallSourcesChanged;	// IMP=0x001000000009a7ef
- (void)fetchCallSourceForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a6f0
- (id)initWithSerialQueue:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000009a64c
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x001000000009a632
- (id)init;	// IMP=0x000000000009a5a8

@end
