//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSDReporterDataSource;

@interface CSDAggregateDictionaryReporter : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

- (void);	// IMP=0x0020000000019d73
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)reportingController:(id)arg1 relayMessageReceived:(id)arg2 fromPairedDevice:(_Bool)arg3;	// IMP=0x0010000000019b68
- (id)init;	// IMP=0x0010000000019a13

// Remaining properties
@property(nonatomic) __weak id <CSDReporterDataSource> dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

